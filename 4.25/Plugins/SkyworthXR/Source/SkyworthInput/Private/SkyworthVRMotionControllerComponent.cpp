// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkyworthVRMotionControllerComponent.h"
#include "SkyworthInput.h"
#include "SkyworthVRLaserPlaneComponent.h"
#include "SkyworthVRLaserVisualComponent.h"
#include "SkyworthVRControllerFunctionLibrary.h"
#include "MotionControllerComponent.h"
#include "Materials/MaterialParameterCollection.h"
#include "Materials/MaterialParameterCollectionInstance.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/MaterialBillboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/WorldSettings.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"
#include "Modules/ModuleManager.h"
#include "OculusInputState.h"

DEFINE_LOG_CATEGORY_STATIC(LogSkyworthVRMotionController, Log, All);

const FVector USkyworthVRMotionControllerComponent::TOUCHPAD_POINT_DIMENSIONS = FVector(0.01f, 0.01f, 0.0004f);
const FVector USkyworthVRMotionControllerComponent::BATTERY_INDICATOR_TRANSLATION = FVector(-3.0f, 0.0f, 0.001f);
const FVector USkyworthVRMotionControllerComponent::BATTERY_INDICATOR_SCALE = FVector(0.032f, 0.015f, 1.0f);
const FQuat USkyworthVRMotionControllerComponent::BATTERY_INDICATOR_ROTATION = FQuat(FVector(0.0f, 1.0f, 0.0f), PI/2.0f);

USkyworthVRMotionControllerComponent::USkyworthVRMotionControllerComponent()
: ControllerMesh(nullptr)
, TriggerMesh(nullptr)
, ControllerTouchPointMesh(nullptr)
, IdleMaterial(nullptr)
, TouchpadMaterial(nullptr)
, AppMaterial(nullptr)
, SystemMaterial(nullptr)
, ControllerTouchPointMaterial(nullptr)
, ParameterCollection(nullptr)
, ControllerBatteryMesh(nullptr)
, BatteryTextureParameterName("Texture")
, BatteryUnknownTexture(nullptr)
, BatteryFullTexture(nullptr)
, BatteryAlmostFullTexture(nullptr)
, BatteryMediumTexture(nullptr)
, BatteryLowTexture(nullptr)
, BatteryCriticalLowTexture(nullptr)
, BatteryChargingTexture(nullptr)
, EnterRadiusCoeff(0.1f)
, ExitRadiusCoeff(0.2f)
, PointerInputMode(ESkyworthVRPointerInputMode::Camera)
, RequireInputComponent(true)
, IsLockedToHead(false)
, TranslucentSortPriority(1)
, PlayerController(nullptr)
, InputComponent(nullptr)
, MotionControllerComponent(nullptr)
, ControllerMeshComponent(nullptr)
, ControllerTriggerMeshComponent(nullptr)
, ControllerTouchPointMeshComponent(nullptr)
, ControllerBatteryMeshComponent(nullptr)
, ControllerBatteryStaticMaterial(nullptr)
, ControllerBatteryMaterial(nullptr)
, LaserVisualComponent(nullptr)
, TouchMeshScale(FVector::ZeroVector)
, bAreSubComponentsEnabled(true)
, LastKnownBatteryState(ESkyworthVRControllerBatteryLevel::Unknown)
, bBatteryWasCharging(false)
{
	PrimaryComponentTick.bCanEverTick = true;
	bAutoActivate = true;

	//if (FModuleManager::Get().IsModuleLoaded("SkyworthInput"))
	//{
	
	//ControllerMesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/SkyworthXR/ControllerMesh")));
	ControllerMesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/SkyworthXR/Mesh/Controller_Handle001")));
	TriggerMesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/SkyworthXR/Mesh/Controller_Trigger001")));
		ControllerTouchPointMesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/Engine/BasicShapes/Cylinder")));
		IdleMaterial = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/SkyworthXR/Material/ControllerIdleMaterial")));
		TouchpadMaterial = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/SkyworthXR/Material/ControllerPadMaterial")));
		AppMaterial = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/SkyworthXR/Material/ControllerAppMaterial")));
		SystemMaterial = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/SkyworthXR/Material/ControllerSysMaterial")));
		ControllerTouchPointMaterial = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/SkyworthXR/Material/TouchMaterial")));
		ControllerBatteryMesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/Engine/BasicShapes/Plane")));
		ControllerBatteryStaticMaterial = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/SkyworthXR/Material/BatteryIndicatorMaterial")));
		BatteryUnknownTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, TEXT("/SkyworthXR/Texture/BatteryIndicatorUnknown")));
		BatteryFullTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, TEXT("/SkyworthXR/Texture/BatteryIndicatorFull")));
		BatteryAlmostFullTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, TEXT("/SkyworthXR/Texture/BatteryIndicatorAlmostFull")));
		BatteryMediumTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, TEXT("/SkyworthXR/Texture/BatteryIndicatorMedium")));
		BatteryLowTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, TEXT("/SkyworthXR/Texture/BatteryIndicatorLow")));
		BatteryCriticalLowTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, TEXT("/SkyworthXR/Texture/BatteryIndicatorCriticalLow")));
		BatteryChargingTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, TEXT("/SkyworthXR/Texture/BatteryIndicatorCharging")));
		ParameterCollection = Cast<UMaterialParameterCollection>(StaticLoadObject(UMaterialParameterCollection::StaticClass(), NULL, TEXT("/SkyworthXR/Material/ControllerParameters")));
	//}
}

