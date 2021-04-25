// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/WidgetInteractionComponent.h"
#include "SkyworthVRWidgetInteractionComponent.generated.h"

UCLASS(ClassGroup=(SkyworthInput), meta=(BlueprintSpawnableComponent))
class SKYWORTHINPUT_API USkyworthVRWidgetInteractionComponent : public UWidgetInteractionComponent
{
	GENERATED_BODY()

public:

	USkyworthVRWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer);

	void UpdateState(const FHitResult& HitResult);

protected:
	virtual FWidgetPath FindHoveredWidgetPath(const FWidgetTraceResult& HitResult) const override;
};
