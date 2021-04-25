// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "SkyworthVRActorPointerResponder.generated.h"

class USkyworthVRPointerInputComponent;

/**
 * ISkyworthVRActorPointerResponder is an interface for an Actor
 * to respond to pointer input events from USkyworthVRPointerInputComponent.
 */
UINTERFACE(BlueprintType)
class USkyworthVRActorPointerResponder : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class SKYWORTHINPUT_API ISkyworthVRActorPointerResponder
{
	GENERATED_IINTERFACE_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerEnter(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerExit(AActor* PreviousActor, const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerHover(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerComponentChanged(UPrimitiveComponent* PreviousComponent, const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerClick(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerPressed(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="PointerResponder")
	void OnPointerReleased(const FHitResult& HitResult, USkyworthVRPointerInputComponent* Source);
};