UMotionControllerComponent* USkyworthVRMotionControllerComponent::GetMotionController() const
{
	return MotionControllerComponent;
}

UStaticMeshComponent* USkyworthVRMotionControllerComponent::GetControllerMesh() const
{
	return ControllerMeshComponent;
}

UMaterialInstanceDynamic* USkyworthVRMotionControllerComponent::GetLaserMaterial() const
{
	return LaserVisualComponent != nullptr ? LaserVisualComponent->GetLaserMaterial() : nullptr;
}

void USkyworthVRMotionControllerComponent::SetPointerDistance(float Distance)
{
	if (LaserVisualComponent != nullptr)
	{
		PointerDistance = Distance;
		LaserVisualComponent->SetPointerDistance(Distance, GetWorldToMetersScale(), PlayerController->PlayerCameraManager->GetCameraLocation());
	}
}

void USkyworthVRMotionControllerComponent::OnRegister()
{
	Super::OnRegister();

	// Check that required UPROPERTIES are set.
	check(ControllerMesh != nullptr);
	check(ControllerTouchPointMesh != nullptr);
	check(IdleMaterial != nullptr);
	check(TouchpadMaterial != nullptr);
	check(AppMaterial != nullptr);
	check(SystemMaterial != nullptr);
	check(ControllerTouchPointMaterial != nullptr);
	check(ControllerBatteryMesh != nullptr);
	check(ControllerBatteryStaticMaterial != nullptr);
	check(BatteryUnknownTexture != nullptr);
	check(BatteryFullTexture != nullptr);
	check(BatteryAlmostFullTexture != nullptr);
	check(BatteryMediumTexture != nullptr);
	check(BatteryLowTexture != nullptr);
	check(BatteryCriticalLowTexture != nullptr);
	check(BatteryChargingTexture != nullptr);
	check(ParameterCollection != nullptr);

	// Get the world to meters scale.
	const float WorldToMetersScale = GetWorldToMetersScale();

	// Create the MotionController and attach it to ourselves.
	MotionControllerComponent = NewObject<UMotionControllerComponent>(this, TEXT("MotionController"));
	MotionControllerComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MotionControllerComponent->SetupAttachment(this);
	MotionControllerComponent->RegisterComponent();

	// Create the Controller mesh and attach it to the MotionController.
	ControllerMeshComponent = NewObject<UStaticMeshComponent>(this, TEXT("ControllerMesh"));
	ControllerMeshComponent->SetStaticMesh(ControllerMesh);
	ControllerMeshComponent->SetTranslucentSortPriority(TranslucentSortPriority);
	ControllerMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ControllerMeshComponent->SetupAttachment(MotionControllerComponent);
	ControllerMeshComponent->RegisterComponent();

	// Position the ControllerMesh so that the back of the model is at the pivot point.
	// This code assumes that the 3d model was exported with the mesh centered.
	FVector BoundsMin, BoundsMax;
	ControllerMeshComponent->GetLocalBounds(BoundsMin, BoundsMax);
	float ControllerLength = BoundsMax.X - BoundsMin.X;
	float ControllerHalfLength = ControllerLength * 0.5f * CONTROLLER_OFFSET_RATIO;
	ControllerMeshComponent->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));
	ControllerMeshComponent->SetRelativeRotation(FRotator(0.0f,-90.0f,90.0f));
	ControllerMeshComponent->SetRelativeLocation(FVector(0, 0.0f, 0.0f));

	//Create Trigger mesh and attach it to the ControllerMesh
	ControllerTriggerMeshComponent = NewObject<UStaticMeshComponent>(this, TEXT("TriggerMesh"));
	ControllerTriggerMeshComponent->SetStaticMesh(TriggerMesh);
	ControllerTriggerMeshComponent->SetTranslucentSortPriority(TranslucentSortPriority);
	ControllerTriggerMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ControllerTriggerMeshComponent->SetupAttachment(ControllerMeshComponent);
	ControllerTriggerMeshComponent->RegisterComponent();

	// Create the Controller Touch Point Mesh and attach it to the ControllerMesh.
	{
		ControllerTouchPointMeshComponent = NewObject<UStaticMeshComponent>(this, TEXT("ControllerTouchPointMesh"));
		ControllerTouchPointMeshComponent->SetStaticMesh(ControllerTouchPointMesh);
		ControllerTouchPointMeshComponent->SetTranslucentSortPriority(TranslucentSortPriority + 1);
		ControllerTouchPointMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		ControllerTouchPointMeshComponent->SetMaterial(0, ControllerTouchPointMaterial);

		// Determine what the scale of the mesh should be based on the
		// Size of the mesh and the desired size of the touch point.
		// This assumes that the controller is a certain size.
		FVector TouchMeshSize;
		ControllerTouchPointMeshComponent->GetLocalBounds(BoundsMin, BoundsMax);
		TouchMeshSize = BoundsMax - BoundsMin;
		TouchMeshScale = TOUCHPAD_POINT_DIMENSIONS * WorldToMetersScale;
		TouchMeshScale.X /= TouchMeshSize.X;
		TouchMeshScale.Y /= TouchMeshSize.Y;
		TouchMeshScale.Z /= TouchMeshSize.Z;

		ControllerTouchPointMeshComponent->SetRelativeScale3D(TouchMeshScale);
		ControllerTouchPointMeshComponent->SetupAttachment(ControllerMeshComponent);
		ControllerTouchPointMeshComponent->RegisterComponent();
	}

	// Create the Controller Battery Mesh and attach it to the ControllerMesh.
	{
		ControllerBatteryMeshComponent = NewObject<UStaticMeshComponent>(this, TEXT("ControllerBatteryMesh"));
		ControllerBatteryMeshComponent->SetStaticMesh(ControllerBatteryMesh);
		ControllerBatteryMeshComponent->SetTranslucentSortPriority(TranslucentSortPriority + 1);
		ControllerBatteryMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		// Create the dynamic material that will hold the current battery level texture.
		ControllerBatteryMaterial = UMaterialInstanceDynamic::Create(ControllerBatteryStaticMaterial->GetMaterial(), this);
		//ControllerBatteryMaterial->SetTextureParameterValue(BatteryTextureParameterName, BatteryUnknownTexture);
		ControllerBatteryMaterial->SetTextureParameterValue(BatteryTextureParameterName, BatteryFullTexture);
		ControllerBatteryMeshComponent->SetMaterial(0, ControllerBatteryMaterial);

		// Determine the size and position of the mesh.  This assumes that
		// the controller is a certain size.
		FTransform BatteryTransform;
		BatteryTransform.SetTranslation(FVector(0.0f, -12.7f, -37.0f));
		//BatteryTransform.SetTranslation(FVector(0.0f,0.0f,0.0f));
		BatteryTransform.SetScale3D(FVector(0.32f, 0.15f, 1.0f) * 0.5f);
		//BatteryTransform.SetRotation(BATTERY_INDICATOR_ROTATION);
		BatteryTransform.SetRotation(FQuat(FVector(1.0f, 0.0f, 0.0f), PI / 2.0f) * FQuat(FVector(0.0f, 0.0f, 1.0f), PI));
		ControllerBatteryMeshComponent->SetRelativeTransform(BatteryTransform);
		ControllerBatteryMeshComponent->SetupAttachment(ControllerMeshComponent);
		ControllerBatteryMeshComponent->RegisterComponent();
	}

	// Now that everything is created, set the visibility based on the active status.
	// Set bAreSubComponentsEnabled to prevent SetSubComponentsEnabled from returning early since
	// The components have only just been created and may not be set properly yet.
	//SetSubComponentsEnabled(true);
}

