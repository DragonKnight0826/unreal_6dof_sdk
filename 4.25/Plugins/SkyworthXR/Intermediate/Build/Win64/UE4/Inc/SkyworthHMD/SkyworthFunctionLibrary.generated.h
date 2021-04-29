// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class FSTrackedDeviceType : uint8;
enum class FSBoundaryType : uint8;
struct FSGuardianTestResult;
struct FVector;
struct FTransform;
struct FLinearColor;
enum class FSFixedFoveatedRenderingLevel : uint8;
struct FVector2D;
class UTexture2D;
struct FRotator;
struct FSHmdUserProfile;
#ifdef SKYWORTHHMD_SkyworthFunctionLibrary_generated_h
#error "SkyworthFunctionLibrary.generated.h already included, missing '#pragma once' in SkyworthFunctionLibrary.h"
#endif
#define SKYWORTHHMD_SkyworthFunctionLibrary_generated_h

#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGuardianTestResult_Statics; \
	SKYWORTHHMD_API static class UScriptStruct* StaticStruct();


template<> SKYWORTHHMD_API UScriptStruct* StaticStruct<struct FSGuardianTestResult>();

#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSHmdUserProfile_Statics; \
	SKYWORTHHMD_API static class UScriptStruct* StaticStruct();


template<> SKYWORTHHMD_API UScriptStruct* StaticStruct<struct FSHmdUserProfile>();

#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics; \
	SKYWORTHHMD_API static class UScriptStruct* StaticStruct();


template<> SKYWORTHHMD_API UScriptStruct* StaticStruct<struct FSHmdUserProfileField>();

#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_SPARSE_DATA
#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGuardianVisibility); \
	DECLARE_FUNCTION(execGetNodeGuardianIntersection); \
	DECLARE_FUNCTION(execGetPointGuardianIntersection); \
	DECLARE_FUNCTION(execGetPlayAreaTransform); \
	DECLARE_FUNCTION(execGetGuardianDimensions); \
	DECLARE_FUNCTION(execGetGuardianPoints); \
	DECLARE_FUNCTION(execIsGuardianConfigured); \
	DECLARE_FUNCTION(execIsGuardianDisplayed); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execEnableOrientationTracking); \
	DECLARE_FUNCTION(execEnablePositionTracking); \
	DECLARE_FUNCTION(execSetDisplayFrequency); \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execSetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetGPUFrameTime); \
	DECLARE_FUNCTION(execGetGPUUtilization); \
	DECLARE_FUNCTION(execHasSystemOverlayPresent); \
	DECLARE_FUNCTION(execHasInputFocus); \
	DECLARE_FUNCTION(execGetLoadingSplashParams); \
	DECLARE_FUNCTION(execSetLoadingSplashParams); \
	DECLARE_FUNCTION(execIsLoadingIconEnabled); \
	DECLARE_FUNCTION(execHideLoadingIcon); \
	DECLARE_FUNCTION(execShowLoadingIcon); \
	DECLARE_FUNCTION(execIsAutoLoadingSplashScreenEnabled); \
	DECLARE_FUNCTION(execEnableAutoLoadingSplashScreen); \
	DECLARE_FUNCTION(execHideLoadingSplashScreen); \
	DECLARE_FUNCTION(execShowLoadingSplashScreen); \
	DECLARE_FUNCTION(execClearLoadingSplashScreens); \
	DECLARE_FUNCTION(execAddLoadingSplashScreen); \
	DECLARE_FUNCTION(execGetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetPositionScale3D); \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execGetUserProfile); \
	DECLARE_FUNCTION(execSetReorientHMDOnControllerRecenter); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execIsDeviceTracked); \
	DECLARE_FUNCTION(execGetRawSensorData); \
	DECLARE_FUNCTION(execGetPose);


