// Copyright Epic Games, Inc. All Rights Reserved.


#include "SkyworthVRGazeReticleComponent.h"
//#include "SkyworthVRController.h"
#include "SkyworthVRPointerInputComponent.h"
//#include "SkyworthVRControllerFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/WorldSettings.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "SkyworthInput.h"

DEFINE_LOG_CATEGORY_STATIC(LogSkyworthVRGazeReticle, Log, All);

USkyworthVRGazeReticleComponent::USkyworthVRGazeReticleComponent()
	: Mesh(nullptr)
	, Material(nullptr)
	, ReticleDistanceMin(0.45f)
	, ReticleDistanceMax(2.5f)
	, ReticleSize(1.0f)
	, ReticleInnerAngleMin(0.0f)
	, ReticleOuterAngleMin(0.6f)
	, ReticleGrowAngle(1.5f)
	, ReticleGrowSpeed(10.0f)
	, RequireInputComponent(true)
	, ReticleMeshComponent(nullptr)
	, CameraComponent(nullptr)
	, ReticleInnerDiameter(0.0f)
	, ReticleOuterDiameter(0.0f)
	, TargetReticleInnerDiameter(0.0f)
	, TargetReticleOuterDiameter(0.0f)
	, CurrentReticleDistance(0.0f)
	, IsReticleExpanded(false)
	, InputComponent(nullptr)
{
	PrimaryComponentTick.bCanEverTick = true;
	bAutoActivate = true;

	Mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/SkyworthXR/Mesh/GazeReticleMesh")));
	Material = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/SkyworthXR/Material/GazeReticleMaterial")));

}
void USkyworthVRGazeReticleComponent::OnRegister()
{
	Super::OnRegister();

	// Create the Controller reticle mesh and attach it.
	ReticleMeshComponent = NewObject<UStaticMeshComponent>(this, TEXT("ReticleMesh"));
	ReticleMeshComponent->SetStaticMesh(Mesh);
	ReticleMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	if (Material != nullptr)
	{
		ReticleMeshComponent->SetMaterial(0, Material);
	}
	ReticleMeshComponent->SetupAttachment(this);
	ReticleMeshComponent->RegisterComponent();

	SetReticleEnabled(IsActive());
	IsReticleExpanded = true; // Force this to true so we don't return early the first time we do this.
	SetReticleExpanded(false);
	CurrentReticleDistance = GetMaxPointerDistance();
}

void USkyworthVRGazeReticleComponent::BeginPlay()
{
	Super::BeginPlay();

	TInlineComponentArray<USkyworthVRPointerInputComponent*> Components;
	//USkyworthVRPointerInputComponent* InputComponent = nullptr;

	GetOwner()->GetComponents(Components);
	if(Components.Num() == 0)
	{
		if (RequireInputComponent)
		{
			UE_LOG(LogSkyworthVRGazeReticle, Warning, TEXT("SkyworthVRGazeReticleComponent has RequireInputComponent set to true, but the actor does not have a SkyworthVRPointerInputComponent. Creating SkyworthVRPointerInputComponent."));

			InputComponent = NewObject<USkyworthVRPointerInputComponent>(GetOwner(), "SkyworthVRPointerInputComponent");
			InputComponent->RegisterComponent();
		}
	}
	else
	{
		InputComponent = Components[0];
	}

	// If we found an InputComponent and it doesn't already have a Pointer, automatically set
	// it to this. If you want to switch between multiple pointers, or have multiple InputComponents,
	// then set the Pointers manually.
	if (InputComponent != nullptr && InputComponent->GetPointer() == nullptr)
	{
		InputComponent->SetPointer(this);
		InputComponent->MuitiDelagateWithOneParam.AddUObject(this, &USkyworthVRGazeReticleComponent::OnControllerConnectionStatues);
	}

	TInlineComponentArray<UCameraComponent*> CameraComponents;
	GetOwner()->GetComponents(CameraComponents);
	if (CameraComponents.Num() == 0)
	{
		UE_LOG(LogSkyworthVRGazeReticle, Warning, TEXT("SkyworthVRGazeReticleComponent is unable to find a CameraComponent on it's owner."));
	}
	else
	{
		CameraComponent = CameraComponents[0];
	}
}
void USkyworthVRGazeReticleComponent::OnControllerConnectionStatues(bool connected)
{
	UE_LOG(LogSkyworthVRGazeReticle, Log, TEXT("USkyworthVRGazeReticleComponent::OnControllerConnectionStatues %d"), connected);
	if (!connected && InputComponent != nullptr)
	{
		SetReticleEnabled(true);
		InputComponent->SetPointer(this);
	}
	else
	{
		SetReticleEnabled(false);
	}
}
void USkyworthVRGazeReticleComponent::Activate(bool bReset)
{
	Super::Activate(bReset);

	SetReticleEnabled(true);
}

void USkyworthVRGazeReticleComponent::Deactivate()
{
	Super::Deactivate();

	SetReticleEnabled(false);
}

void USkyworthVRGazeReticleComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateReticleDiameter(DeltaTime);

	SetWorldLocationAndRotation(CameraComponent->GetComponentLocation(), CameraComponent->GetComponentQuat());

	ReticleMeshComponent->SetScalarParameterValueOnMaterials("ReticleDistance", CurrentReticleDistance);

	float WorldToMetersScale = GetWorldToMetersScale();
	float CurrentReticleDistanceMeters = CurrentReticleDistance / WorldToMetersScale;
	ReticleMeshComponent->SetScalarParameterValueOnMaterials("InnerDiameter", CurrentReticleDistanceMeters * ReticleInnerDiameter * ReticleSize);
	ReticleMeshComponent->SetScalarParameterValueOnMaterials("OuterDiameter", CurrentReticleDistanceMeters * ReticleOuterDiameter * ReticleSize);
}

