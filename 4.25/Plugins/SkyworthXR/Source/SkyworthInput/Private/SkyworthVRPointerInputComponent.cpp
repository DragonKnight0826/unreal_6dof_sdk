// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkyworthVRPointerInputComponent.h"
//#include "SkyworthVRController.h"
#include "SkyworthVRActorPointerResponder.h"
#include "SkyworthVRComponentPointerResponder.h"
#include "SkyworthVRWidgetInteractionComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"
#include <OculusHMDModule.h>
#include "OculusInputState.h"

DEFINE_LOG_CATEGORY_STATIC(LogSkyworthVRPointerInput, Log, All);

USkyworthVRPointerInputComponent::USkyworthVRPointerInputComponent(const FObjectInitializer& ObjectInitializer)
: FarClippingDistance(1000.0f)
, NearClippingDistance(30.0f)
, UseControllerClick(true)
, UseTouchClick(false)
, WidgetInteraction(nullptr)
, Pointer(nullptr)
, LatestHitResult(ForceInit)
, PendingClickActor(nullptr)
, PendingClickComponent(nullptr)
, preIsOritationValid(false)
{
	PrimaryComponentTick.bCanEverTick = true;

	WidgetInteraction = ObjectInitializer.CreateDefaultSubobject<USkyworthVRWidgetInteractionComponent>(this, TEXT("SkyworthVRWidgetInteraction"));
}

void USkyworthVRPointerInputComponent::SetPointer(TScriptInterface<ISkyworthVRPointer> NewPointer)
{
	Pointer = NewPointer;
}

TScriptInterface<ISkyworthVRPointer> USkyworthVRPointerInputComponent::GetPointer() const
{
	return Pointer;
}

bool USkyworthVRPointerInputComponent::IsBlockingHit() const
{
	return LatestHitResult.IsValidBlockingHit();
}

AActor* USkyworthVRPointerInputComponent::GetHitActor() const
{
	return LatestHitResult.GetActor();
}

UPrimitiveComponent* USkyworthVRPointerInputComponent::GetHitComponent() const
{
	return LatestHitResult.GetComponent();
}

FVector USkyworthVRPointerInputComponent::GetIntersectionLocation() const
{
	if (IsBlockingHit())
	{
		return LatestHitResult.Location;
	}

	return FVector::ZeroVector;
}

FHitResult USkyworthVRPointerInputComponent::GetLatestHitResult() const
{
	return LatestHitResult;
}

void USkyworthVRPointerInputComponent::OnRegister()
{
	Super::OnRegister();
}

void USkyworthVRPointerInputComponent::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetOwner(), 0);

	if (UseControllerClick)
	{
		// Bind Controller click events.
		PlayerController->InputComponent->BindKey(EKeys::Daydream_Right_Trackpad_Click, EInputEvent::IE_Pressed, this, &USkyworthVRPointerInputComponent::ClickButtonPressed);
		PlayerController->InputComponent->BindKey(EKeys::Daydream_Right_Trackpad_Click, EInputEvent::IE_Released, this, &USkyworthVRPointerInputComponent::ClickButtonReleased);
		PlayerController->InputComponent->BindKey(SkyworthInput::FSkyworthKey::SkyworthRemote_Enter, EInputEvent::IE_Pressed, this, &USkyworthVRPointerInputComponent::ClickButtonPressed);
		PlayerController->InputComponent->BindKey(SkyworthInput::FSkyworthKey::SkyworthRemote_Enter, EInputEvent::IE_Released, this, &USkyworthVRPointerInputComponent::ClickButtonReleased);
	}

	if (UseTouchClick)
	{
		// Bind touch events.
		FInputTouchBinding& TouchStartedBinding = PlayerController->InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &USkyworthVRPointerInputComponent::TouchPressed);
		TouchStartedBinding.bConsumeInput = false;
		FInputTouchBinding& TouchStoppedBinding = PlayerController->InputComponent->BindTouch(EInputEvent::IE_Released, this, &USkyworthVRPointerInputComponent::TouchReleased);
		TouchStoppedBinding.bConsumeInput = false;

		// Bind Mouse events for the editor so that we do not need to rely on "Use Mouse for Touch" enabled which is not working when the mouse moves outside the window.
		PlayerController->InputComponent->BindAction("EditorTouchTrigger", EInputEvent::IE_Pressed, this, &USkyworthVRPointerInputComponent::ClickButtonPressed);
		PlayerController->InputComponent->BindAction("EditorTouchTrigger", EInputEvent::IE_Released, this, &USkyworthVRPointerInputComponent::ClickButtonReleased);
	}
}

