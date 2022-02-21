// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
enum class ESkyworthVRControllerBatteryLevel : uint8;
struct FVector;
class USkyworthVRControllerEventManager;
struct FRotator;
enum class ESkyworthVRControllerHandedness : uint8;
enum class ESkyworthVRControllerState : uint8;
enum class ESkyworthVRControllerAPIStatus : uint8;
#ifdef SKYWORTHINPUT_SkyworthVRControllerFunctionLibrary_generated_h
#error "SkyworthVRControllerFunctionLibrary.generated.h already included, missing '#pragma once' in SkyworthVRControllerFunctionLibrary.h"
#endif
#define SKYWORTHINPUT_SkyworthVRControllerFunctionLibrary_generated_h

#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_SPARSE_DATA
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBatteryLevel); \
	DECLARE_FUNCTION(execGetBatteryCharging); \
	DECLARE_FUNCTION(execGetTooltipAlphaValue); \
	DECLARE_FUNCTION(execGetControllerAlphaValue); \
	DECLARE_FUNCTION(execSetTooltipMaxAngleFromCamera); \
	DECLARE_FUNCTION(execGetTooltipMaxAngleFromCamera); \
	DECLARE_FUNCTION(execSetTooltipMinDistanceFromFace); \
	DECLARE_FUNCTION(execGetTooltipMinDistanceFromFace); \
	DECLARE_FUNCTION(execSetFadeDistanceFromFace); \
	DECLARE_FUNCTION(execGetFadeDistanceFromFace); \
	DECLARE_FUNCTION(execGetArmModelIsLockedToHead); \
	DECLARE_FUNCTION(execSetArmModelIsLockedToHead); \
	DECLARE_FUNCTION(execSetWillArmModelUseAccelerometer); \
	DECLARE_FUNCTION(execWillArmModelUseAccelerometer); \
	DECLARE_FUNCTION(execSetArmModelPointerTiltAngle); \
	DECLARE_FUNCTION(execGetArmModelPointerTiltAngle); \
	DECLARE_FUNCTION(execSetArmModelAddedElbowDepth); \
	DECLARE_FUNCTION(execGetArmModelAddedElbowDepth); \
	DECLARE_FUNCTION(execSetArmModelAddedElbowHeight); \
	DECLARE_FUNCTION(execGetArmModelAddedElbowHeight); \
	DECLARE_FUNCTION(execGetArmModelPointerPositionOffset); \
	DECLARE_FUNCTION(execSetArmModelEnabled); \
	DECLARE_FUNCTION(execIsArmModelEnabled); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerEventManager); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerOrientation); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerRawGyro); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerRawAccel); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerHandedness); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerState); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerAPIStatus);


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBatteryLevel); \
	DECLARE_FUNCTION(execGetBatteryCharging); \
	DECLARE_FUNCTION(execGetTooltipAlphaValue); \
	DECLARE_FUNCTION(execGetControllerAlphaValue); \
	DECLARE_FUNCTION(execSetTooltipMaxAngleFromCamera); \
	DECLARE_FUNCTION(execGetTooltipMaxAngleFromCamera); \
	DECLARE_FUNCTION(execSetTooltipMinDistanceFromFace); \
	DECLARE_FUNCTION(execGetTooltipMinDistanceFromFace); \
	DECLARE_FUNCTION(execSetFadeDistanceFromFace); \
	DECLARE_FUNCTION(execGetFadeDistanceFromFace); \
	DECLARE_FUNCTION(execGetArmModelIsLockedToHead); \
	DECLARE_FUNCTION(execSetArmModelIsLockedToHead); \
	DECLARE_FUNCTION(execSetWillArmModelUseAccelerometer); \
	DECLARE_FUNCTION(execWillArmModelUseAccelerometer); \
	DECLARE_FUNCTION(execSetArmModelPointerTiltAngle); \
	DECLARE_FUNCTION(execGetArmModelPointerTiltAngle); \
	DECLARE_FUNCTION(execSetArmModelAddedElbowDepth); \
	DECLARE_FUNCTION(execGetArmModelAddedElbowDepth); \
	DECLARE_FUNCTION(execSetArmModelAddedElbowHeight); \
	DECLARE_FUNCTION(execGetArmModelAddedElbowHeight); \
	DECLARE_FUNCTION(execGetArmModelPointerPositionOffset); \
	DECLARE_FUNCTION(execSetArmModelEnabled); \
	DECLARE_FUNCTION(execIsArmModelEnabled); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerEventManager); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerOrientation); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerRawGyro); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerRawAccel); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerHandedness); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerState); \
	DECLARE_FUNCTION(execGetSkyworthVRControllerAPIStatus);


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyworthVRControllerFunctionLibrary(); \
	friend struct Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USkyworthVRControllerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyworthInput"), NO_API) \
	DECLARE_SERIALIZER(USkyworthVRControllerFunctionLibrary)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUSkyworthVRControllerFunctionLibrary(); \
	friend struct Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USkyworthVRControllerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyworthInput"), NO_API) \
	DECLARE_SERIALIZER(USkyworthVRControllerFunctionLibrary)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthVRControllerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRControllerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRControllerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRControllerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRControllerFunctionLibrary(USkyworthVRControllerFunctionLibrary&&); \
	NO_API USkyworthVRControllerFunctionLibrary(const USkyworthVRControllerFunctionLibrary&); \
