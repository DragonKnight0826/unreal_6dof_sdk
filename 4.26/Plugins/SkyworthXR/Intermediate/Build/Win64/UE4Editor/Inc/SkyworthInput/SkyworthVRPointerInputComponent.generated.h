// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FHitResult;
class AActor;
struct FVector;
class ISkyworthVRPointer;
#ifdef SKYWORTHINPUT_SkyworthVRPointerInputComponent_generated_h
#error "SkyworthVRPointerInputComponent.generated.h already included, missing '#pragma once' in SkyworthVRPointerInputComponent.h"
#endif
#define SKYWORTHINPUT_SkyworthVRPointerInputComponent_generated_h

#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_14_DELEGATE \
struct _Script_SkyworthInput_eventSkyworthVRInputExitComponentDelegate_Parms \
{ \
	UPrimitiveComponent* PreviousComponent; \
	FHitResult HitResult; \
}; \
static inline void FSkyworthVRInputExitComponentDelegate_DelegateWrapper(const FMulticastScriptDelegate& SkyworthVRInputExitComponentDelegate, UPrimitiveComponent* PreviousComponent, FHitResult HitResult) \
{ \
	_Script_SkyworthInput_eventSkyworthVRInputExitComponentDelegate_Parms Parms; \
	Parms.PreviousComponent=PreviousComponent; \
	Parms.HitResult=HitResult; \
	SkyworthVRInputExitComponentDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_13_DELEGATE \
struct _Script_SkyworthInput_eventSkyworthVRInputExitActorDelegate_Parms \
{ \
	AActor* PreviousActor; \
	FHitResult HitResult; \
}; \
static inline void FSkyworthVRInputExitActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SkyworthVRInputExitActorDelegate, AActor* PreviousActor, FHitResult HitResult) \
{ \
	_Script_SkyworthInput_eventSkyworthVRInputExitActorDelegate_Parms Parms; \
	Parms.PreviousActor=PreviousActor; \
	Parms.HitResult=HitResult; \
	SkyworthVRInputExitActorDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_12_DELEGATE \
struct _Script_SkyworthInput_eventSkyworthVRInputDelegate_Parms \
{ \
	FHitResult HitResult; \
}; \
static inline void FSkyworthVRInputDelegate_DelegateWrapper(const FMulticastScriptDelegate& SkyworthVRInputDelegate, FHitResult HitResult) \
{ \
	_Script_SkyworthInput_eventSkyworthVRInputDelegate_Parms Parms; \
	Parms.HitResult=HitResult; \
	SkyworthVRInputDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_SPARSE_DATA
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLatestHitResult); \
	DECLARE_FUNCTION(execGetIntersectionLocation); \
	DECLARE_FUNCTION(execGetHitComponent); \
	DECLARE_FUNCTION(execGetHitActor); \
	DECLARE_FUNCTION(execIsBlockingHit); \
	DECLARE_FUNCTION(execGetPointer); \
	DECLARE_FUNCTION(execSetPointer);


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLatestHitResult); \
	DECLARE_FUNCTION(execGetIntersectionLocation); \
	DECLARE_FUNCTION(execGetHitComponent); \
	DECLARE_FUNCTION(execGetHitActor); \
	DECLARE_FUNCTION(execIsBlockingHit); \
	DECLARE_FUNCTION(execGetPointer); \
	DECLARE_FUNCTION(execSetPointer);


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyworthVRPointerInputComponent(); \
	friend struct Z_Construct_UClass_USkyworthVRPointerInputComponent_Statics; \
public: \
	DECLARE_CLASS(USkyworthVRPointerInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyworthInput"), NO_API) \
	DECLARE_SERIALIZER(USkyworthVRPointerInputComponent)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSkyworthVRPointerInputComponent(); \
	friend struct Z_Construct_UClass_USkyworthVRPointerInputComponent_Statics; \
public: \
	DECLARE_CLASS(USkyworthVRPointerInputComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyworthInput"), NO_API) \
	DECLARE_SERIALIZER(USkyworthVRPointerInputComponent)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthVRPointerInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRPointerInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRPointerInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRPointerInputComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRPointerInputComponent(USkyworthVRPointerInputComponent&&); \
	NO_API USkyworthVRPointerInputComponent(const USkyworthVRPointerInputComponent&); \
public:


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRPointerInputComponent(USkyworthVRPointerInputComponent&&); \
	NO_API USkyworthVRPointerInputComponent(const USkyworthVRPointerInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRPointerInputComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRPointerInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRPointerInputComponent)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_23_PROLOG
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_SPARSE_DATA \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_RPC_WRAPPERS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_INCLASS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_SPARSE_DATA \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYWORTHINPUT_API UClass* StaticClass<class USkyworthVRPointerInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRPointerInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