void USkyworthVRMotionControllerComponent::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogSkyworthVRMotionController, Log, TEXT("USkyworthVRMotionControllerComponent::BeginPlay start"));
	TInlineComponentArray<USkyworthVRPointerInputComponent*> PointerInputComponents;
	GetOwner()->GetComponents(PointerInputComponents);

	if (PointerInputComponents.Num() == 0)
	{
		if (RequireInputComponent)
		{
			UE_LOG(LogSkyworthVRMotionController, Warning, TEXT("GoogleVRMotionControllerComponent has RequireInputComponent set to true, but the actor does not have a GoogleVRPointerInputComponent. Creating GoogleVRPointerInputComponent."));

			InputComponent = NewObject<USkyworthVRPointerInputComponent>(GetOwner(), "SkyworthVRPointerInputComponent");
			InputComponent->RegisterComponent();
		}
	}
	else
	{
		InputComponent = PointerInputComponents[0];
	}

	TArray<UActorComponent*> LaserVisualComponents = GetOwner()->GetComponentsByTag(USkyworthVRLaserVisual::StaticClass(), LaserVisualComponentTag);
	if (LaserVisualComponents.Num() > 0)
	{
		LaserVisualComponent = (USkyworthVRLaserVisual*)LaserVisualComponents[0];
		LaserVisualComponent->AttachToComponent(MotionControllerComponent, FAttachmentTransformRules::KeepWorldTransform);
	}
	else
	{
		UE_LOG(LogSkyworthVRMotionController, Warning, TEXT("SkyworthVRMotionControllerComponent: the actor does not have a SkyworthVRLaserVisualComponent."));
	}

	// If we found an InputComponent and it doesn't already have a Pointer, automatically set
	// it to this. If you want to switch between multiple pointers, or have multiple InputComponents,
	// then set the Pointers manually.
	if (InputComponent != nullptr && InputComponent->GetPointer() == nullptr)
	{
		InputComponent->SetPointer(this);
		
	}
	if(InputComponent != nullptr)
		OnControllerConnectionState(InputComponent->GetControllerConnected());
	if(InputComponent != nullptr)
		InputComponent->MuitiDelagateWithOneParam.AddUObject(this, &USkyworthVRMotionControllerComponent::OnControllerConnectionState);
	// Get the Playercontroller to use for input events.
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	check(PlayerController != nullptr);

	// Set the laser and reticle distances to their default positions.
	if (LaserVisualComponent != nullptr)
	{
		LaserVisualComponent->SetSubComponentsEnabled(bAreSubComponentsEnabled);

		// Get the world to meters scale.
		const float WorldToMetersScale = GetWorldToMetersScale();

		if (PointerInputMode == ESkyworthVRPointerInputMode::HybridExperimental
			|| PointerInputMode == ESkyworthVRPointerInputMode::Camera)
		{
			LaserVisualComponent->UpdateLaserDistance(0, WorldToMetersScale);
		}
		else
		{
			LaserVisualComponent->SetDefaultLaserDistance(WorldToMetersScale);
		}
		PointerDistance = GetDefaultReticleDistance();
		LaserVisualComponent->SetDefaultReticleDistance(WorldToMetersScale, PlayerController->PlayerCameraManager->GetCameraLocation());
	}

	USkyworthVRControllerFunctionLibrary::SetArmModelIsLockedToHead(IsLockedToHead);

	UE_LOG(LogSkyworthVRMotionController, Log, TEXT("USkyworthVRMotionControllerComponent::BeginPlay end"));
}
void USkyworthVRMotionControllerComponent::OnControllerConnectionState(bool connected) 
{
	UE_LOG(LogSkyworthVRMotionController, Log, TEXT("USkyworthVRMotionControllerComponent::OnControllerConnectionState %d"),connected);
	if (connected)
	{
		SetSubComponentsEnabled(true);
		if (InputComponent != nullptr)
			InputComponent->SetPointer(this);
	}
	else
	{
		SetSubComponentsEnabled(false);
	}
}
void USkyworthVRMotionControllerComponent::Activate(bool bReset)
{
	Super::Activate(bReset);
	SetSubComponentsEnabled(IsPointerActive());
}

