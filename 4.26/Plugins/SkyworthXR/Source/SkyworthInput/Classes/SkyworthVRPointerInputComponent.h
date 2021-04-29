// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/ActorComponent.h"
#include "SkyworthVRPointer.h"
#include "InputCoreTypes.h"
#include "SkyworthVRPointerInputComponent.generated.h"

class USkyworthVRWidgetInteractionComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkyworthVRInputDelegate, FHitResult, HitResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkyworthVRInputExitActorDelegate, AActor*, PreviousActor, FHitResult, HitResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkyworthVRInputExitComponentDelegate, UPrimitiveComponent*, PreviousComponent, FHitResult, HitResult);

/**
 * SkyworthVRPointerInputComponent is used to interact with Actors and Widgets by
 * using a 3D pointer. The pointer can be a cardboard reticle, or a daydream controller.
 *
 * @see USkyworthVRMotionControllerComponent
 * @see USkyworthVRGazeReticleComponent
 */
UCLASS(ClassGroup=(SkyworthInput), meta=(BlueprintSpawnableComponent))
class SKYWORTHINPUT_API USkyworthVRPointerInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	USkyworthVRPointerInputComponent(const FObjectInitializer& ObjectInitializer);

	/** Set the Pointer to use for this input component. */
	UFUNCTION(BlueprintCallable, Category = "SkyworthVRPointerInput", meta = (Keywords = "Cardboard AVR GVR"))
	void SetPointer(TScriptInterface<ISkyworthVRPointer> NewPointer);

	/** Get the Pointer being used for this input component. */
	UFUNCTION(BlueprintCallable, Category = "SkyworthVRPointerInput", meta = (Keywords = "Cardboard AVR GVR"))
	TScriptInterface<ISkyworthVRPointer> GetPointer() const;

	/** Returns true if there was a blocking hit. */
	UFUNCTION(BlueprintCallable, Category = "SkyworthVRPointerInput", meta = (Keywords = "Cardboard AVR GVR"))
	bool IsBlockingHit() const;

	/** The actor that is being pointed at. */
	UFUNCTION(BlueprintCallable, Category = "SkyworthVRPointerInput", meta = (Keywords = "Cardboard AVR GVR"))
	AActor* GetHitActor() const;

	/** The component that the actor being pointed at. */
	UFUNCTION(BlueprintCallable, Category = "SkyworthVRPointerInput", meta = (Keywords = "Cardboard AVR GVR"))
	UPrimitiveComponent* GetHitComponent() const;

	/** The world location where the pointer intersected with the hit actor. */
	UFUNCTION(BlueprintCallable, Category = "SkyworthVRPointerInput", meta = (Keywords = "Cardboard AVR GVR"))
	FVector GetIntersectionLocation() const;

	/** Get the result of the latest hit detection. */
	UFUNCTION(BlueprintCallable, Category = "SkyworthVRPointerInput", meta = (Keywords = "Cardboard AVR GVR"))
	FHitResult GetLatestHitResult() const;

	/** The maximum distance an object can be from the start of the pointer for the pointer to hit it. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pointer")
	float FarClippingDistance;

	/** The minimum distance an object needs to be from the camera for the pointer to hit it.
	 *  Note: Only used when PointerInputMode is set to Camera.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pointer")
	float NearClippingDistance;

	/** Determines if pointer clicks will occur from controller clicks. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	bool UseControllerClick;

	/** Determines if pointer clicks will occur from touching the screen. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	bool UseTouchClick;

	/** WidgetInteractionComponent used to integrate pointer input with UMG widgets. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text")
	USkyworthVRWidgetInteractionComponent* WidgetInteraction;

	/** Event that occurs when the pointer enters an actor. */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputDelegate OnPointerEnterActorEvent;

	/** Event that occurs when the pointer enters a component. */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputDelegate OnPointerEnterComponentEvent;

	/** Event that occurs when the pointer exits an actor. */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputExitActorDelegate OnPointerExitActorEvent;

	/** Event that occurs when the pointer exits a component. */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputExitComponentDelegate OnPointerExitComponentEvent;

	/** Event that occurs once when the pointer is hovering over an actor. */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputDelegate OnPointerHoverActorEvent;

	/** Event that occurs once when the pointer is hovering over a component. */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputDelegate OnPointerHoverComponentEvent;

	/** Event that occurs once when the pointer is clicked.
	 *  A click is when the pointer is pressed and then released while pointing at the same actor.
	 */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputDelegate OnPointerClickActorEvent;

	/** Event that occurs once when the pointer is clicked.
	 *  A click is when the pointer is pressed and then released while pointing at the same component.
	 */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputDelegate OnPointerClickComponentEvent;

	/** Event that occurs once when the pointer initiates a click. */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputDelegate OnPointerPressedEvent;

	/** Event that occurs once when the pointer ends a click. */
	UPROPERTY(BlueprintAssignable, Category="Event")
	FSkyworthVRInputDelegate OnPointerReleasedEvent;

	virtual void OnRegister() override;
	virtual void BeginPlay() override;
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

protected:

	/** Override if you desire to change the hit detection behavior. */
	FHitResult PerformHitDetection();

	/** Override if you desire to do any additional processing of the hits.
	 *  Example: Adding additional events unique to your application.
	 */
	virtual void PostHitDetection();

	TScriptInterface<ISkyworthVRPointer> Pointer;
	FHitResult LatestHitResult;

private:

	void GetPointerStartAndEnd(FVector& OutPointerStart, FVector& OutPointerEnd, ESkyworthVRPointerInputMode InputMode) const;
	void ClickButtonPressed();
	void ClickButtonReleased();
	void TouchPressed(ETouchIndex::Type FingerIndex, FVector Location);
	void TouchReleased(ETouchIndex::Type FingerIndex, FVector Location);
	void CheckHitObjectOnRadius(FHitResult& HitResult, FVector PointerStart, FVector PointerEnd);
	

	AActor* PendingClickActor;
	UPrimitiveComponent* PendingClickComponent;
	/*bool ClickPreState;
	bool ClickCurrentState;*/
	bool preIsOritationValid;
public:
	//多播一个参数的委托
	DECLARE_MULTICAST_DELEGATE_OneParam(FMuitiDelagateWithOneParam, bool);

	FMuitiDelagateWithOneParam MuitiDelagateWithOneParam;

	bool GetControllerConnected();

};
