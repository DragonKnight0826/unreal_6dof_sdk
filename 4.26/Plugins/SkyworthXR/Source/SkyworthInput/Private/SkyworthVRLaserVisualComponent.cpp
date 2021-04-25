/* Copyright 2017 Google Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "SkyworthVRLaserVisualComponent.h"
#include "Materials/MaterialInterface.h"
#include "Modules/ModuleManager.h"
#include "Engine/StaticMesh.h"

DEFINE_LOG_CATEGORY_STATIC(LogSkyworthVRLaserVisual, Log, All);

// Sets default values for this component's properties
USkyworthVRLaserVisualComponent::USkyworthVRLaserVisualComponent()
: LaserPlaneMesh(nullptr)
, ControllerReticleMaterial(nullptr)
, TranslucentSortPriority(1)
, DefaultReticleDistance(2.5f)
, MaxPointerDistance(20.0f)
, LaserDistanceMax(0.75f)
, ReticleSize(0.05f)
, LaserPlaneComponent(nullptr)
, ReticleBillboardComponent(nullptr)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bAutoActivate = true;
	/*if (FModuleManager::Get().IsModuleLoaded("SkyworthInput"))
	{*/
		UClass* cl1 = UStaticMesh::StaticClass();
		UObject* ob1 = StaticLoadObject(cl1, NULL, TEXT("/SkyworthXR/Mesh/LaserPlane"));
		LaserPlaneMesh = Cast<UStaticMesh>(ob1);
		UObject* ob = StaticLoadObject(UMaterialInterface::StaticClass(), NULL, TEXT("/SkyworthXR/Material/ControllerRetMaterial"));
		ControllerReticleMaterial = Cast<UMaterialInterface>(ob);
		
	//}
}

void USkyworthVRLaserVisualComponent::OnRegister()
{
	Super::OnRegister();

	check(ControllerReticleMaterial != nullptr);
	check(LaserPlaneMesh != nullptr);

	// Create the laser plane.
	LaserPlaneComponent = NewObject<USkyworthVRLaserPlaneComponent>(this, TEXT("LaserPlaneMesh"));
	LaserPlaneComponent->SetStaticMesh(LaserPlaneMesh);
	LaserPlaneComponent->SetTranslucentSortPriority(TranslucentSortPriority + 1);
	LaserPlaneComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	LaserPlaneComponent->SetupAttachment(this);
	LaserPlaneComponent->RegisterComponent();

	// Create the reticle.
	ReticleBillboardComponent = NewObject<UMaterialBillboardComponent>(this, TEXT("Reticle"));
	ReticleBillboardComponent->AddElement(ControllerReticleMaterial, nullptr, false, 1.0f, 1.0f, nullptr);
	ReticleBillboardComponent->SetTranslucentSortPriority(TranslucentSortPriority);
	ReticleBillboardComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ReticleBillboardComponent->SetupAttachment(this);
	ReticleBillboardComponent->RegisterComponent();
}

// Called when the game starts
void USkyworthVRLaserVisualComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void USkyworthVRLaserVisualComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

UMaterialBillboardComponent* USkyworthVRLaserVisualComponent::GetReticle() const
{
	return ReticleBillboardComponent;
}

USkyworthVRLaserPlaneComponent* USkyworthVRLaserVisualComponent::GetLaser() const
{
	return LaserPlaneComponent;
}

UMaterialInstanceDynamic* USkyworthVRLaserVisualComponent::GetLaserMaterial() const
{
	return GetLaser() ? GetLaser()->GetLaserMaterial() : nullptr;
}

void USkyworthVRLaserVisualComponent::SetPointerDistance(float Distance, float WorldToMetersScale, FVector CameraLocation)
{
	UE_LOG(LogSkyworthVRLaserVisual, Log, TEXT("SetPointerDistance xxxx"));
	UpdateLaserDistance(Distance, WorldToMetersScale);
	UpdateReticleDistance(Distance, WorldToMetersScale, CameraLocation);
}