void USkyworthVRMotionControllerComponent::Deactivate()
{
	Super::Deactivate();

	SetSubComponentsEnabled(IsPointerActive());
}

void USkyworthVRMotionControllerComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	//SetSubComponentsEnabled(IsPointerActive());

	if (!bAreSubComponentsEnabled)
	{
		return;
	}

	const float WorldToMetersScale = GetWorldToMetersScale();

	// Update the battery level indicator.
	UpdateBatteryIndicator();
	//UE_LOG(LogSkyworthVRMotionController, Log, TEXT("PlayerController->IsInputKeyDown(OculusRemote_Enter):%d"), PlayerController->IsInputKeyDown(SkyworthInput::FSkyworthKey::SkyworthRemote_Enter));
	if (PlayerController->IsInputKeyDown(SkyworthInput::FSkyworthKey::SkyworthRemote_Enter/* EKeys::Daydream_Left_Trackpad_Click*/)
		|| PlayerController->IsInputKeyDown(EKeys::Daydream_Right_Trackpad_Click))
	{
		//UE_LOG(LogSkyworthVRMotionController, Log, TEXT("TrySetControllerMaterial TouchpadMaterial %p"), ControllerTouchPointMeshComponent);
		TrySetControllerMaterial(TouchpadMaterial);
		if (ControllerTouchPointMeshComponent != nullptr)
		{
			ControllerTouchPointMeshComponent->SetVisibility(false);
		}
	}
	else
	{
		if (PlayerController->IsInputKeyDown(SkyworthInput::FSkyworthKey::SkyworthRemote_Back /*EKeys::Daydream_Left_Select_Click*/)
			|| PlayerController->IsInputKeyDown(EKeys::Daydream_Right_Select_Click))
		{
			//UE_LOG(LogSkyworthVRMotionController, Log, TEXT("TrySetControllerMaterial AppMaterial"));
			TrySetControllerMaterial(AppMaterial);
		}
		else
		{
			//UE_LOG(LogSkyworthVRMotionController, Log, TEXT("TrySetControllerMaterial IdleMaterial"));
			TrySetControllerMaterial(IdleMaterial);
		}

		// Update the touch point's scale and position
		if (ControllerTouchPointMeshComponent != nullptr)
		{
			ControllerTouchPointMeshComponent->SetVisibility(true);

			if (PlayerController->IsInputKeyDown(SkyworthInput::FSkyworthKey::SkyworthTouchpad_Touchpad /*EKeys::Daydream_Left_Trackpad_Touch*/))
			{
				ControllerTouchPointMeshComponent->SetRelativeScale3D(ControllerTouchPointMeshComponent->GetRelativeScale3D() * TOUCHPAD_POINT_FILTER_STRENGTH +
																	  TouchMeshScale * (1.0f - TOUCHPAD_POINT_FILTER_STRENGTH));

				float TouchPadX = PlayerController->GetInputAnalogKeyState(SkyworthInput::FSkyworthKey::SkyworthTouchpad_Touchpad_X /*EKeys::Daydream_Left_Trackpad_X*/);
				float TouchPadY = PlayerController->GetInputAnalogKeyState(SkyworthInput::FSkyworthKey::SkyworthTouchpad_Touchpad_Y/*EKeys::Daydream_Left_Trackpad_Y*/);
				float X = TouchPadX * TOUCHPAD_RADIUS * WorldToMetersScale;
				float Y = TouchPadY * TOUCHPAD_RADIUS * WorldToMetersScale;

				FVector TouchPointRelativeLocation = FVector(TOUCHPAD_POINT_X_OFFSET * WorldToMetersScale  - Y, X, TOUCHPAD_POINT_ELEVATION * WorldToMetersScale);
				ControllerTouchPointMeshComponent->SetRelativeLocation(TouchPointRelativeLocation);
			}
			else
			{
				ControllerTouchPointMeshComponent->SetRelativeScale3D(ControllerTouchPointMeshComponent->GetRelativeScale3D() * TOUCHPAD_POINT_FILTER_STRENGTH);
			}
		}
	}

	// Update the position of the pointer.
	FVector PointerPositionOffset = USkyworthVRControllerFunctionLibrary::GetArmModelPointerPositionOffset();
	float PointerTiltAngle = USkyworthVRControllerFunctionLibrary::GetArmModelPointerTiltAngle();

	if (LaserVisualComponent != nullptr)
	{
		LaserVisualComponent->SetRelativeLocation(PointerPositionOffset);
		LaserVisualComponent->SetRelativeRotation(FRotator(-PointerTiltAngle, 0.0f, 0.0f));
	}

	// Adjust Transparency
	if (ParameterCollection != nullptr)
	{
		float AlphaValue =  USkyworthVRControllerFunctionLibrary::GetControllerAlphaValue();
		UMaterialParameterCollectionInstance* ParameterCollectionInstance = GetWorld()->GetParameterCollectionInstance(ParameterCollection);
		const bool bFoundParameter = ParameterCollectionInstance->SetScalarParameterValue("SkyworthVRMotionControllerAlpha", AlphaValue);
		if (!bFoundParameter)
		{
			UE_LOG(LogSkyworthVRMotionController, Warning, TEXT("Unable to find GoogleVRMotionControllerAlpha parameter in Material Collection."));
		}
	}
}

