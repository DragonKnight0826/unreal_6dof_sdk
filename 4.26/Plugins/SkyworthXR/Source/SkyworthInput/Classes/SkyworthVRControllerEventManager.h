// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "UObject/Object.h"
#include "UObject/WeakObjectPtr.h"
#include "SkyworthVRControllerEventManager.generated.h"

UENUM(BlueprintType)
enum class ESkyworthVRControllerState : uint8
{
	Disconnected = 0,
	Scanning = 1,
	Connecting = 2,
	Connected = 3,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSkyworthVRControllerRecenterDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkyworthVRControllerStateChangeDelegate, ESkyworthVRControllerState, NewControllerState);

/**
 * GoogleVRController Extensions Function Library
 */
UCLASS()
class SKYWORTHINPUT_API USkyworthVRControllerEventManager : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/** DEPRECATED:  Please use VRNotificationsComponent's VRControllerRecentered delegate instead! */
	UPROPERTY(BlueprintAssignable)
	FSkyworthVRControllerRecenterDelegate OnControllerRecenteredDelegate_DEPRECATED;

	UPROPERTY(BlueprintAssignable)
	FSkyworthVRControllerStateChangeDelegate OnControllerStateChangedDelegate;

public:
	static USkyworthVRControllerEventManager* GetInstance();
};