void USkyworthVRGazeReticleComponent::SetReticleExpanded(bool NewIsReticleExpanded)
{
	if (IsReticleExpanded == NewIsReticleExpanded)
	{
		return;
	}

	if (NewIsReticleExpanded)
	{
		TargetReticleInnerDiameter = CalculateReticleDiameter(ReticleInnerAngleMin + ReticleGrowAngle);
		TargetReticleOuterDiameter = CalculateReticleDiameter(ReticleOuterAngleMin + ReticleGrowAngle);
	}
	else
	{
		TargetReticleInnerDiameter = CalculateReticleDiameter(ReticleInnerAngleMin);
		TargetReticleOuterDiameter = CalculateReticleDiameter(ReticleOuterAngleMin);
	}

	IsReticleExpanded = NewIsReticleExpanded;
}

float USkyworthVRGazeReticleComponent::CalculateReticleDiameter(float ReticleAngleDegrees)
{
	float HalfAngleDegrees = ReticleAngleDegrees * 0.5f;
	return FMath::Tan(PI/(180.f) * HalfAngleDegrees) * 2.0f;
}

void USkyworthVRGazeReticleComponent::UpdateReticleDiameter(float DeltaTime)
{
	if (ReticleInnerDiameter - TargetReticleInnerDiameter > 0.0f && ReticleInnerDiameter <= 0.1f)
	{
		ReticleInnerDiameter = TargetReticleInnerDiameter;
	}
	else
	{
		ReticleInnerDiameter = FMath::Lerp(ReticleInnerDiameter, TargetReticleInnerDiameter, DeltaTime * ReticleGrowSpeed);
	}

	ReticleOuterDiameter = FMath::Lerp(ReticleOuterDiameter, TargetReticleOuterDiameter, DeltaTime * ReticleGrowSpeed);
}

void USkyworthVRGazeReticleComponent::SetReticleEnabled(bool NewEnabled)
{
	if (ReticleMeshComponent != nullptr)
	{
		ReticleMeshComponent->SetActive(NewEnabled);
		ReticleMeshComponent->SetVisibility(NewEnabled);
	}
}

float USkyworthVRGazeReticleComponent::GetWorldToMetersScale() const
{
	if (GWorld != nullptr)
	{
		return GWorld->GetWorldSettings()->WorldToMeters;
	}

	// Default value, assume Unreal units are in centimeters
	return 100.0f;
}

void USkyworthVRGazeReticleComponent::OnPointerEnter(const FHitResult& HitResult, bool IsHitInteractive)
{
	SetReticleExpanded(IsHitInteractive);
	OnPointerHover(HitResult, IsHitInteractive);
}

void USkyworthVRGazeReticleComponent::OnPointerHover(const FHitResult& HitResult, bool IsHitInteractive)
{
	SetReticleExpanded(IsHitInteractive);
	if (CameraComponent != nullptr)
	{
		CurrentReticleDistance = CameraComponent->GetComponentTransform().InverseTransformPosition(HitResult.Location).X;
		float WorldToMetersScale = GetWorldToMetersScale();
		CurrentReticleDistance = FMath::Clamp(CurrentReticleDistance, ReticleDistanceMin * WorldToMetersScale, ReticleDistanceMax * WorldToMetersScale);
	}
	else
	{
		CurrentReticleDistance = GetMaxPointerDistance();
	}
}

void USkyworthVRGazeReticleComponent::OnPointerExit(const FHitResult& HitResult)
{
	SetReticleExpanded(false);
	CurrentReticleDistance = GetMaxPointerDistance();
}

FVector USkyworthVRGazeReticleComponent::GetOrigin() const
{
	if (CameraComponent != nullptr)
	{
		return CameraComponent->GetComponentLocation();
	}
	return FVector::ZeroVector;
}

FVector USkyworthVRGazeReticleComponent::GetDirection() const
{
	if (CameraComponent != nullptr)
	{
		return CameraComponent->GetForwardVector();
	}

	return FVector::ZeroVector;
}

void USkyworthVRGazeReticleComponent::GetRadius(float& OutEnterRadius, float& OutExitRadius) const
{
	float DegreesToRadians = PI / (180.f);
	float InnerAngleMinRadians = DegreesToRadians *  ReticleInnerAngleMin;
	float InnerAngleMaxRadians = DegreesToRadians * (ReticleInnerAngleMin + ReticleGrowAngle);

	float WorldToMetersScale = GetWorldToMetersScale();
	OutEnterRadius = WorldToMetersScale * 2.0f * FMath::Tan(InnerAngleMinRadians);
	OutExitRadius = WorldToMetersScale * 2.0f * FMath::Tan(InnerAngleMaxRadians);
}

float USkyworthVRGazeReticleComponent::GetMaxPointerDistance() const
{
	float WorldToMetersScale = GetWorldToMetersScale();
	return ReticleDistanceMax * WorldToMetersScale;
}

float USkyworthVRGazeReticleComponent::GetDefaultReticleDistance() const
{
	float WorldToMetersScale = GetWorldToMetersScale();
	return ReticleDistanceMax * WorldToMetersScale;
}

bool USkyworthVRGazeReticleComponent::IsPointerActive() const
{
	return IsActive();
}

ESkyworthVRPointerInputMode USkyworthVRGazeReticleComponent::GetPointerInputMode() const
{
	return ESkyworthVRPointerInputMode::Camera;
}