void USkyworthVRMotionControllerComponent::TrySetControllerMaterial(UMaterialInterface* NewMaterial)
{
	if (NewMaterial != nullptr)
	{
		ControllerMeshComponent->SetMaterial(0, NewMaterial);
	}
	else
	{
		ControllerMeshComponent->SetMaterial(0, IdleMaterial);
	}
}

void USkyworthVRMotionControllerComponent::UpdateBatteryIndicator()
{
	UTexture2D* NewTexture = nullptr;

	// Charging overrides other state options.
	if (USkyworthVRControllerFunctionLibrary::GetBatteryCharging())
	{
		if (!bBatteryWasCharging)
		{
			NewTexture = BatteryChargingTexture;
			bBatteryWasCharging = true;
		}
	}
	else
	{
		ESkyworthVRControllerBatteryLevel BatteryLevel = USkyworthVRControllerFunctionLibrary::GetBatteryLevel();

		if (BatteryLevel != LastKnownBatteryState || bBatteryWasCharging)
		{
			switch (BatteryLevel)
			{
				case ESkyworthVRControllerBatteryLevel::CriticalLow:
					NewTexture = BatteryCriticalLowTexture;
					break;

				case ESkyworthVRControllerBatteryLevel::Low:
					NewTexture = BatteryLowTexture;
					break;

				case ESkyworthVRControllerBatteryLevel::Medium:
					NewTexture = BatteryMediumTexture;
					break;

				case ESkyworthVRControllerBatteryLevel::AlmostFull:
					NewTexture = BatteryAlmostFullTexture;
					break;

				case ESkyworthVRControllerBatteryLevel::Full:
					NewTexture = BatteryFullTexture;
					break;

				default:
					NewTexture = BatteryUnknownTexture;
					break;
			}

			LastKnownBatteryState = BatteryLevel;
			bBatteryWasCharging = false;
		}
	}

	if (NewTexture != nullptr && ControllerBatteryMaterial != nullptr)
	{
		UE_LOG(LogSkyworthVRMotionController, Log, TEXT("SetTextureParameterValue %p"), NewTexture);
		ControllerBatteryMaterial->SetTextureParameterValue(BatteryTextureParameterName, NewTexture);
	}
}

