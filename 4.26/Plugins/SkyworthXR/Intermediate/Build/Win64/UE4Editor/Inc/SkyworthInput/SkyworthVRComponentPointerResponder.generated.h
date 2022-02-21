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
#ifdef SKYWORTHINPUT_SkyworthVRComponentPointerResponder_generated_h
#error "SkyworthVRComponentPointerResponder.generated.h already included, missing '#pragma once' in SkyworthVRComponentPointerResponder.h"
#endif
#define SKYWORTHINPUT_SkyworthVRComponentPointerResponder_generated_h

#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_SPARSE_DATA
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_RPC_WRAPPERS \
	virtual void OnPointerReleased_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerPressed_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerClick_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerHover_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerExit_Implementation(UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerEnter_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
 \
	DECLARE_FUNCTION(execOnPointerReleased); \
	DECLARE_FUNCTION(execOnPointerPressed); \
	DECLARE_FUNCTION(execOnPointerClick); \
	DECLARE_FUNCTION(execOnPointerHover); \
	DECLARE_FUNCTION(execOnPointerExit); \
	DECLARE_FUNCTION(execOnPointerEnter);


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPointerReleased_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerPressed_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerClick_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerHover_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerExit_Implementation(UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
	virtual void OnPointerEnter_Implementation(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source) {}; \
 \
	DECLARE_FUNCTION(execOnPointerReleased); \
	DECLARE_FUNCTION(execOnPointerPressed); \
	DECLARE_FUNCTION(execOnPointerClick); \
	DECLARE_FUNCTION(execOnPointerHover); \
	DECLARE_FUNCTION(execOnPointerExit); \
	DECLARE_FUNCTION(execOnPointerEnter);


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_EVENT_PARMS \
	struct SkyworthVRComponentPointerResponder_eventOnPointerClick_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRComponentPointerResponder_eventOnPointerEnter_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRComponentPointerResponder_eventOnPointerExit_Parms \
	{ \
		UPrimitiveComponent* PreviousComponent; \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRComponentPointerResponder_eventOnPointerHover_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRComponentPointerResponder_eventOnPointerPressed_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	}; \
	struct SkyworthVRComponentPointerResponder_eventOnPointerReleased_Parms \
	{ \
		FHitResult HitResult; \
		USkyworthVRPointerInputComponent* Source; \
	};


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_CALLBACK_WRAPPERS
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthVRComponentPointerResponder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRComponentPointerResponder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRComponentPointerResponder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRComponentPointerResponder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRComponentPointerResponder(USkyworthVRComponentPointerResponder&&); \
	NO_API USkyworthVRComponentPointerResponder(const USkyworthVRComponentPointerResponder&); \
public:


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthVRComponentPointerResponder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRComponentPointerResponder(USkyworthVRComponentPointerResponder&&); \
	NO_API USkyworthVRComponentPointerResponder(const USkyworthVRComponentPointerResponder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRComponentPointerResponder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRComponentPointerResponder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRComponentPointerResponder)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSkyworthVRComponentPointerResponder(); \
	friend struct Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics; \
public: \
	DECLARE_CLASS(USkyworthVRComponentPointerResponder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SkyworthInput"), NO_API) \
	DECLARE_SERIALIZER(USkyworthVRComponentPointerResponder)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_GENERATED_UINTERFACE_BODY() \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_GENERATED_UINTERFACE_BODY() \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISkyworthVRComponentPointerResponder() {} \
public: \
	typedef USkyworthVRComponentPointerResponder UClassType; \
	typedef ISkyworthVRComponentPointerResponder ThisClass; \
	static void Execute_OnPointerClick(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerEnter(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerExit(UObject* O, UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerHover(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerPressed(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerReleased(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~ISkyworthVRComponentPointerResponder() {} \
public: \
	typedef USkyworthVRComponentPointerResponder UClassType; \
	typedef ISkyworthVRComponentPointerResponder ThisClass; \
	static void Execute_OnPointerClick(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerEnter(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerExit(UObject* O, UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerHover(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerPressed(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	static void Execute_OnPointerReleased(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_18_PROLOG \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_EVENT_PARMS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_SPARSE_DATA \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_RPC_WRAPPERS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_CALLBACK_WRAPPERS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_SPARSE_DATA \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_CALLBACK_WRAPPERS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYWORTHINPUT_API UClass* StaticClass<class USkyworthVRComponentPointerResponder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRComponentPointerResponder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
