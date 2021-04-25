// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkyworthVRLaserPlaneComponent.h"

#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/StaticMesh.h"
#include "Math/BoxSphereBounds.h"

USkyworthVRLaserPlaneComponent::USkyworthVRLaserPlaneComponent()
: LaserPlaneLengthParameterName("LaserLength")
, LaserCorrectionParameterName("LaserCorrection")
, CurrentLaserDistance(100.f)
, LaserPlaneMaterial(nullptr)
{
	bAutoActivate = true;
}

void USkyworthVRLaserPlaneComponent::OnRegister()
{
	Super::OnRegister();

	if (UStaticMesh* LaserPlaneMesh = GetStaticMesh())
	{
		LaserPlaneMaterial = UMaterialInstanceDynamic::Create(LaserPlaneMesh->GetMaterial(0), this);
		SetMaterial(0, LaserPlaneMaterial);
	}
}

void USkyworthVRLaserPlaneComponent::UpdateLaserDistance(float Distance)
{
	CurrentLaserDistance = Distance;

	if (LaserPlaneMaterial != nullptr)
	{
		LaserPlaneMaterial->SetScalarParameterValue(LaserPlaneLengthParameterName, Distance);
	}
}

UMaterialInstanceDynamic* USkyworthVRLaserPlaneComponent::GetLaserMaterial() const
{
	return LaserPlaneMaterial;
}

void USkyworthVRLaserPlaneComponent::UpdateLaserCorrection(FVector Correction)
{
	if (LaserPlaneMaterial != nullptr)
	{
		UE_LOG(LogSkyworthVRLaserPlaneComponent, Log, TEXT("UpdateLaserCorrection (%f,%f,%f)"), Correction.X, Correction.Y, Correction.Z);
		LaserPlaneMaterial->SetVectorParameterValue(LaserCorrectionParameterName, FLinearColor(Correction));
	}
}

FBoxSphereBounds USkyworthVRLaserPlaneComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	float HalfDistance = CurrentLaserDistance * 0.5f;
	return FBoxSphereBounds(FVector(HalfDistance, 0, 0), FVector(HalfDistance, HalfDistance, HalfDistance), HalfDistance).TransformBy(LocalToWorld);
}