void USkyworthVRMotionControllerComponent::SetSubComponentsEnabled(bool bNewEnabled)
{
	UE_LOG(LogSkyworthVRMotionController, Log, TEXT("SetSubComponentsEnabled %d"), bNewEnabled);
	if (bNewEnabled == bAreSubComponentsEnabled)
	{
		return;
	}

	bAreSubComponentsEnabled = bNewEnabled;

	// Explicitly set the visibility of each elements instead of propagating recursively.
	// If we do it recursively, then we might change the visisiblity of something unintentionally.
	// I.E. An Object that is being "grabbed" with the controller.

	if (MotionControllerComponent != nullptr)
	{
		MotionControllerComponent->SetActive(bNewEnabled);
		MotionControllerComponent->SetVisibility(bNewEnabled);
	}

	if (ControllerMeshComponent != nullptr)
	{
		ControllerMeshComponent->SetActive(bNewEnabled);
		ControllerMeshComponent->SetVisibility(bNewEnabled);
	}
	if (ControllerTriggerMeshComponent != nullptr)
	{
		ControllerTriggerMeshComponent->SetActive(bNewEnabled);
		ControllerTriggerMeshComponent->SetVisibility(bNewEnabled);
	}

	if (ControllerTouchPointMeshComponent != nullptr)
	{
		ControllerTouchPointMeshComponent->SetActive(bNewEnabled);
		ControllerTouchPointMeshComponent->SetVisibility(bNewEnabled);
	}

	if (ControllerBatteryMeshComponent != nullptr)
	{
		ControllerBatteryMeshComponent->SetActive(bNewEnabled);
		ControllerBatteryMeshComponent->SetVisibility(bNewEnabled);
	}

	if (LaserVisualComponent != nullptr)
	{
		LaserVisualComponent->SetSubComponentsEnabled(bNewEnabled);
	}
}