public:


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthVRControllerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRControllerFunctionLibrary(USkyworthVRControllerFunctionLibrary&&); \
	NO_API USkyworthVRControllerFunctionLibrary(const USkyworthVRControllerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRControllerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRControllerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRControllerFunctionLibrary)


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_68_PROLOG
#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_SPARSE_DATA \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_RPC_WRAPPERS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_INCLASS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_SPARSE_DATA \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h_71_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkyworthVRControllerFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYWORTHINPUT_API UClass* StaticClass<class USkyworthVRControllerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerFunctionLibrary_h


#define FOREACH_ENUM_ESKYWORTHVRCONTROLLERBATTERYLEVEL(op) \
	op(ESkyworthVRControllerBatteryLevel::Unknown) \
	op(ESkyworthVRControllerBatteryLevel::CriticalLow) \
	op(ESkyworthVRControllerBatteryLevel::Low) \
	op(ESkyworthVRControllerBatteryLevel::Medium) \
	op(ESkyworthVRControllerBatteryLevel::AlmostFull) \
	op(ESkyworthVRControllerBatteryLevel::Full) 

enum class ESkyworthVRControllerBatteryLevel : uint8;
template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRControllerBatteryLevel>();

#define FOREACH_ENUM_ESKYWORTHVRARMMODELFOLLOWGAZEBEHAVIOR(op) \
	op(ESkyworthVRArmModelFollowGazeBehavior::Never) \
	op(ESkyworthVRArmModelFollowGazeBehavior::DuringMotion) \
	op(ESkyworthVRArmModelFollowGazeBehavior::Always) 

enum class ESkyworthVRArmModelFollowGazeBehavior : uint8;
template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRArmModelFollowGazeBehavior>();

#define FOREACH_ENUM_ESKYWORTHVRCONTROLLERHANDEDNESS(op) \
	op(ESkyworthVRControllerHandedness::RightHanded) \
	op(ESkyworthVRControllerHandedness::LeftHanded) \
	op(ESkyworthVRControllerHandedness::Unknown) 

enum class ESkyworthVRControllerHandedness : uint8;
template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRControllerHandedness>();

#define FOREACH_ENUM_ESKYWORTHVRCONTROLLERAPISTATUS(op) \
	op(ESkyworthVRControllerAPIStatus::OK) \
	op(ESkyworthVRControllerAPIStatus::Unsupported) \
	op(ESkyworthVRControllerAPIStatus::NotAuthorized) \
	op(ESkyworthVRControllerAPIStatus::Unavailable) \
	op(ESkyworthVRControllerAPIStatus::ServiceObsolete) \
	op(ESkyworthVRControllerAPIStatus::ClientObsolete) \
	op(ESkyworthVRControllerAPIStatus::Malfunction) \
	op(ESkyworthVRControllerAPIStatus::Unknown) 

enum class ESkyworthVRControllerAPIStatus : uint8;
template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRControllerAPIStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
