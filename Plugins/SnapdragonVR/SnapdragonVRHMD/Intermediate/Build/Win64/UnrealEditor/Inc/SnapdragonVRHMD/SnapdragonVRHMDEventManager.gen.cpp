// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnapdragonVRHMD/Classes/SnapdragonVRHMDEventManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapdragonVRHMDEventManager() {}
// Cross Module References
	SNAPDRAGONVRHMD_API UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType();
	UPackage* Z_Construct_UPackage__Script_SnapdragonVRHMD();
	SNAPDRAGONVRHMD_API UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType();
	SNAPDRAGONVRHMD_API UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType();
	SNAPDRAGONVRHMD_API UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel();
	SNAPDRAGONVRHMD_API UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UClass* Z_Construct_UClass_USnapdragonVRHMDEventManager_NoRegister();
	SNAPDRAGONVRHMD_API UClass* Z_Construct_UClass_USnapdragonVRHMDEventManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapdragonVRSdkServiceEventType;
	static UEnum* ESnapdragonVRSdkServiceEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRSdkServiceEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapdragonVRSdkServiceEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType, Z_Construct_UPackage__Script_SnapdragonVRHMD(), TEXT("ESnapdragonVRSdkServiceEventType"));
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRSdkServiceEventType.OuterSingleton;
	}
	template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRSdkServiceEventType>()
	{
		return ESnapdragonVRSdkServiceEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType_Statics::Enumerators[] = {
		{ "ESnapdragonVRSdkServiceEventType::EventSdkServiceStarting", (int64)ESnapdragonVRSdkServiceEventType::EventSdkServiceStarting },
		{ "ESnapdragonVRSdkServiceEventType::EventSdkServiceStarted", (int64)ESnapdragonVRSdkServiceEventType::EventSdkServiceStarted },
		{ "ESnapdragonVRSdkServiceEventType::EventSdkServiceStopped", (int64)ESnapdragonVRSdkServiceEventType::EventSdkServiceStopped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EventSdkServiceStarted.Name", "ESnapdragonVRSdkServiceEventType::EventSdkServiceStarted" },
		{ "EventSdkServiceStarting.Name", "ESnapdragonVRSdkServiceEventType::EventSdkServiceStarting" },
		{ "EventSdkServiceStopped.Name", "ESnapdragonVRSdkServiceEventType::EventSdkServiceStopped" },
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD,
		nullptr,
		"ESnapdragonVRSdkServiceEventType",
		"ESnapdragonVRSdkServiceEventType",
		Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRSdkServiceEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapdragonVRSdkServiceEventType.InnerSingleton, Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRSdkServiceEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapdragonVRModeEventType;
	static UEnum* ESnapdragonVRModeEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRModeEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapdragonVRModeEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType, Z_Construct_UPackage__Script_SnapdragonVRHMD(), TEXT("ESnapdragonVRModeEventType"));
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRModeEventType.OuterSingleton;
	}
	template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRModeEventType>()
	{
		return ESnapdragonVRModeEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType_Statics::Enumerators[] = {
		{ "ESnapdragonVRModeEventType::EventVrModeStarted", (int64)ESnapdragonVRModeEventType::EventVrModeStarted },
		{ "ESnapdragonVRModeEventType::EventVrModeStopping", (int64)ESnapdragonVRModeEventType::EventVrModeStopping },
		{ "ESnapdragonVRModeEventType::EventVrModeStopped", (int64)ESnapdragonVRModeEventType::EventVrModeStopped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EventVrModeStarted.Name", "ESnapdragonVRModeEventType::EventVrModeStarted" },
		{ "EventVrModeStopped.Name", "ESnapdragonVRModeEventType::EventVrModeStopped" },
		{ "EventVrModeStopping.Name", "ESnapdragonVRModeEventType::EventVrModeStopping" },
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD,
		nullptr,
		"ESnapdragonVRModeEventType",
		"ESnapdragonVRModeEventType",
		Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRModeEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapdragonVRModeEventType.InnerSingleton, Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRModeEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapdragonVRSensorEventType;
	static UEnum* ESnapdragonVRSensorEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRSensorEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapdragonVRSensorEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType, Z_Construct_UPackage__Script_SnapdragonVRHMD(), TEXT("ESnapdragonVRSensorEventType"));
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRSensorEventType.OuterSingleton;
	}
	template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRSensorEventType>()
	{
		return ESnapdragonVRSensorEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType_Statics::Enumerators[] = {
		{ "ESnapdragonVRSensorEventType::EventSensorError", (int64)ESnapdragonVRSensorEventType::EventSensorError },
		{ "ESnapdragonVRSensorEventType::EventMagnometerUncalibrated", (int64)ESnapdragonVRSensorEventType::EventMagnometerUncalibrated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EventMagnometerUncalibrated.Name", "ESnapdragonVRSensorEventType::EventMagnometerUncalibrated" },
		{ "EventSensorError.Name", "ESnapdragonVRSensorEventType::EventSensorError" },
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD,
		nullptr,
		"ESnapdragonVRSensorEventType",
		"ESnapdragonVRSensorEventType",
		Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRSensorEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapdragonVRSensorEventType.InnerSingleton, Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRSensorEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapdragonVRThermalLevel;
	static UEnum* ESnapdragonVRThermalLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRThermalLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapdragonVRThermalLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel, Z_Construct_UPackage__Script_SnapdragonVRHMD(), TEXT("ESnapdragonVRThermalLevel"));
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRThermalLevel.OuterSingleton;
	}
	template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRThermalLevel>()
	{
		return ESnapdragonVRThermalLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel_Statics::Enumerators[] = {
		{ "ESnapdragonVRThermalLevel::Safe", (int64)ESnapdragonVRThermalLevel::Safe },
		{ "ESnapdragonVRThermalLevel::Level1", (int64)ESnapdragonVRThermalLevel::Level1 },
		{ "ESnapdragonVRThermalLevel::Level2", (int64)ESnapdragonVRThermalLevel::Level2 },
		{ "ESnapdragonVRThermalLevel::Level3", (int64)ESnapdragonVRThermalLevel::Level3 },
		{ "ESnapdragonVRThermalLevel::Critical", (int64)ESnapdragonVRThermalLevel::Critical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Critical.Name", "ESnapdragonVRThermalLevel::Critical" },
		{ "Level1.Name", "ESnapdragonVRThermalLevel::Level1" },
		{ "Level2.Name", "ESnapdragonVRThermalLevel::Level2" },
		{ "Level3.Name", "ESnapdragonVRThermalLevel::Level3" },
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
		{ "Safe.Name", "ESnapdragonVRThermalLevel::Safe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD,
		nullptr,
		"ESnapdragonVRThermalLevel",
		"ESnapdragonVRThermalLevel",
		Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRThermalLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapdragonVRThermalLevel.InnerSingleton, Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRThermalLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapdragonVRThermalZone;
	static UEnum* ESnapdragonVRThermalZone_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRThermalZone.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapdragonVRThermalZone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone, Z_Construct_UPackage__Script_SnapdragonVRHMD(), TEXT("ESnapdragonVRThermalZone"));
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRThermalZone.OuterSingleton;
	}
	template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRThermalZone>()
	{
		return ESnapdragonVRThermalZone_StaticEnum();
	}
	struct Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone_Statics::Enumerators[] = {
		{ "ESnapdragonVRThermalZone::Cpu", (int64)ESnapdragonVRThermalZone::Cpu },
		{ "ESnapdragonVRThermalZone::Gpu", (int64)ESnapdragonVRThermalZone::Gpu },
		{ "ESnapdragonVRThermalZone::Skin", (int64)ESnapdragonVRThermalZone::Skin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cpu.Name", "ESnapdragonVRThermalZone::Cpu" },
		{ "Gpu.Name", "ESnapdragonVRThermalZone::Gpu" },
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
		{ "Skin.Name", "ESnapdragonVRThermalZone::Skin" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD,
		nullptr,
		"ESnapdragonVRThermalZone",
		"ESnapdragonVRThermalZone",
		Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRThermalZone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapdragonVRThermalZone.InnerSingleton, Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRThermalZone.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics
	{
		struct _Script_SnapdragonVRHMD_eventSnapdragonVRSdkServiceDelegate_Parms
		{
			ESnapdragonVRSdkServiceEventType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRHMD_eventSnapdragonVRSdkServiceDelegate_Parms, Type), Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSdkServiceEventType, METADATA_PARAMS(nullptr, 0) }; // 2894532824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD, nullptr, "SnapdragonVRSdkServiceDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::_Script_SnapdragonVRHMD_eventSnapdragonVRSdkServiceDelegate_Parms), Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics
	{
		struct _Script_SnapdragonVRHMD_eventSnapdragonVRThermalDelegate_Parms
		{
			ESnapdragonVRThermalZone Zone;
			ESnapdragonVRThermalLevel Level;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Zone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Zone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Level_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::NewProp_Zone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRHMD_eventSnapdragonVRThermalDelegate_Parms, Zone), Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalZone, METADATA_PARAMS(nullptr, 0) }; // 1968072295
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::NewProp_Level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRHMD_eventSnapdragonVRThermalDelegate_Parms, Level), Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRThermalLevel, METADATA_PARAMS(nullptr, 0) }; // 3299468360
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::NewProp_Zone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::NewProp_Zone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::NewProp_Level_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD, nullptr, "SnapdragonVRThermalDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::_Script_SnapdragonVRHMD_eventSnapdragonVRThermalDelegate_Parms), Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics
	{
		struct _Script_SnapdragonVRHMD_eventSnapdragonVRModeDelegate_Parms
		{
			ESnapdragonVRModeEventType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRHMD_eventSnapdragonVRModeDelegate_Parms, Type), Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRModeEventType, METADATA_PARAMS(nullptr, 0) }; // 3183645249
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD, nullptr, "SnapdragonVRModeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::_Script_SnapdragonVRHMD_eventSnapdragonVRModeDelegate_Parms), Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics
	{
		struct _Script_SnapdragonVRHMD_eventSnapdragonVRSensorDelegate_Parms
		{
			ESnapdragonVRSensorEventType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRHMD_eventSnapdragonVRSensorDelegate_Parms, Type), Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRSensorEventType, METADATA_PARAMS(nullptr, 0) }; // 3656000436
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD, nullptr, "SnapdragonVRSensorDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::_Script_SnapdragonVRHMD_eventSnapdragonVRSensorDelegate_Parms), Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USnapdragonVRHMDEventManager::StaticRegisterNativesUSnapdragonVRHMDEventManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapdragonVRHMDEventManager);
	UClass* Z_Construct_UClass_USnapdragonVRHMDEventManager_NoRegister()
	{
		return USnapdragonVRHMDEventManager::StaticClass();
	}
	struct Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSnapdragonVRSdkServiceDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSnapdragonVRSdkServiceDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSnapdragonVRThermalDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSnapdragonVRThermalDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSnapdragonVRModeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSnapdragonVRModeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSnapdragonVRSensorDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSnapdragonVRSensorDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SnapdragonVRHMD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* SnapdragonVRHMD Extensions Function Library\n*/" },
		{ "IncludePath", "SnapdragonVRHMDEventManager.h" },
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
		{ "ToolTip", "SnapdragonVRHMD Extensions Function Library" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSdkServiceDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSdkServiceDelegate = { "OnSnapdragonVRSdkServiceDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapdragonVRHMDEventManager, OnSnapdragonVRSdkServiceDelegate), Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSdkServiceDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSdkServiceDelegate_MetaData)) }; // 2226083475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRThermalDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRThermalDelegate = { "OnSnapdragonVRThermalDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapdragonVRHMDEventManager, OnSnapdragonVRThermalDelegate), Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRThermalDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRThermalDelegate_MetaData)) }; // 2497276283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRModeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRModeDelegate = { "OnSnapdragonVRModeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapdragonVRHMDEventManager, OnSnapdragonVRModeDelegate), Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRModeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRModeDelegate_MetaData)) }; // 1444165916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSensorDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRHMDEventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSensorDelegate = { "OnSnapdragonVRSensorDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapdragonVRHMDEventManager, OnSnapdragonVRSensorDelegate), Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSensorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSensorDelegate_MetaData)) }; // 3917337902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSdkServiceDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRThermalDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRModeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::NewProp_OnSnapdragonVRSensorDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapdragonVRHMDEventManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::ClassParams = {
		&USnapdragonVRHMDEventManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapdragonVRHMDEventManager()
	{
		if (!Z_Registration_Info_UClass_USnapdragonVRHMDEventManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapdragonVRHMDEventManager.OuterSingleton, Z_Construct_UClass_USnapdragonVRHMDEventManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapdragonVRHMDEventManager.OuterSingleton;
	}
	template<> SNAPDRAGONVRHMD_API UClass* StaticClass<USnapdragonVRHMDEventManager>()
	{
		return USnapdragonVRHMDEventManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapdragonVRHMDEventManager);
	struct Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_Statics::EnumInfo[] = {
		{ ESnapdragonVRSdkServiceEventType_StaticEnum, TEXT("ESnapdragonVRSdkServiceEventType"), &Z_Registration_Info_UEnum_ESnapdragonVRSdkServiceEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2894532824U) },
		{ ESnapdragonVRModeEventType_StaticEnum, TEXT("ESnapdragonVRModeEventType"), &Z_Registration_Info_UEnum_ESnapdragonVRModeEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3183645249U) },
		{ ESnapdragonVRSensorEventType_StaticEnum, TEXT("ESnapdragonVRSensorEventType"), &Z_Registration_Info_UEnum_ESnapdragonVRSensorEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3656000436U) },
		{ ESnapdragonVRThermalLevel_StaticEnum, TEXT("ESnapdragonVRThermalLevel"), &Z_Registration_Info_UEnum_ESnapdragonVRThermalLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3299468360U) },
		{ ESnapdragonVRThermalZone_StaticEnum, TEXT("ESnapdragonVRThermalZone"), &Z_Registration_Info_UEnum_ESnapdragonVRThermalZone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1968072295U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapdragonVRHMDEventManager, USnapdragonVRHMDEventManager::StaticClass, TEXT("USnapdragonVRHMDEventManager"), &Z_Registration_Info_UClass_USnapdragonVRHMDEventManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapdragonVRHMDEventManager), 1481026474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_9803242(TEXT("/Script/SnapdragonVRHMD"),
		Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Classes_SnapdragonVRHMDEventManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