bool USkyworthVRMotionControllerComponent::IsControllerConnected() const
{
	return USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerState() == ESkyworthVRControllerState::Connected;
}

float USkyworthVRMotionControllerComponent::GetWorldToMetersScale() const
{
	if (GWorld != nullptr)
	{
		return GWorld->GetWorldSettings()->WorldToMeters;
	}

	// Default value, assume Unreal units are in centimeters
	return 100.0f;
}

void USkyworthVRMotionControllerComponent::OnPointerEnter(const FHitResult& HitResult, bool IsHitInteractive)
{
	OnPointerHover(HitResult, IsHitInteractive);
}

void USkyworthVRMotionControllerComponent::OnPointerHover(const FHitResult& HitResult, bool IsHitInteractive)
{
	if (LaserVisualComponent != nullptr)
	{
		FVector Location = HitResult.Location;
		FVector OriginLocation = HitResult.TraceStart;
		FTransform PointerContainerTransform = LaserVisualComponent->GetComponentTransform();
		FVector Difference = Location - PointerContainerTransform.GetLocation();
		float Distance = Difference.Size();
		float ModifiedDistance = GetRaycastModeBasedDistance(Distance);
		LaserVisualComponent->UpdateLaserDistance(ModifiedDistance, GetWorldToMetersScale());
		FVector ReticleDifference = Location - OriginLocation;
		PointerDistance = ReticleDifference.Size();
		LaserVisualComponent->UpdateReticleLocation(Location, OriginLocation, GetWorldToMetersScale(), PlayerController->PlayerCameraManager->GetCameraLocation());
	}
}

void USkyworthVRMotionControllerComponent::OnPointerExit(const FHitResult& HitResult)
{
	if (LaserVisualComponent != nullptr)
	{
		const float WorldToMetersScale = GetWorldToMetersScale();
		if (PointerInputMode == ESkyworthVRPointerInputMode::HybridExperimental
			|| PointerInputMode == ESkyworthVRPointerInputMode::Camera)
		{
			LaserVisualComponent->UpdateLaserDistance(0, WorldToMetersScale);
		}
		else
		{
			LaserVisualComponent->SetDefaultLaserDistance(WorldToMetersScale);
		}
		PointerDistance = GetDefaultReticleDistance();
		LaserVisualComponent->SetDefaultReticleDistance(WorldToMetersScale, PlayerController->PlayerCameraManager->GetCameraLocation());
		LaserVisualComponent->UpdateLaserCorrection(FVector(0, 0, 0));
	}
}

FVector USkyworthVRMotionControllerComponent::GetOrigin() const
{
	if (LaserVisualComponent != nullptr)
	{
		return LaserVisualComponent->GetComponentLocation();
	}

	return FVector::ZeroVector;
}

FVector USkyworthVRMotionControllerComponent::GetDirection() const
{
	if (LaserVisualComponent != nullptr)
	{
		return LaserVisualComponent->GetForwardVector();
	}

	return FVector::ZeroVector;
}

void USkyworthVRMotionControllerComponent::GetRadius(float& OutEnterRadius, float& OutExitRadius) const
{
	if (LaserVisualComponent != nullptr)
	{
		FMaterialSpriteElement& Sprite = *(LaserVisualComponent->GetReticleSprite());
		float SpriteSize = Sprite.BaseSizeX;

		// Fixed size for enter radius to avoid flickering.
		// TODO: This will cause some slight variability based on the distance of the object from the camera,
		// and is optimized for the average case. For this to be fixed, the hit test must be done via a cone instead
		// of the spherecast that is currently used.
		const float WorldToMetersScale = GetWorldToMetersScale();
		OutEnterRadius = LaserVisualComponent->GetReticleSize() * WorldToMetersScale * EnterRadiusCoeff;

		// Dynamic size for exit radius.
		// Will always be correct because we know the intersection point of the object and are therefore using
		// the correct radius based on the object's distance from the camera.
		OutExitRadius = SpriteSize * ExitRadiusCoeff;
	}
	else
	{
		OutEnterRadius = 0.0f;
		OutExitRadius = 0.0f;
	}
}