bool USkyworthVRPointerInputComponent::GetControllerConnected() 
{
#if GOOGLEVRCONTROLLER_SUPPORTED_ANDROID_PLATFORMS
	ovrpBool bResult;
	bool bIsOritationValid = OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodeOrientationTracked2(ovrpNode::ovrpNode_HandLeft, &bResult)) && bResult;
	bIsOritationValid = bIsOritationValid || OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodeOrientationTracked2(ovrpNode::ovrpNode_HandRight, &bResult)) && bResult;
	return bIsOritationValid;
#else
	return false;
#endif

}
void USkyworthVRPointerInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetNodePoseState3 start"));
	bool bIsOritationValid = GetControllerConnected();
	if (preIsOritationValid != bIsOritationValid)
	{
		if (bIsOritationValid)
		{
			MuitiDelagateWithOneParam.Broadcast(true);
		}
		else
		{
			MuitiDelagateWithOneParam.Broadcast(false);
		}
	}
	preIsOritationValid = bIsOritationValid;
	// Since it isn't possible for us to store the Pointer as a weak reference,
	// we explicitly check to see if it is marked to be killed and null it out.
	if (Pointer != nullptr && Pointer.GetObject()->IsPendingKill())
	{
		Pointer = nullptr;
	}

	if (Pointer == nullptr)
	{
		UE_LOG(LogSkyworthVRPointerInput, Warning, TEXT("Pointer must be set for SkyworthVRPointerInputComponent to function"));
		return;
	}
#if GOOGLEVRCONTROLLER_SUPPORTED_ANDROID_PLATFORMS
	ovrpBool ClickState;
	if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetKeyStatue(&ClickState)))
	{
		ClickCurrentState = ClickState;
	}
	if (!ClickPreState && ClickCurrentState)
	{
		//ClickButtonDown
		UE_LOG(LogSkyworthVRPointerInput, Log, TEXT("Click state Down"));
		ClickButtonPressed();
	}
	if (ClickPreState && !ClickCurrentState) 
	{
		UE_LOG(LogSkyworthVRPointerInput, Log, TEXT("Click state Up"));
		//ClickButtonUp
		ClickButtonReleased();
	}
	ClickPreState = ClickCurrentState;
#endif
	AActor* PreviousHitActor = GetHitActor();
	UPrimitiveComponent* PreviousHitComponent = GetHitComponent();

	if (Pointer->IsPointerActive())
	{
		// Determine what the pointer is currently hitting
		LatestHitResult = PerformHitDetection();
	}
	else
	{
		LatestHitResult.Reset();
	}

	if (WidgetInteraction != nullptr)
	{
		WidgetInteraction->UpdateState(LatestHitResult);
	}

	AActor* HitActor = GetHitActor();
	UPrimitiveComponent* HitComponent = GetHitComponent();

	bool bActorChanged = HitActor != PreviousHitActor;
	bool bComponentChanged = HitComponent != PreviousHitComponent;
	bool bIsHitInteractive =  HitActor != nullptr && HitActor->Implements<USkyworthVRActorPointerResponder>();
	bIsHitInteractive = bIsHitInteractive || (HitComponent != nullptr && HitComponent->Implements<USkyworthVRComponentPointerResponder>());

	if (WidgetInteraction != nullptr)
	{
		bIsHitInteractive = bIsHitInteractive || WidgetInteraction->IsOverInteractableWidget();
	}

	// Comoponent Exit
	if (bComponentChanged && PreviousHitComponent != nullptr)
	{
		OnPointerExitComponentEvent.Broadcast(PreviousHitComponent, LatestHitResult);

		if (PreviousHitComponent->Implements<USkyworthVRComponentPointerResponder>())
		{
			ISkyworthVRComponentPointerResponder::Execute_OnPointerExit(PreviousHitComponent, PreviousHitComponent, LatestHitResult, this);
		}
	}

	// Actor Exit
	if (bActorChanged && PreviousHitActor != nullptr)
	{
		OnPointerExitActorEvent.Broadcast(PreviousHitActor, LatestHitResult);

		if (PreviousHitActor->Implements<USkyworthVRActorPointerResponder>())
		{
			ISkyworthVRActorPointerResponder::Execute_OnPointerExit(PreviousHitActor, PreviousHitActor, LatestHitResult, this);
		}

		Pointer->OnPointerExit(LatestHitResult);
	}

	// Actor Enter
	if (bActorChanged && HitActor != nullptr)
	{
		OnPointerEnterActorEvent.Broadcast(LatestHitResult);

		if (HitActor->Implements<USkyworthVRActorPointerResponder>())
		{
			ISkyworthVRActorPointerResponder::Execute_OnPointerEnter(HitActor, LatestHitResult, this);
		}

		Pointer->OnPointerEnter(LatestHitResult, bIsHitInteractive);
	}

	// Component Enter
	if (bComponentChanged && HitComponent != nullptr)
	{
		OnPointerEnterComponentEvent.Broadcast(LatestHitResult);

		if (HitComponent->Implements<USkyworthVRComponentPointerResponder>())
		{
			ISkyworthVRComponentPointerResponder::Execute_OnPointerEnter(HitComponent, LatestHitResult, this);
		}
	}

	// Component Changed
	if (!bActorChanged && bComponentChanged && HitActor != nullptr && HitActor->Implements<USkyworthVRActorPointerResponder>())
	{
		ISkyworthVRActorPointerResponder::Execute_OnPointerComponentChanged(PreviousHitActor, PreviousHitComponent, LatestHitResult, this);
	}

	// Actor Hover
	if (!bActorChanged && HitActor != nullptr)
	{
		OnPointerHoverActorEvent.Broadcast(LatestHitResult);

		if (HitActor->Implements<USkyworthVRActorPointerResponder>())
		{
			ISkyworthVRActorPointerResponder::Execute_OnPointerHover(HitActor, LatestHitResult, this);
		}

		Pointer->OnPointerHover(LatestHitResult, bIsHitInteractive);
	}

	// Component Hover
	if (!bComponentChanged && HitComponent != nullptr)
	{
		OnPointerHoverComponentEvent.Broadcast(LatestHitResult);

		if (HitComponent->Implements<USkyworthVRComponentPointerResponder>())
		{
			ISkyworthVRComponentPointerResponder::Execute_OnPointerHover(HitComponent, LatestHitResult, this);
		}
	}

	PostHitDetection();
}