#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGuardianVisibility); \
	DECLARE_FUNCTION(execGetNodeGuardianIntersection); \
	DECLARE_FUNCTION(execGetPointGuardianIntersection); \
	DECLARE_FUNCTION(execGetPlayAreaTransform); \
	DECLARE_FUNCTION(execGetGuardianDimensions); \
	DECLARE_FUNCTION(execGetGuardianPoints); \
	DECLARE_FUNCTION(execIsGuardianConfigured); \
	DECLARE_FUNCTION(execIsGuardianDisplayed); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execEnableOrientationTracking); \
	DECLARE_FUNCTION(execEnablePositionTracking); \
	DECLARE_FUNCTION(execSetDisplayFrequency); \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execSetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetFixedFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetGPUFrameTime); \
	DECLARE_FUNCTION(execGetGPUUtilization); \
	DECLARE_FUNCTION(execHasSystemOverlayPresent); \
	DECLARE_FUNCTION(execHasInputFocus); \
	DECLARE_FUNCTION(execGetLoadingSplashParams); \
	DECLARE_FUNCTION(execSetLoadingSplashParams); \
	DECLARE_FUNCTION(execIsLoadingIconEnabled); \
	DECLARE_FUNCTION(execHideLoadingIcon); \
	DECLARE_FUNCTION(execShowLoadingIcon); \
	DECLARE_FUNCTION(execIsAutoLoadingSplashScreenEnabled); \
	DECLARE_FUNCTION(execEnableAutoLoadingSplashScreen); \
	DECLARE_FUNCTION(execHideLoadingSplashScreen); \
	DECLARE_FUNCTION(execShowLoadingSplashScreen); \
	DECLARE_FUNCTION(execClearLoadingSplashScreens); \
	DECLARE_FUNCTION(execAddLoadingSplashScreen); \
	DECLARE_FUNCTION(execGetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetPositionScale3D); \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execGetUserProfile); \
	DECLARE_FUNCTION(execSetReorientHMDOnControllerRecenter); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execIsDeviceTracked); \
	DECLARE_FUNCTION(execGetRawSensorData); \
	DECLARE_FUNCTION(execGetPose);


#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyworthFunctionLibrary(); \
	friend struct Z_Construct_UClass_USkyworthFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USkyworthFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyworthHMD"), NO_API) \
	DECLARE_SERIALIZER(USkyworthFunctionLibrary)


#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUSkyworthFunctionLibrary(); \
	friend struct Z_Construct_UClass_USkyworthFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USkyworthFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyworthHMD"), NO_API) \
	DECLARE_SERIALIZER(USkyworthFunctionLibrary)


#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthFunctionLibrary(USkyworthFunctionLibrary&&); \
	NO_API USkyworthFunctionLibrary(const USkyworthFunctionLibrary&); \
public:


#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthFunctionLibrary(USkyworthFunctionLibrary&&); \
	NO_API USkyworthFunctionLibrary(const USkyworthFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthFunctionLibrary)


#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_PRIVATE_PROPERTY_OFFSET
#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_131_PROLOG
#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_PRIVATE_PROPERTY_OFFSET \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_SPARSE_DATA \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_RPC_WRAPPERS \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_INCLASS \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_PRIVATE_PROPERTY_OFFSET \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_SPARSE_DATA \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_INCLASS_NO_PURE_DECLS \
	sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h_134_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkyworthFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYWORTHHMD_API UClass* StaticClass<class USkyworthFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID sdktest_Plugins_SkyworthXR_Source_SkyworthHMD_Public_SkyworthFunctionLibrary_h


#define FOREACH_ENUM_FSBOUNDARYTYPE(op) \
	op(FSBoundaryType::Boundary_Outer) \
	op(FSBoundaryType::Boundary_PlayArea) 

enum class FSBoundaryType : uint8;
template<> SKYWORTHHMD_API UEnum* StaticEnum<FSBoundaryType>();

#define FOREACH_ENUM_FSFIXEDFOVEATEDRENDERINGLEVEL(op) \
	op(FSFixedFoveatedRenderingLevel::FFR_Off) \
	op(FSFixedFoveatedRenderingLevel::FFR_Low) \
	op(FSFixedFoveatedRenderingLevel::FFR_Medium) \
	op(FSFixedFoveatedRenderingLevel::FFR_High) \
	op(FSFixedFoveatedRenderingLevel::FFR_HighTop) 

enum class FSFixedFoveatedRenderingLevel : uint8;
template<> SKYWORTHHMD_API UEnum* StaticEnum<FSFixedFoveatedRenderingLevel>();

#define FOREACH_ENUM_FSTRACKEDDEVICETYPE(op) \
	op(FSTrackedDeviceType::None) \
	op(FSTrackedDeviceType::HMD) \
	op(FSTrackedDeviceType::LTouch) \
	op(FSTrackedDeviceType::RTouch) \
	op(FSTrackedDeviceType::Touch) \
	op(FSTrackedDeviceType::DeviceObjectZero) \
	op(FSTrackedDeviceType::All) 

enum class FSTrackedDeviceType : uint8;
template<> SKYWORTHHMD_API UEnum* StaticEnum<FSTrackedDeviceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