float USkyworthVRMotionControllerComponent::GetMaxPointerDistance() const
{
	float WorldToMetersScale = GetWorldToMetersScale();
	if (LaserVisualComponent != nullptr)
	{
		return LaserVisualComponent->GetMaxPointerDistance(WorldToMetersScale);
	}
	return 2.5f * WorldToMetersScale;
}

float USkyworthVRMotionControllerComponent::GetDefaultReticleDistance() const
{
	float WorldToMetersScale = GetWorldToMetersScale();
	if (LaserVisualComponent != nullptr)
	{
		return LaserVisualComponent->GetDefaultReticleDistance(WorldToMetersScale);
	}
	return 2.5f * WorldToMetersScale;
}

float USkyworthVRMotionControllerComponent::GetCurrentPointerDistance() const
{
	float WorldToMetersScale = GetWorldToMetersScale();
	return PointerDistance * WorldToMetersScale;
}

bool USkyworthVRMotionControllerComponent::IsPointerActive() const
{
	bool connected = IsControllerConnected();
	//UE_LOG(LogSkyworthVRMotionController, Log, TEXT("IsPointerActive %d"), connected);
	return IsActive() && connected;
}

ESkyworthVRPointerInputMode USkyworthVRMotionControllerComponent::GetPointerInputMode() const
{
	return PointerInputMode;
}

float USkyworthVRMotionControllerComponent::GetRaycastModeBasedDistance(float Distance)
{
	float retValue = Distance;
	if (PointerInputMode == ESkyworthVRPointerInputMode::Camera)
	{
		retValue = 0.0f;
	}
	else if (PointerInputMode == ESkyworthVRPointerInputMode::HybridExperimental)
	{
		// Amount to shrink the laser when it is fully shrunk.
		// Eventually, the laser will become fully invisible even without fully shrinking it because
		// of foreshortening.
		float shrunkScale = 0.2f;

		// Begin shrinking the laser when the angle between transform.forward and the reticle
		// is greater than this value.
		float beginShrinkAngleDegrees = 0.0f;

		// Finish shrinking the laser when the angle between transform.forward and the reticle
		// is greater than this value.
		float endShrinkAngleDegrees = 2.0f;

		// Calculate the angle of rotation in degrees.
		FVector currentLocalPosition = LaserVisualComponent->GetComponentTransform().GetLocation();
		currentLocalPosition.Normalize();
		FVector forwardDir = GetDirection();
		forwardDir.Normalize();
		float angle = FMath::Acos(FVector::DotProduct(forwardDir, currentLocalPosition));

		// Calculate the shrink ratio based on the angle.
		float shrinkAngleDelta = endShrinkAngleDegrees - beginShrinkAngleDegrees;
		float clampedAngle = FMath::Clamp(angle - beginShrinkAngleDegrees, 0.0f, shrinkAngleDelta);
		float shrinkRatio = clampedAngle / shrinkAngleDelta;

		// Calculate the shrink coeff.
		float shrinkCoeff = EaseOutCubic(shrunkScale, 1.0f, 1.0f - shrinkRatio);

		// Calculate the final distance of the laser.
		FVector diff = LaserVisualComponent->GetComponentTransform().GetLocation() - LaserVisualComponent->GetReticleLocation();
		retValue = FMath::Min(diff.Size(), GetMaxPointerDistance()) * shrinkCoeff;

		if (Distance > GetMaxPointerDistance())
			retValue = 0.0f;
	}
	else
	{
		retValue = Distance;
	}
	return retValue;
}

float USkyworthVRMotionControllerComponent::EaseOutCubic(float min, float max, float value)
{
	if (min > max)
	{
		UE_LOG(LogSkyworthVRMotionController, Error, TEXT("Invalid values passed to EaseOutCubic, max must be greater than min. min: %f, max: %f"), min, max);
		return value;
	}

	value = FMath::Clamp(value, 0.0f, 1.0f);
	value -= 1.0f;
	float delta = max - min;
	float result = delta * (value * value * value + 1.0f) + min;
	return result;
}