// If we were already pointing at an object we must check that object against the exit radius
// to make sure we are no longer pointing at it to prevent flicker.
void USkyworthVRPointerInputComponent::CheckHitObjectOnRadius(FHitResult& HitResult, FVector PointerStart, FVector PointerEnd)
{
	float EnterRadius, ExitRadius;
	Pointer->GetRadius(EnterRadius, ExitRadius);
	FCollisionObjectQueryParams ObjectParams(FCollisionObjectQueryParams::AllObjects);
	FCollisionQueryParams Params = FCollisionQueryParams::DefaultQueryParam;
	if (LatestHitResult.GetComponent() != nullptr && HitResult.GetComponent() != LatestHitResult.GetComponent())
	{
		FHitResult ExitHitResult = FHitResult(ForceInit);
		GetWorld()->SweepSingleByObjectType(ExitHitResult, PointerStart, PointerEnd, FQuat(), ObjectParams, FCollisionShape::MakeSphere(ExitRadius), Params);

		if (ExitHitResult.GetComponent() == LatestHitResult.GetComponent())
		{
			HitResult = ExitHitResult;
		}
	}
}

FHitResult USkyworthVRPointerInputComponent::PerformHitDetection()
{
	FVector PointerStart, PointerEnd;
	FHitResult HitResult = FHitResult(ForceInit);
	FCollisionObjectQueryParams ObjectParams(FCollisionObjectQueryParams::AllObjects);
	FCollisionQueryParams Params = FCollisionQueryParams::DefaultQueryParam;
	Params.AddIgnoredActor(GetOwner());

	float EnterRadius, ExitRadius;
	if (Pointer->GetPointerInputMode() == ESkyworthVRPointerInputMode::HybridExperimental)
	{
		PointerStart = Pointer->GetOrigin();
		PointerEnd = PointerStart + (Pointer->GetDirection() * Pointer->GetMaxPointerDistance());
		Pointer->GetRadius(EnterRadius, ExitRadius);
		GetWorld()->SweepSingleByObjectType(HitResult, PointerStart, PointerEnd, FQuat(), ObjectParams, FCollisionShape::MakeSphere(EnterRadius), Params);
		CheckHitObjectOnRadius(HitResult, PointerStart, PointerEnd);

		if (HitResult.GetComponent() == nullptr)
		{
			GetPointerStartAndEnd(PointerStart, PointerEnd, ESkyworthVRPointerInputMode::Camera);
			Pointer->GetRadius(EnterRadius, ExitRadius);
			GetWorld()->SweepSingleByObjectType(HitResult, PointerStart, PointerEnd, FQuat(), ObjectParams, FCollisionShape::MakeSphere(EnterRadius), Params);
			CheckHitObjectOnRadius(HitResult, PointerStart, PointerEnd);
		}
	}
	else
	{
		GetPointerStartAndEnd(PointerStart, PointerEnd, Pointer->GetPointerInputMode());
		Pointer->GetRadius(EnterRadius, ExitRadius);
		GetWorld()->SweepSingleByObjectType(HitResult, PointerStart, PointerEnd, FQuat(), ObjectParams, FCollisionShape::MakeSphere(EnterRadius), Params);
		CheckHitObjectOnRadius(HitResult, PointerStart, PointerEnd);
	}
	return HitResult;
}

