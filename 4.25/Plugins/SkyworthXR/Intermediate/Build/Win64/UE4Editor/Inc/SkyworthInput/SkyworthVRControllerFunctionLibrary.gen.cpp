// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Classes/SkyworthVRControllerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRControllerFunctionLibrary() {}
// Cross Module References
	SKYWORTHINPUT_API UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerBatteryLevel();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
	SKYWORTHINPUT_API UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRArmModelFollowGazeBehavior();
	SKYWORTHINPUT_API UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerHandedness();
	SKYWORTHINPUT_API UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerAPIStatus();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRControllerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRControllerEventManager_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SKYWORTHINPUT_API UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerState();
// End Cross Module References
	static UEnum* ESkyworthVRControllerBatteryLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerBatteryLevel, Z_Construct_UPackage__Script_SkyworthInput(), TEXT("ESkyworthVRControllerBatteryLevel"));
		}
		return Singleton;
	}
	template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRControllerBatteryLevel>()
	{
		return ESkyworthVRControllerBatteryLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkyworthVRControllerBatteryLevel(ESkyworthVRControllerBatteryLevel_StaticEnum, TEXT("/Script/SkyworthInput"), TEXT("ESkyworthVRControllerBatteryLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerBatteryLevel_Hash() { return 1756353592U; }
	UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerBatteryLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkyworthVRControllerBatteryLevel"), 0, Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerBatteryLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkyworthVRControllerBatteryLevel::Unknown", (int64)ESkyworthVRControllerBatteryLevel::Unknown },
				{ "ESkyworthVRControllerBatteryLevel::CriticalLow", (int64)ESkyworthVRControllerBatteryLevel::CriticalLow },
				{ "ESkyworthVRControllerBatteryLevel::Low", (int64)ESkyworthVRControllerBatteryLevel::Low },
				{ "ESkyworthVRControllerBatteryLevel::Medium", (int64)ESkyworthVRControllerBatteryLevel::Medium },
				{ "ESkyworthVRControllerBatteryLevel::AlmostFull", (int64)ESkyworthVRControllerBatteryLevel::AlmostFull },
				{ "ESkyworthVRControllerBatteryLevel::Full", (int64)ESkyworthVRControllerBatteryLevel::Full },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlmostFull.Name", "ESkyworthVRControllerBatteryLevel::AlmostFull" },
				{ "BlueprintType", "true" },
				{ "Comment", "// Represents the controller battery level.\n" },
				{ "CriticalLow.Name", "ESkyworthVRControllerBatteryLevel::CriticalLow" },
				{ "Full.Name", "ESkyworthVRControllerBatteryLevel::Full" },
				{ "Low.Name", "ESkyworthVRControllerBatteryLevel::Low" },
				{ "Medium.Name", "ESkyworthVRControllerBatteryLevel::Medium" },
				{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
				{ "ToolTip", "Represents the controller battery level." },
				{ "Unknown.Name", "ESkyworthVRControllerBatteryLevel::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SkyworthInput,
				nullptr,
				"ESkyworthVRControllerBatteryLevel",
				"ESkyworthVRControllerBatteryLevel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESkyworthVRArmModelFollowGazeBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SkyworthInput_ESkyworthVRArmModelFollowGazeBehavior, Z_Construct_UPackage__Script_SkyworthInput(), TEXT("ESkyworthVRArmModelFollowGazeBehavior"));
		}
		return Singleton;
	}
	template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRArmModelFollowGazeBehavior>()
	{
		return ESkyworthVRArmModelFollowGazeBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkyworthVRArmModelFollowGazeBehavior(ESkyworthVRArmModelFollowGazeBehavior_StaticEnum, TEXT("/Script/SkyworthInput"), TEXT("ESkyworthVRArmModelFollowGazeBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRArmModelFollowGazeBehavior_Hash() { return 873241400U; }
	UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRArmModelFollowGazeBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkyworthVRArmModelFollowGazeBehavior"), 0, Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRArmModelFollowGazeBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkyworthVRArmModelFollowGazeBehavior::Never", (int64)ESkyworthVRArmModelFollowGazeBehavior::Never },
				{ "ESkyworthVRArmModelFollowGazeBehavior::DuringMotion", (int64)ESkyworthVRArmModelFollowGazeBehavior::DuringMotion },
				{ "ESkyworthVRArmModelFollowGazeBehavior::Always", (int64)ESkyworthVRArmModelFollowGazeBehavior::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Comment", "// The shoulder will follow the gaze during controller motion.\n" },
				{ "Always.Name", "ESkyworthVRArmModelFollowGazeBehavior::Always" },
				{ "Always.ToolTip", "The shoulder will follow the gaze during controller motion." },
				{ "BlueprintType", "true" },
				{ "Comment", "// Represents when gaze-following behavior should occur in the ArmModel.\n// This is useful if you have an application that requires the user to turn around.\n" },
				{ "DuringMotion.Comment", "// The shoulder will never follow the gaze.\n" },
				{ "DuringMotion.Name", "ESkyworthVRArmModelFollowGazeBehavior::DuringMotion" },
				{ "DuringMotion.ToolTip", "The shoulder will never follow the gaze." },
				{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
				{ "Never.Name", "ESkyworthVRArmModelFollowGazeBehavior::Never" },
				{ "ToolTip", "Represents when gaze-following behavior should occur in the ArmModel.\nThis is useful if you have an application that requires the user to turn around." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SkyworthInput,
				nullptr,
				"ESkyworthVRArmModelFollowGazeBehavior",
				"ESkyworthVRArmModelFollowGazeBehavior",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESkyworthVRControllerHandedness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerHandedness, Z_Construct_UPackage__Script_SkyworthInput(), TEXT("ESkyworthVRControllerHandedness"));
		}
		return Singleton;
	}
	template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRControllerHandedness>()
	{
		return ESkyworthVRControllerHandedness_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkyworthVRControllerHandedness(ESkyworthVRControllerHandedness_StaticEnum, TEXT("/Script/SkyworthInput"), TEXT("ESkyworthVRControllerHandedness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerHandedness_Hash() { return 3109958750U; }
	UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerHandedness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkyworthVRControllerHandedness"), 0, Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerHandedness_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkyworthVRControllerHandedness::RightHanded", (int64)ESkyworthVRControllerHandedness::RightHanded },
				{ "ESkyworthVRControllerHandedness::LeftHanded", (int64)ESkyworthVRControllerHandedness::LeftHanded },
				{ "ESkyworthVRControllerHandedness::Unknown", (int64)ESkyworthVRControllerHandedness::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LeftHanded.Name", "ESkyworthVRControllerHandedness::LeftHanded" },
				{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
				{ "RightHanded.Name", "ESkyworthVRControllerHandedness::RightHanded" },
				{ "Unknown.Name", "ESkyworthVRControllerHandedness::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SkyworthInput,
				nullptr,
				"ESkyworthVRControllerHandedness",
				"ESkyworthVRControllerHandedness",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESkyworthVRControllerAPIStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerAPIStatus, Z_Construct_UPackage__Script_SkyworthInput(), TEXT("ESkyworthVRControllerAPIStatus"));
		}
		return Singleton;
	}
	template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRControllerAPIStatus>()
	{
		return ESkyworthVRControllerAPIStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkyworthVRControllerAPIStatus(ESkyworthVRControllerAPIStatus_StaticEnum, TEXT("/Script/SkyworthInput"), TEXT("ESkyworthVRControllerAPIStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerAPIStatus_Hash() { return 2217881320U; }
	UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerAPIStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkyworthVRControllerAPIStatus"), 0, Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerAPIStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkyworthVRControllerAPIStatus::OK", (int64)ESkyworthVRControllerAPIStatus::OK },
				{ "ESkyworthVRControllerAPIStatus::Unsupported", (int64)ESkyworthVRControllerAPIStatus::Unsupported },
				{ "ESkyworthVRControllerAPIStatus::NotAuthorized", (int64)ESkyworthVRControllerAPIStatus::NotAuthorized },
				{ "ESkyworthVRControllerAPIStatus::Unavailable", (int64)ESkyworthVRControllerAPIStatus::Unavailable },
				{ "ESkyworthVRControllerAPIStatus::ServiceObsolete", (int64)ESkyworthVRControllerAPIStatus::ServiceObsolete },
				{ "ESkyworthVRControllerAPIStatus::ClientObsolete", (int64)ESkyworthVRControllerAPIStatus::ClientObsolete },
				{ "ESkyworthVRControllerAPIStatus::Malfunction", (int64)ESkyworthVRControllerAPIStatus::Malfunction },
				{ "ESkyworthVRControllerAPIStatus::Unknown", (int64)ESkyworthVRControllerAPIStatus::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClientObsolete.Comment", "// The underlying VR service is too new, is incompatible with current client.\n" },
				{ "ClientObsolete.Name", "ESkyworthVRControllerAPIStatus::ClientObsolete" },
				{ "ClientObsolete.ToolTip", "The underlying VR service is too new, is incompatible with current client." },
				{ "Malfunction.Comment", "// The underlying VR service is malfunctioning. Try again later.\n" },
				{ "Malfunction.Name", "ESkyworthVRControllerAPIStatus::Malfunction" },
				{ "Malfunction.ToolTip", "The underlying VR service is malfunctioning. Try again later." },
				{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
				{ "NotAuthorized.Comment", "// This app was not authorized to use the service (e.g., missing permissions,\n// the app is blacklisted by the underlying service, etc).\n" },
				{ "NotAuthorized.Name", "ESkyworthVRControllerAPIStatus::NotAuthorized" },
				{ "NotAuthorized.ToolTip", "This app was not authorized to use the service (e.g., missing permissions,\nthe app is blacklisted by the underlying service, etc)." },
				{ "OK.Comment", "// API is happy and healthy. This doesn't mean the controller itself\n// is connected, it just means that the underlying service is working\n// properly.\n" },
				{ "OK.Name", "ESkyworthVRControllerAPIStatus::OK" },
				{ "OK.ToolTip", "API is happy and healthy. This doesn't mean the controller itself\nis connected, it just means that the underlying service is working\nproperly." },
				{ "ServiceObsolete.Comment", "// The underlying VR service is too old, needs upgrade.\n" },
				{ "ServiceObsolete.Name", "ESkyworthVRControllerAPIStatus::ServiceObsolete" },
				{ "ServiceObsolete.ToolTip", "The underlying VR service is too old, needs upgrade." },
				{ "Unavailable.Comment", "// The underlying VR service is not present.\n" },
				{ "Unavailable.Name", "ESkyworthVRControllerAPIStatus::Unavailable" },
				{ "Unavailable.ToolTip", "The underlying VR service is not present." },
				{ "Unknown.Comment", "// This means GoogleVRController plugin is not support on the platform.\n" },
				{ "Unknown.Name", "ESkyworthVRControllerAPIStatus::Unknown" },
				{ "Unknown.ToolTip", "This means GoogleVRController plugin is not support on the platform." },
				{ "Unsupported.Comment", "// API failed because this device does not support controllers (API is too\n// low, or other required feature not present).\n" },
				{ "Unsupported.Name", "ESkyworthVRControllerAPIStatus::Unsupported" },
				{ "Unsupported.ToolTip", "API failed because this device does not support controllers (API is too\nlow, or other required feature not present)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SkyworthInput,
				nullptr,
				"ESkyworthVRControllerAPIStatus",
				"ESkyworthVRControllerAPIStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetBatteryLevel)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESkyworthVRControllerBatteryLevel*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetBatteryLevel(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetBatteryCharging)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetBatteryCharging(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetTooltipAlphaValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetTooltipAlphaValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetControllerAlphaValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetControllerAlphaValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execSetTooltipMaxAngleFromCamera)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AngleFromCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthVRControllerFunctionLibrary::SetTooltipMaxAngleFromCamera(Z_Param_AngleFromCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetTooltipMaxAngleFromCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetTooltipMaxAngleFromCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execSetTooltipMinDistanceFromFace)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceFromFace);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthVRControllerFunctionLibrary::SetTooltipMinDistanceFromFace(Z_Param_DistanceFromFace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetTooltipMinDistanceFromFace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetTooltipMinDistanceFromFace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execSetFadeDistanceFromFace)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceFromFace);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthVRControllerFunctionLibrary::SetFadeDistanceFromFace(Z_Param_DistanceFromFace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetFadeDistanceFromFace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetFadeDistanceFromFace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetArmModelIsLockedToHead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetArmModelIsLockedToHead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execSetArmModelIsLockedToHead)
	{
		P_GET_UBOOL(Z_Param_IsLockedToHead);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthVRControllerFunctionLibrary::SetArmModelIsLockedToHead(Z_Param_IsLockedToHead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execSetWillArmModelUseAccelerometer)
	{
		P_GET_UBOOL(Z_Param_UseAccelerometer);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthVRControllerFunctionLibrary::SetWillArmModelUseAccelerometer(Z_Param_UseAccelerometer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execWillArmModelUseAccelerometer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::WillArmModelUseAccelerometer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execSetArmModelPointerTiltAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthVRControllerFunctionLibrary::SetArmModelPointerTiltAngle(Z_Param_TiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetArmModelPointerTiltAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetArmModelPointerTiltAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execSetArmModelAddedElbowDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElbowDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthVRControllerFunctionLibrary::SetArmModelAddedElbowDepth(Z_Param_ElbowDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetArmModelAddedElbowDepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetArmModelAddedElbowDepth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execSetArmModelAddedElbowHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElbowHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthVRControllerFunctionLibrary::SetArmModelAddedElbowHeight(Z_Param_ElbowHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetArmModelAddedElbowHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetArmModelAddedElbowHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetArmModelPointerPositionOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetArmModelPointerPositionOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execSetArmModelEnabled)
	{
		P_GET_UBOOL(Z_Param_bArmModelEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthVRControllerFunctionLibrary::SetArmModelEnabled(Z_Param_bArmModelEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execIsArmModelEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::IsArmModelEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerEventManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkyworthVRControllerEventManager**)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerEventManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerOrientation)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerOrientation(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerRawGyro)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerRawGyro(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerRawAccel)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerRawAccel(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerHandedness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESkyworthVRControllerHandedness*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerHandedness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerState)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESkyworthVRControllerState*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerState(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerAPIStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESkyworthVRControllerAPIStatus*)Z_Param__Result=USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerAPIStatus();
		P_NATIVE_END;
	}
	void USkyworthVRControllerFunctionLibrary::StaticRegisterNativesUSkyworthVRControllerFunctionLibrary()
	{
		UClass* Class = USkyworthVRControllerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArmModelAddedElbowDepth", &USkyworthVRControllerFunctionLibrary::execGetArmModelAddedElbowDepth },
			{ "GetArmModelAddedElbowHeight", &USkyworthVRControllerFunctionLibrary::execGetArmModelAddedElbowHeight },
			{ "GetArmModelIsLockedToHead", &USkyworthVRControllerFunctionLibrary::execGetArmModelIsLockedToHead },
			{ "GetArmModelPointerPositionOffset", &USkyworthVRControllerFunctionLibrary::execGetArmModelPointerPositionOffset },
			{ "GetArmModelPointerTiltAngle", &USkyworthVRControllerFunctionLibrary::execGetArmModelPointerTiltAngle },
			{ "GetBatteryCharging", &USkyworthVRControllerFunctionLibrary::execGetBatteryCharging },
			{ "GetBatteryLevel", &USkyworthVRControllerFunctionLibrary::execGetBatteryLevel },
			{ "GetControllerAlphaValue", &USkyworthVRControllerFunctionLibrary::execGetControllerAlphaValue },
			{ "GetFadeDistanceFromFace", &USkyworthVRControllerFunctionLibrary::execGetFadeDistanceFromFace },
			{ "GetSkyworthVRControllerAPIStatus", &USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerAPIStatus },
			{ "GetSkyworthVRControllerEventManager", &USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerEventManager },
			{ "GetSkyworthVRControllerHandedness", &USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerHandedness },
			{ "GetSkyworthVRControllerOrientation", &USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerOrientation },
			{ "GetSkyworthVRControllerRawAccel", &USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerRawAccel },
			{ "GetSkyworthVRControllerRawGyro", &USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerRawGyro },
			{ "GetSkyworthVRControllerState", &USkyworthVRControllerFunctionLibrary::execGetSkyworthVRControllerState },
			{ "GetTooltipAlphaValue", &USkyworthVRControllerFunctionLibrary::execGetTooltipAlphaValue },
			{ "GetTooltipMaxAngleFromCamera", &USkyworthVRControllerFunctionLibrary::execGetTooltipMaxAngleFromCamera },
			{ "GetTooltipMinDistanceFromFace", &USkyworthVRControllerFunctionLibrary::execGetTooltipMinDistanceFromFace },
			{ "IsArmModelEnabled", &USkyworthVRControllerFunctionLibrary::execIsArmModelEnabled },
			{ "SetArmModelAddedElbowDepth", &USkyworthVRControllerFunctionLibrary::execSetArmModelAddedElbowDepth },
			{ "SetArmModelAddedElbowHeight", &USkyworthVRControllerFunctionLibrary::execSetArmModelAddedElbowHeight },
			{ "SetArmModelEnabled", &USkyworthVRControllerFunctionLibrary::execSetArmModelEnabled },
			{ "SetArmModelIsLockedToHead", &USkyworthVRControllerFunctionLibrary::execSetArmModelIsLockedToHead },
			{ "SetArmModelPointerTiltAngle", &USkyworthVRControllerFunctionLibrary::execSetArmModelPointerTiltAngle },
			{ "SetFadeDistanceFromFace", &USkyworthVRControllerFunctionLibrary::execSetFadeDistanceFromFace },
			{ "SetTooltipMaxAngleFromCamera", &USkyworthVRControllerFunctionLibrary::execSetTooltipMaxAngleFromCamera },
			{ "SetTooltipMinDistanceFromFace", &USkyworthVRControllerFunctionLibrary::execSetTooltipMinDistanceFromFace },
			{ "SetWillArmModelUseAccelerometer", &USkyworthVRControllerFunctionLibrary::execSetWillArmModelUseAccelerometer },
			{ "WillArmModelUseAccelerometer", &USkyworthVRControllerFunctionLibrary::execWillArmModelUseAccelerometer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetArmModelAddedElbowDepth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetArmModelAddedElbowDepth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Get the elbow depth used by the arm model in meters.\n\x09 *  Used in the mathematical model for calculating the controller position/rotation.\n\x09 *  @return user height.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get the elbow depth used by the arm model in meters.\nUsed in the mathematical model for calculating the controller position/rotation.\n@return user height." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetArmModelAddedElbowDepth", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetArmModelAddedElbowDepth_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetArmModelAddedElbowHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetArmModelAddedElbowHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Get the elbow height used by the arm model in meters.\n\x09 *  Used in the mathematical model for calculating the controller position/rotation.\n\x09 *  @return user height.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get the elbow height used by the arm model in meters.\nUsed in the mathematical model for calculating the controller position/rotation.\n@return user height." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetArmModelAddedElbowHeight", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetArmModelAddedElbowHeight_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetArmModelIsLockedToHead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthVRControllerFunctionLibrary_eventGetArmModelIsLockedToHead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthVRControllerFunctionLibrary_eventGetArmModelIsLockedToHead_Parms), &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Get if the Arm Model will be locked to the head Pose.\n\x09* @return true if it is locked to the Head Pose\n\x09*/" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get if the Arm Model will be locked to the head Pose.\n@return true if it is locked to the Head Pose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetArmModelIsLockedToHead", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetArmModelIsLockedToHead_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetArmModelPointerPositionOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetArmModelPointerPositionOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Returns the local position of the pointer in the unreal coordinate system relative to the motion controller.\n\x09 *  The pointer is similar to the controller, except that it is slightly forward and rotated down by the\n\x09 *  pointer tilt angle. This is used to create more ergonomic comfort when pointing at things.\n\x09 *  This should be used for any reticle / laser implementation.\n\x09 *  @return pointer position.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Returns the local position of the pointer in the unreal coordinate system relative to the motion controller.\nThe pointer is similar to the controller, except that it is slightly forward and rotated down by the\npointer tilt angle. This is used to create more ergonomic comfort when pointing at things.\nThis should be used for any reticle / laser implementation.\n@return pointer position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetArmModelPointerPositionOffset", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetArmModelPointerPositionOffset_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetArmModelPointerTiltAngle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetArmModelPointerTiltAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Get the pointer tilt angle.\n\x09 *  @return degrees downward that the pointer tilts.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get the pointer tilt angle.\n@return degrees downward that the pointer tilts." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetArmModelPointerTiltAngle", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetArmModelPointerTiltAngle_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetBatteryCharging_Parms
		{
			EControllerHand Hand;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthVRControllerFunctionLibrary_eventGetBatteryCharging_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthVRControllerFunctionLibrary_eventGetBatteryCharging_Parms), &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetBatteryCharging_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Get whether the controller battery is currently charging.\n\x09 *  This may not be real time information and may be slow to be updated.\n\x09 *  @return true if the battery is charging.\n\x09 */" },
		{ "CPP_Default_Hand", "AnyHand" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get whether the controller battery is currently charging.\nThis may not be real time information and may be slow to be updated.\n@return true if the battery is charging." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetBatteryCharging", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetBatteryCharging_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetBatteryLevel_Parms
		{
			EControllerHand Hand;
			ESkyworthVRControllerBatteryLevel ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetBatteryLevel_Parms, ReturnValue), Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerBatteryLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetBatteryLevel_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Get the bucketed controller battery level.\n\x09 *  Note this is an approximate level described by enumeration, not a percent.\n\x09 *  @return the approximate battery level, or unknown if the level can not be determined.\n\x09 */" },
		{ "CPP_Default_Hand", "AnyHand" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get the bucketed controller battery level.\nNote this is an approximate level described by enumeration, not a percent.\n@return the approximate battery level, or unknown if the level can not be determined." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetBatteryLevel", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetBatteryLevel_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetControllerAlphaValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetControllerAlphaValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Get the current desired alpha value of the controller visual.\n\x09 *  This changes based on the FadeDistanceFromFace, and is used to prevent the controller\n\x09 *  From clipping awkwardly into the user's face.\n\x09 *  @return value between 0 and 1.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get the current desired alpha value of the controller visual.\nThis changes based on the FadeDistanceFromFace, and is used to prevent the controller\nFrom clipping awkwardly into the user's face.\n@return value between 0 and 1." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetControllerAlphaValue", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetControllerAlphaValue_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetFadeDistanceFromFace_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetFadeDistanceFromFace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Controller distance from the face after which the alpha value decreases (meters).\n\x09 *  @return fade distance from face in meters.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Controller distance from the face after which the alpha value decreases (meters).\n@return fade distance from face in meters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetFadeDistanceFromFace", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetFadeDistanceFromFace_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerAPIStatus_Parms
		{
			ESkyworthVRControllerAPIStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerAPIStatus_Parms, ReturnValue), Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerAPIStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/**\n\x09 * Get the GoogleVR Controller API status\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get the GoogleVR Controller API status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetSkyworthVRControllerAPIStatus", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerAPIStatus_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerEventManager_Parms
		{
			USkyworthVRControllerEventManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerEventManager_Parms, ReturnValue), Z_Construct_UClass_USkyworthVRControllerEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/**\n\x09 * Return a pointer to the UGoogleVRControllerEventManager to hook up GoogleVR Controller specific event.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Return a pointer to the UGoogleVRControllerEventManager to hook up GoogleVR Controller specific event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetSkyworthVRControllerEventManager", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerEventManager_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerHandedness_Parms
		{
			ESkyworthVRControllerHandedness ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerHandedness_Parms, ReturnValue), Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerHandedness, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/**\n\x09 * Get user's handedness preference from GVRSDK\n\x09 * @return A EGoogleVRControllerHandedness indicates the user's handedness preference in GoogleVR Settings.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get user's handedness preference from GVRSDK\n@return A EGoogleVRControllerHandedness indicates the user's handedness preference in GoogleVR Settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetSkyworthVRControllerHandedness", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerHandedness_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerOrientation_Parms
		{
			EControllerHand Hand;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerOrientation_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/**\n\x09 * This function return the orientation of the controller in unreal space.\n\x09 */" },
		{ "CPP_Default_Hand", "AnyHand" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "This function return the orientation of the controller in unreal space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetSkyworthVRControllerOrientation", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerOrientation_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerRawAccel_Parms
		{
			EControllerHand Hand;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerRawAccel_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerRawAccel_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/**\n\x09 * This function return the controller acceleration in gvr controller space.\n\x09 */" },
		{ "CPP_Default_Hand", "AnyHand" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "This function return the controller acceleration in gvr controller space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetSkyworthVRControllerRawAccel", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerRawAccel_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerRawGyro_Parms
		{
			EControllerHand Hand;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerRawGyro_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerRawGyro_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/**\n\x09 * This function return the controller angular velocity about each axis (positive means clockwise when sighting along axis) in gvr controller space.\n\x09 */" },
		{ "CPP_Default_Hand", "AnyHand" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "This function return the controller angular velocity about each axis (positive means clockwise when sighting along axis) in gvr controller space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetSkyworthVRControllerRawGyro", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerRawGyro_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerState_Parms
		{
			EControllerHand Hand;
			ESkyworthVRControllerState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerState_Parms, ReturnValue), Z_Construct_UEnum_SkyworthInput_ESkyworthVRControllerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerState_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/**\n\x09 * Get the GoogleVR Controller state\n\x09 */" },
		{ "CPP_Default_Hand", "AnyHand" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get the GoogleVR Controller state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetSkyworthVRControllerState", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetSkyworthVRControllerState_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetTooltipAlphaValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetTooltipAlphaValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Get the current desired alpha value of the tooltip visual.\n\x09 *  When the controller is farther than TooltipMinDistanceFromFace this becomes 0\n\x09 *  When the controller is closer than FadeDistanceFromFace this becomes 0\n\x09 *  This is used so that the tooltips are only visible when the controller is being held up.\n\x09 *  @return value between 0 and 1.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get the current desired alpha value of the tooltip visual.\nWhen the controller is farther than TooltipMinDistanceFromFace this becomes 0\nWhen the controller is closer than FadeDistanceFromFace this becomes 0\nThis is used so that the tooltips are only visible when the controller is being held up.\n@return value between 0 and 1." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetTooltipAlphaValue", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetTooltipAlphaValue_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetTooltipMaxAngleFromCamera_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetTooltipMaxAngleFromCamera_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** When the angle (degrees) between the controller and the head is larger than\n\x09 *  this value, the tooltip disappears.\n\x09 *  If the value is 180, then the tooltips are always shown.\n\x09 *  If the value is 90, the tooltips are only shown when they are facing the camera.\n\x09 *  @return tooltip max angle from camera in degrees.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "When the angle (degrees) between the controller and the head is larger than\nthis value, the tooltip disappears.\nIf the value is 180, then the tooltips are always shown.\nIf the value is 90, the tooltips are only shown when they are facing the camera.\n@return tooltip max angle from camera in degrees." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetTooltipMaxAngleFromCamera", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetTooltipMaxAngleFromCamera_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventGetTooltipMinDistanceFromFace_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventGetTooltipMinDistanceFromFace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Controller distance from the face after which the tooltips appear (meters).\n\x09 *  @return tooltip mininum distance from face in meters.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Controller distance from the face after which the tooltips appear (meters).\n@return tooltip mininum distance from face in meters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "GetTooltipMinDistanceFromFace", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventGetTooltipMinDistanceFromFace_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventIsArmModelEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthVRControllerFunctionLibrary_eventIsArmModelEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthVRControllerFunctionLibrary_eventIsArmModelEnabled_Parms), &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Determine if the arm model is enabled\n\x09 *  @return true if the arm model is enabled\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Determine if the arm model is enabled\n@return true if the arm model is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "IsArmModelEnabled", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventIsArmModelEnabled_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventSetArmModelAddedElbowDepth_Parms
		{
			float ElbowDepth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::NewProp_ElbowDepth = { "ElbowDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventSetArmModelAddedElbowDepth_Parms, ElbowDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::NewProp_ElbowDepth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Set the elbow depth used by the arm model in meters.\n\x09 *  Used in the mathematical model for calculating the controller position/rotation.\n\x09 *  @param HeightMeters - value to set\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Set the elbow depth used by the arm model in meters.\nUsed in the mathematical model for calculating the controller position/rotation.\n@param HeightMeters - value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "SetArmModelAddedElbowDepth", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventSetArmModelAddedElbowDepth_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventSetArmModelAddedElbowHeight_Parms
		{
			float ElbowHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::NewProp_ElbowHeight = { "ElbowHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventSetArmModelAddedElbowHeight_Parms, ElbowHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::NewProp_ElbowHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Set the elbow height used by the arm model in meters.\n\x09 *  Used in the mathematical model for calculating the controller position/rotation.\n\x09 *  @param HeightMeters - value to set\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Set the elbow height used by the arm model in meters.\nUsed in the mathematical model for calculating the controller position/rotation.\n@param HeightMeters - value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "SetArmModelAddedElbowHeight", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventSetArmModelAddedElbowHeight_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventSetArmModelEnabled_Parms
		{
			bool bArmModelEnabled;
		};
		static void NewProp_bArmModelEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bArmModelEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::NewProp_bArmModelEnabled_SetBit(void* Obj)
	{
		((SkyworthVRControllerFunctionLibrary_eventSetArmModelEnabled_Parms*)Obj)->bArmModelEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::NewProp_bArmModelEnabled = { "bArmModelEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthVRControllerFunctionLibrary_eventSetArmModelEnabled_Parms), &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::NewProp_bArmModelEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::NewProp_bArmModelEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Set the arm model enabled/disabled\n\x09 *  @param bArmModelEnabled - value to set\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Set the arm model enabled/disabled\n@param bArmModelEnabled - value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "SetArmModelEnabled", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventSetArmModelEnabled_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventSetArmModelIsLockedToHead_Parms
		{
			bool IsLockedToHead;
		};
		static void NewProp_IsLockedToHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLockedToHead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::NewProp_IsLockedToHead_SetBit(void* Obj)
	{
		((SkyworthVRControllerFunctionLibrary_eventSetArmModelIsLockedToHead_Parms*)Obj)->IsLockedToHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::NewProp_IsLockedToHead = { "IsLockedToHead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthVRControllerFunctionLibrary_eventSetArmModelIsLockedToHead_Parms), &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::NewProp_IsLockedToHead_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::NewProp_IsLockedToHead,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Set if the Arm Model will be locked to the head Pose.\n\x09* @param IsLockedToHead - value to set\n\x09*/" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Set if the Arm Model will be locked to the head Pose.\n@param IsLockedToHead - value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "SetArmModelIsLockedToHead", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventSetArmModelIsLockedToHead_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventSetArmModelPointerTiltAngle_Parms
		{
			float TiltAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::NewProp_TiltAngle = { "TiltAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventSetArmModelPointerTiltAngle_Parms, TiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::NewProp_TiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Set the pointer tilt angle.\n\x09 *  Defaults to 15 degrees, which is comfortable for most use cases.\n\x09 *  @param TiltAngle - value to set\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Set the pointer tilt angle.\nDefaults to 15 degrees, which is comfortable for most use cases.\n@param TiltAngle - value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "SetArmModelPointerTiltAngle", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventSetArmModelPointerTiltAngle_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventSetFadeDistanceFromFace_Parms
		{
			float DistanceFromFace;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromFace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::NewProp_DistanceFromFace = { "DistanceFromFace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventSetFadeDistanceFromFace_Parms, DistanceFromFace), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::NewProp_DistanceFromFace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Controller distance from the face after which the alpha value decreases (meters).\n\x09 *  @param DistanceFromFace - value to set\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Controller distance from the face after which the alpha value decreases (meters).\n@param DistanceFromFace - value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "SetFadeDistanceFromFace", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventSetFadeDistanceFromFace_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventSetTooltipMaxAngleFromCamera_Parms
		{
			int32 AngleFromCamera;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AngleFromCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::NewProp_AngleFromCamera = { "AngleFromCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventSetTooltipMaxAngleFromCamera_Parms, AngleFromCamera), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::NewProp_AngleFromCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** When the angle (degrees) between the controller and the head is larger than\n\x09 *  this value, the tooltip disappears.\n\x09 *  If the value is 180, then the tooltips are always shown.\n\x09 *  If the value is 90, the tooltips are only shown when they are facing the camera.\n\x09 *  @param AngleFromCamera - value to set\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "When the angle (degrees) between the controller and the head is larger than\nthis value, the tooltip disappears.\nIf the value is 180, then the tooltips are always shown.\nIf the value is 90, the tooltips are only shown when they are facing the camera.\n@param AngleFromCamera - value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "SetTooltipMaxAngleFromCamera", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventSetTooltipMaxAngleFromCamera_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventSetTooltipMinDistanceFromFace_Parms
		{
			float DistanceFromFace;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromFace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::NewProp_DistanceFromFace = { "DistanceFromFace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRControllerFunctionLibrary_eventSetTooltipMinDistanceFromFace_Parms, DistanceFromFace), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::NewProp_DistanceFromFace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Controller distance from the face after which the tooltips appear (meters).\n\x09 *  @param DistanceFromFace - value to set\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Controller distance from the face after which the tooltips appear (meters).\n@param DistanceFromFace - value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "SetTooltipMinDistanceFromFace", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventSetTooltipMinDistanceFromFace_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventSetWillArmModelUseAccelerometer_Parms
		{
			bool UseAccelerometer;
		};
		static void NewProp_UseAccelerometer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAccelerometer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::NewProp_UseAccelerometer_SetBit(void* Obj)
	{
		((SkyworthVRControllerFunctionLibrary_eventSetWillArmModelUseAccelerometer_Parms*)Obj)->UseAccelerometer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::NewProp_UseAccelerometer = { "UseAccelerometer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthVRControllerFunctionLibrary_eventSetWillArmModelUseAccelerometer_Parms), &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::NewProp_UseAccelerometer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::NewProp_UseAccelerometer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Set if the arm model will use accelerometer data\n\x09 *  If this is turned on, then the arm model will estimate the position of the controller in space\n\x09 *  using accelerometer data. This is useful when trying to make the player feel like they are moving\n\x09 *  around a physical object. Not as useful when just interacting with UI.\n\x09 *  @param UseAccelerometer - value to set\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Set if the arm model will use accelerometer data\nIf this is turned on, then the arm model will estimate the position of the controller in space\nusing accelerometer data. This is useful when trying to make the player feel like they are moving\naround a physical object. Not as useful when just interacting with UI.\n@param UseAccelerometer - value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "SetWillArmModelUseAccelerometer", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventSetWillArmModelUseAccelerometer_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics
	{
		struct SkyworthVRControllerFunctionLibrary_eventWillArmModelUseAccelerometer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthVRControllerFunctionLibrary_eventWillArmModelUseAccelerometer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthVRControllerFunctionLibrary_eventWillArmModelUseAccelerometer_Parms), &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRController" },
		{ "Comment", "/** Get if the arm model will use accelerometer data\n\x09 *  If this is turned on, then the arm model will estimate the position of the controller in space\n\x09 *  using accelerometer data. This is useful when trying to make the player feel like they are moving\n\x09 *  around a physical object. Not as useful when just interacting with UI.\n\x09 *  @return true if accelerometer use is enabled\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "Get if the arm model will use accelerometer data\nIf this is turned on, then the arm model will estimate the position of the controller in space\nusing accelerometer data. This is useful when trying to make the player feel like they are moving\naround a physical object. Not as useful when just interacting with UI.\n@return true if accelerometer use is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, nullptr, "WillArmModelUseAccelerometer", nullptr, nullptr, sizeof(SkyworthVRControllerFunctionLibrary_eventWillArmModelUseAccelerometer_Parms), Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_NoRegister()
	{
		return USkyworthVRControllerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowDepth, "GetArmModelAddedElbowDepth" }, // 16657032
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelAddedElbowHeight, "GetArmModelAddedElbowHeight" }, // 511317349
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelIsLockedToHead, "GetArmModelIsLockedToHead" }, // 86045481
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerPositionOffset, "GetArmModelPointerPositionOffset" }, // 3252094453
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetArmModelPointerTiltAngle, "GetArmModelPointerTiltAngle" }, // 2957380397
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryCharging, "GetBatteryCharging" }, // 2581384674
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetBatteryLevel, "GetBatteryLevel" }, // 176166675
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetControllerAlphaValue, "GetControllerAlphaValue" }, // 1332618551
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetFadeDistanceFromFace, "GetFadeDistanceFromFace" }, // 2065918446
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerAPIStatus, "GetSkyworthVRControllerAPIStatus" }, // 2484973022
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerEventManager, "GetSkyworthVRControllerEventManager" }, // 207857583
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerHandedness, "GetSkyworthVRControllerHandedness" }, // 1111330797
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerOrientation, "GetSkyworthVRControllerOrientation" }, // 3635111055
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawAccel, "GetSkyworthVRControllerRawAccel" }, // 1514980928
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerRawGyro, "GetSkyworthVRControllerRawGyro" }, // 3285468597
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetSkyworthVRControllerState, "GetSkyworthVRControllerState" }, // 1520296746
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipAlphaValue, "GetTooltipAlphaValue" }, // 950242082
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMaxAngleFromCamera, "GetTooltipMaxAngleFromCamera" }, // 3378001819
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_GetTooltipMinDistanceFromFace, "GetTooltipMinDistanceFromFace" }, // 1301560656
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_IsArmModelEnabled, "IsArmModelEnabled" }, // 365716732
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowDepth, "SetArmModelAddedElbowDepth" }, // 1660573365
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelAddedElbowHeight, "SetArmModelAddedElbowHeight" }, // 1636590029
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelEnabled, "SetArmModelEnabled" }, // 1289137072
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelIsLockedToHead, "SetArmModelIsLockedToHead" }, // 2056101633
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetArmModelPointerTiltAngle, "SetArmModelPointerTiltAngle" }, // 1811922963
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetFadeDistanceFromFace, "SetFadeDistanceFromFace" }, // 2039779348
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMaxAngleFromCamera, "SetTooltipMaxAngleFromCamera" }, // 993962708
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetTooltipMinDistanceFromFace, "SetTooltipMinDistanceFromFace" }, // 2976966820
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_SetWillArmModelUseAccelerometer, "SetWillArmModelUseAccelerometer" }, // 1711001605
		{ &Z_Construct_UFunction_USkyworthVRControllerFunctionLibrary_WillArmModelUseAccelerometer, "WillArmModelUseAccelerometer" }, // 3828194765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GoogleVRController Extensions Function Library\n */" },
		{ "IncludePath", "SkyworthVRControllerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/SkyworthVRControllerFunctionLibrary.h" },
		{ "ToolTip", "GoogleVRController Extensions Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthVRControllerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics::ClassParams = {
		&USkyworthVRControllerFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRControllerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRControllerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRControllerFunctionLibrary, 348880605);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRControllerFunctionLibrary>()
	{
		return USkyworthVRControllerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRControllerFunctionLibrary(Z_Construct_UClass_USkyworthVRControllerFunctionLibrary, &USkyworthVRControllerFunctionLibrary::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRControllerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRControllerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