void USkyworthVRLaserVisualComponent::UpdateLaserDistance(float Distance, float WorldToMetersScale)
{
	if (GetLaser() != nullptr)
	{
		UE_LOG(LogSkyworthVRLaserVisual, Log, TEXT("UpdateLaserDistance %f,%f"), Distance, LaserDistanceMax);
		float LaserClampedDistance = FMath::Clamp(Distance, 0.0f, LaserDistanceMax * WorldToMetersScale);
		GetLaser()->UpdateLaserDistance(LaserClampedDistance);
	}
}

void USkyworthVRLaserVisualComponent::SetDefaultLaserDistance(float WorldToMetersScale)
{
	UpdateLaserDistance(LaserDistanceMax * WorldToMetersScale, WorldToMetersScale);
}

void USkyworthVRLaserVisualComponent::UpdateLaserCorrection(FVector Correction)
{
	if (GetLaser() != nullptr)
	{
		GetLaser()->UpdateLaserCorrection(Correction);
	}
}

void USkyworthVRLaserVisualComponent::SetDefaultReticleDistance(float WorldToMetersScale, FVector CameraLocation)
{
	UpdateReticleDistance(DefaultReticleDistance * WorldToMetersScale, WorldToMetersScale, CameraLocation);
}

float USkyworthVRLaserVisualComponent::GetDefaultReticleDistance(float WorldToMetersScale)
{
	return DefaultReticleDistance * WorldToMetersScale;
}

void USkyworthVRLaserVisualComponent::UpdateReticleDistance(float Distance, float WorldToMetersScale, FVector CameraLocation)
{
	if (GetReticle() != nullptr)
	{
		GetReticle()->SetRelativeLocation(FVector(Distance, 0.0f, 0.0f));
	}
	UpdateReticleSize(CameraLocation);
}

void USkyworthVRLaserVisualComponent::UpdateReticleLocation(FVector Location, FVector OriginLocation, float WorldToMetersScale, FVector CameraLocation)
{
	if (GetReticle() != nullptr)
	{
		FVector Difference = Location - OriginLocation;
		Location = OriginLocation + Difference * ReticleClippingOffsetFactor;
		GetReticle()->SetWorldLocation(Location);
	}
	UpdateReticleSize(CameraLocation);
}

void USkyworthVRLaserVisualComponent::UpdateReticleSize(FVector CameraLocation)
{
	if (GetReticle() != nullptr)
	{
		float ReticleDistanceFromCamera = (GetReticle()->GetComponentLocation() - CameraLocation).Size();
		float SpriteSize = ReticleSize * ReticleDistanceFromCamera;

		FMaterialSpriteElement& Sprite = GetReticle()->Elements[0];
		if (Sprite.BaseSizeX != SpriteSize)
		{
			Sprite.BaseSizeX = SpriteSize;
			Sprite.BaseSizeY = SpriteSize;
			GetReticle()->MarkRenderStateDirty();
		}
	}
}

float USkyworthVRLaserVisualComponent::GetMaxPointerDistance(float WorldToMetersScale) const
{
	return MaxPointerDistance * WorldToMetersScale;
}

float USkyworthVRLaserVisualComponent::GetReticleSize()
{
	return ReticleSize;
}

FMaterialSpriteElement* USkyworthVRLaserVisualComponent::GetReticleSprite() const
{
	if (GetReticle() != nullptr)
	{
		return &(GetReticle()->Elements[0]);
	}
	return nullptr;
}

FVector USkyworthVRLaserVisualComponent::GetReticleLocation()
{
	if (GetReticle() != nullptr)
	{
		return GetReticle()->GetComponentLocation();
	}
	return FVector::ZeroVector;
}

void USkyworthVRLaserVisualComponent::SetSubComponentsEnabled(bool bNewEnabled)
{
	if (GetLaser() != nullptr)
	{
		GetLaser()->SetActive(bNewEnabled);
		GetLaser()->SetVisibility(bNewEnabled);
	}

	if (GetReticle() != nullptr)
	{
		GetReticle()->SetActive(bNewEnabled);
		GetReticle()->SetVisibility(bNewEnabled);
	}
}