void USkyworthVRPointerInputComponent::PostHitDetection()
{
	// Override me.
}

void USkyworthVRPointerInputComponent::GetPointerStartAndEnd(FVector& OutPointerStart, FVector& OutPointerEnd, ESkyworthVRPointerInputMode InputMode) const
{
	switch (InputMode)
	{
		case ESkyworthVRPointerInputMode::Camera:
		{
			FVector RealPointerStart = Pointer->GetOrigin();
			FVector RealPointerEnd = RealPointerStart + (Pointer->GetDirection() * Pointer->GetDefaultReticleDistance());

			FVector CameraLocation = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetCameraLocation();
			FVector Direction = RealPointerEnd - CameraLocation;
			Direction.Normalize();

			OutPointerStart = CameraLocation + (Direction * NearClippingDistance);
			OutPointerEnd = CameraLocation + (Direction * FarClippingDistance);

			break;
		}
		case ESkyworthVRPointerInputMode::Direct:
		{
			OutPointerStart = Pointer->GetOrigin();
			OutPointerEnd = OutPointerStart + (Pointer->GetDirection() * FarClippingDistance);
			break;
		}
		default:
		check(false);
	}
}

void USkyworthVRPointerInputComponent::ClickButtonPressed()
{
	if (WidgetInteraction != nullptr)
	{
		WidgetInteraction->PressPointerKey(EKeys::LeftMouseButton);
	}

	OnPointerPressedEvent.Broadcast(LatestHitResult);

	PendingClickActor = GetHitActor();
	PendingClickComponent = GetHitComponent();

	AActor* HitActor = GetHitActor();
	UPrimitiveComponent* HitComponent = GetHitComponent();

	if (HitActor != nullptr && HitActor->Implements<USkyworthVRActorPointerResponder>())
	{
		ISkyworthVRActorPointerResponder::Execute_OnPointerPressed(HitActor, LatestHitResult, this);
	}

	if (HitComponent != nullptr && HitComponent->Implements<USkyworthVRComponentPointerResponder>())
	{
		ISkyworthVRComponentPointerResponder::Execute_OnPointerPressed(HitComponent, LatestHitResult, this);
	}

	PendingClickActor = HitActor;
	PendingClickComponent = HitComponent;
}

void USkyworthVRPointerInputComponent::ClickButtonReleased()
{
	if (WidgetInteraction != nullptr)
	{
		WidgetInteraction->ReleasePointerKey(EKeys::LeftMouseButton);
	}

	OnPointerReleasedEvent.Broadcast(LatestHitResult);

	AActor* HitActor = GetHitActor();
	UPrimitiveComponent* HitComponent = GetHitComponent();

	if (PendingClickActor != nullptr)
	{
		if (PendingClickActor->Implements<USkyworthVRActorPointerResponder>())
		{
			ISkyworthVRActorPointerResponder::Execute_OnPointerReleased(PendingClickActor, LatestHitResult, this);
		}

		if (PendingClickActor == HitActor)
		{
			OnPointerClickActorEvent.Broadcast(LatestHitResult);

			if (HitActor != nullptr && HitActor->Implements<USkyworthVRActorPointerResponder>())
			{
				ISkyworthVRActorPointerResponder::Execute_OnPointerClick(HitActor, LatestHitResult, this);
			}
		}
	}

	if (PendingClickComponent != nullptr)
	{
		if (PendingClickComponent->Implements<USkyworthVRComponentPointerResponder>())
		{
			ISkyworthVRComponentPointerResponder::Execute_OnPointerReleased(PendingClickComponent, LatestHitResult, this);
		}

		if (PendingClickComponent == HitComponent)
		{
			OnPointerClickComponentEvent.Broadcast(LatestHitResult);

			if (HitComponent != nullptr && HitComponent->Implements<USkyworthVRComponentPointerResponder>())
			{
				ISkyworthVRComponentPointerResponder::Execute_OnPointerClick(HitComponent, LatestHitResult, this);
			}
		}
	}

	PendingClickActor = nullptr;
	PendingClickComponent = nullptr;
}

void USkyworthVRPointerInputComponent::TouchPressed(ETouchIndex::Type FingerIndex, FVector Location)
{
	ClickButtonPressed();
}

void USkyworthVRPointerInputComponent::TouchReleased(ETouchIndex::Type FingerIndex, FVector Location)
{
	ClickButtonReleased();
}
