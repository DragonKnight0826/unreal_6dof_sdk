// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class USkyworthVRPointerInputComponent;
class UPrimitiveComponent;
class AActor;
#ifdef SKYWORTHINPUT_SkyworthVRActorPointerResponder_generated_h
#error "SkyworthVRActorPointerResponder.generated.h already included, missing '#pragma once' in SkyworthVRActorPointerResponder.h"
#endif
#define SKYWORTHINPUT_SkyworthVRActorPointerResponder_generated_h

#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_SPARSE_DATA
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_RPC_WRAPPERS \
	virtual void OnPointerReleased_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerPressed_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerClick_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerComponentChanged_Implementation(UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerHover_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerExit_Implementation(AActor* PreviousActor, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerEnter_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
 \
	DECLARE_FUNCTION(execOnPointerReleased); \
	DECLARE_FUNCTION(execOnPointerPressed); \
	DECLARE_FUNCTION(execOnPointerClick); \
	DECLARE_FUNCTION(execOnPointerComponentChanged); \
	DECLARE_FUNCTION(execOnPointerHover); \
	DECLARE_FUNCTION(execOnPointerExit); \
	DECLARE_FUNCTION(execOnPointerEnter);


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPointerReleased_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerPressed_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerClick_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerComponentChanged_Implementation(UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerHover_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerExit_Implementation(AActor* PreviousActor, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerEnter_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
 \
	DECLARE_FUNCTION(execOnPointerReleased); \
	DECLARE_FUNCTION(execOnPointerPressed); \
	DECLARE_FUNCTION(execOnPointerClick); \
	DECLARE_FUNCTION(execOnPointerComponentChanged); \
	DECLARE_FUNCTION(execOnPointerHover); \
	DECLARE_FUNCTION(execOnPointerExit); \
	DECLARE_FUNCTION(execOnPointerEnter);


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_EVENT_PARMS \
	struct SkyworthVRActorPointerResponder_eventOnPointerClick_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRActorPointerResponder_eventOnPointerComponentChanged_Parms \
	{ \
		UPrimitiveComponent* PreviousComponent; \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRActorPointerResponder_eventOnPointerEnter_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRActorPointerResponder_eventOnPointerExit_Parms \
	{ \
		AActor* PreviousActor; \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRActorPointerResponder_eventOnPointerHover_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRActorPointerResponder_eventOnPointerPressed_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRActorPointerResponder_eventOnPointerReleased_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	};


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_CALLBACK_WRAPPERS
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthVRActorPointerResponder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRActorPointerResponder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRActorPointerResponder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRActorPointerResponder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRActorPointerResponder(USkyworthVRActorPointerResponder&&); \
	NO_API USkyworthVRActorPointerResponder(const USkyworthVRActorPointerResponder&); \
public:


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthVRActorPointerResponder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRActorPointerResponder(USkyworthVRActorPointerResponder&&); \
	NO_API USkyworthVRActorPointerResponder(const USkyworthVRActorPointerResponder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRActorPointerResponder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRActorPointerResponder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRActorPointerResponder)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSkyworthVRActorPointerResponder(); \
	friend struct Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics; \
public: \
	DECLARE_CLASS(USkyworthVRActorPointerResponder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SkyworthInput"), NO_API) \
	DECLARE_SERIALIZER(USkyworthVRActorPointerResponder)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_GENERATED_UINTERFACE_BODY() \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_GENERATED_UINTERFACE_BODY() \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISkyworthVRActorPointerResponder() {} \
public: \
	typedef USkyworthVRActorPointerResponder UClassType; \
	typedef ISkyworthVRActorPointerResponder ThisClass; \
	static void Execute_OnPointerClick(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerComponentChanged(UObject* O, UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerEnter(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerExit(UObject* O, AActor* PreviousActor, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerHover(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerPressed(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerReleased(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~ISkyworthVRActorPointerResponder() {} \
public: \
	typedef USkyworthVRActorPointerResponder UClassType; \
	typedef ISkyworthVRActorPointerResponder ThisClass; \
	static void Execute_OnPointerClick(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerComponentChanged(UObject* O, UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerEnter(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerExit(UObject* O, AActor* PreviousActor, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerHover(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerPressed(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerReleased(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_18_PROLOG \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_EVENT_PARMS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_SPARSE_DATA \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_RPC_WRAPPERS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_CALLBACK_WRAPPERS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_SPARSE_DATA \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_CALLBACK_WRAPPERS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYWORTHINPUT_API UClass* StaticClass<class USkyworthVRActorPointerResponder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRActorPointerResponder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
