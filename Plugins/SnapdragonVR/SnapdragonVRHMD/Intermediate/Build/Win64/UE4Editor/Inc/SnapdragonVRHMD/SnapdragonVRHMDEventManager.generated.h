// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESnapdragonVRSensorEventType : uint8;
enum class ESnapdragonVRModeEventType : uint8;
enum class ESnapdragonVRThermalZone : uint8;
enum class ESnapdragonVRThermalLevel : uint8;
enum class ESnapdragonVRSdkServiceEventType : uint8;
#ifdef SNAPDRAGONVRHMD_SnapdragonVRHMDEventManager_generated_h
#error "SnapdragonVRHMDEventManager.generated.h already included, missing '#pragma once' in SnapdragonVRHMDEventManager.h"
#endif
#define SNAPDRAGONVRHMD_SnapdragonVRHMDEventManager_generated_h

#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_60_DELEGATE \
struct _Script_SnapdragonVRHMD_eventSnapdragonVRSensorDelegate_Parms \
{ \
	ESnapdragonVRSensorEventType Type; \
}; \
static inline void FSnapdragonVRSensorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SnapdragonVRSensorDelegate, ESnapdragonVRSensorEventType Type) \
{ \
	_Script_SnapdragonVRHMD_eventSnapdragonVRSensorDelegate_Parms Parms; \
	Parms.Type=Type; \
	SnapdragonVRSensorDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_59_DELEGATE \
struct _Script_SnapdragonVRHMD_eventSnapdragonVRModeDelegate_Parms \
{ \
	ESnapdragonVRModeEventType Type; \
}; \
static inline void FSnapdragonVRModeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SnapdragonVRModeDelegate, ESnapdragonVRModeEventType Type) \
{ \
	_Script_SnapdragonVRHMD_eventSnapdragonVRModeDelegate_Parms Parms; \
	Parms.Type=Type; \
	SnapdragonVRModeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_58_DELEGATE \
struct _Script_SnapdragonVRHMD_eventSnapdragonVRThermalDelegate_Parms \
{ \
	ESnapdragonVRThermalZone Zone; \
	ESnapdragonVRThermalLevel Level; \
}; \
static inline void FSnapdragonVRThermalDelegate_DelegateWrapper(const FMulticastScriptDelegate& SnapdragonVRThermalDelegate, ESnapdragonVRThermalZone Zone, ESnapdragonVRThermalLevel Level) \
{ \
	_Script_SnapdragonVRHMD_eventSnapdragonVRThermalDelegate_Parms Parms; \
	Parms.Zone=Zone; \
	Parms.Level=Level; \
	SnapdragonVRThermalDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_57_DELEGATE \
struct _Script_SnapdragonVRHMD_eventSnapdragonVRSdkServiceDelegate_Parms \
{ \
	ESnapdragonVRSdkServiceEventType Type; \
}; \
static inline void FSnapdragonVRSdkServiceDelegate_DelegateWrapper(const FMulticastScriptDelegate& SnapdragonVRSdkServiceDelegate, ESnapdragonVRSdkServiceEventType Type) \
{ \
	_Script_SnapdragonVRHMD_eventSnapdragonVRSdkServiceDelegate_Parms Parms; \
	Parms.Type=Type; \
	SnapdragonVRSdkServiceDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_SPARSE_DATA
#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_RPC_WRAPPERS
#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapdragonVRHMDEventManager(); \
	friend struct Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics; \
public: \
	DECLARE_CLASS(USnapdragonVRHMDEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnapdragonVRHMD"), NO_API) \
	DECLARE_SERIALIZER(USnapdragonVRHMDEventManager)


#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUSnapdragonVRHMDEventManager(); \
	friend struct Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics; \
public: \
	DECLARE_CLASS(USnapdragonVRHMDEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnapdragonVRHMD"), NO_API) \
	DECLARE_SERIALIZER(USnapdragonVRHMDEventManager)


#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapdragonVRHMDEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapdragonVRHMDEventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapdragonVRHMDEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapdragonVRHMDEventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USnapdragonVRHMDEventManager(USnapdragonVRHMDEventManager&&); \
	NO_API USnapdragonVRHMDEventManager(const USnapdragonVRHMDEventManager&); \
public:


#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapdragonVRHMDEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USnapdragonVRHMDEventManager(USnapdragonVRHMDEventManager&&); \
	NO_API USnapdragonVRHMDEventManager(const USnapdragonVRHMDEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapdragonVRHMDEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapdragonVRHMDEventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapdragonVRHMDEventManager)


#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_65_PROLOG
#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_SPARSE_DATA \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_RPC_WRAPPERS \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_INCLASS \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_SPARSE_DATA \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_68_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SnapdragonVRHMDEventManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAPDRAGONVRHMD_API UClass* StaticClass<class USnapdragonVRHMDEventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h


#define FOREACH_ENUM_ESNAPDRAGONVRTHERMALZONE(op) \
	op(ESnapdragonVRThermalZone::Cpu) \
	op(ESnapdragonVRThermalZone::Gpu) \
	op(ESnapdragonVRThermalZone::Skin) 

enum class ESnapdragonVRThermalZone : uint8;
template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRThermalZone>();

#define FOREACH_ENUM_ESNAPDRAGONVRTHERMALLEVEL(op) \
	op(ESnapdragonVRThermalLevel::Safe) \
	op(ESnapdragonVRThermalLevel::Level1) \
	op(ESnapdragonVRThermalLevel::Level2) \
	op(ESnapdragonVRThermalLevel::Level3) \
	op(ESnapdragonVRThermalLevel::Critical) 

enum class ESnapdragonVRThermalLevel : uint8;
template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRThermalLevel>();

#define FOREACH_ENUM_ESNAPDRAGONVRSENSOREVENTTYPE(op) \
	op(ESnapdragonVRSensorEventType::EventSensorError) \
	op(ESnapdragonVRSensorEventType::EventMagnometerUncalibrated) 

enum class ESnapdragonVRSensorEventType : uint8;
template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRSensorEventType>();

#define FOREACH_ENUM_ESNAPDRAGONVRMODEEVENTTYPE(op) \
	op(ESnapdragonVRModeEventType::EventVrModeStarted) \
	op(ESnapdragonVRModeEventType::EventVrModeStopping) \
	op(ESnapdragonVRModeEventType::EventVrModeStopped) 

enum class ESnapdragonVRModeEventType : uint8;
template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRModeEventType>();

#define FOREACH_ENUM_ESNAPDRAGONVRSDKSERVICEEVENTTYPE(op) \
	op(ESnapdragonVRSdkServiceEventType::EventSdkServiceStarting) \
	op(ESnapdragonVRSdkServiceEventType::EventSdkServiceStarted) \
	op(ESnapdragonVRSdkServiceEventType::EventSdkServiceStopped) 

enum class ESnapdragonVRSdkServiceEventType : uint8;
template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRSdkServiceEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
