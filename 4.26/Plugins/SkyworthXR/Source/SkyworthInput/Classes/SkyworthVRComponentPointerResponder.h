// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "UObject/Interface.h"
#include "SkyworthVRComponentPointerResponder.generated.h"

class USkyworthVRPointerInputComponent;

/**
 * ISkyworthVRComponentPointerResponder is an interface for a Component
 * to respond to pointer input events from USkyworthVRPointerInputComponent.
 */
UINTERFACE(BlueprintType)
class USkyworthVRComponentPointerResponder : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class SKYWORTHINPUT_API ISkyworthVRComponentPointerResponder
{
	GENERATED_IINTERFACE_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerEnter(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerExit(UPrimitiveComponent* PreviousComponent, const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerHover(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerClick(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerPressed(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerReleased(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);
};
