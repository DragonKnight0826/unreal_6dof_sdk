// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthHMD/Public/SkyworthFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthFunctionLibrary() {}
// Cross Module References
	SKYWORTHHMD_API UEnum* Z_Construct_UEnum_SkyworthHMD_FSBoundaryType();
	UPackage* Z_Construct_UPackage__Script_SkyworthHMD();
	SKYWORTHHMD_API UEnum* Z_Construct_UEnum_SkyworthHMD_FSFixedFoveatedRenderingLevel();
	SKYWORTHHMD_API UEnum* Z_Construct_UEnum_SkyworthHMD_FSTrackedDeviceType();
	SKYWORTHHMD_API UScriptStruct* Z_Construct_UScriptStruct_FSGuardianTestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SKYWORTHHMD_API UScriptStruct* Z_Construct_UScriptStruct_FSHmdUserProfile();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SKYWORTHHMD_API UScriptStruct* Z_Construct_UScriptStruct_FSHmdUserProfileField();
	SKYWORTHHMD_API UClass* Z_Construct_UClass_USkyworthFunctionLibrary_NoRegister();
	SKYWORTHHMD_API UClass* Z_Construct_UClass_USkyworthFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* FSBoundaryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SkyworthHMD_FSBoundaryType, Z_Construct_UPackage__Script_SkyworthHMD(), TEXT("FSBoundaryType"));
		}
		return Singleton;
	}
	template<> SKYWORTHHMD_API UEnum* StaticEnum<FSBoundaryType>()
	{
		return FSBoundaryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FSBoundaryType(FSBoundaryType_StaticEnum, TEXT("/Script/SkyworthHMD"), TEXT("FSBoundaryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SkyworthHMD_FSBoundaryType_Hash() { return 4036481073U; }
	UEnum* Z_Construct_UEnum_SkyworthHMD_FSBoundaryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FSBoundaryType"), 0, Get_Z_Construct_UEnum_SkyworthHMD_FSBoundaryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FSBoundaryType::Boundary_Outer", (int64)FSBoundaryType::Boundary_Outer },
				{ "FSBoundaryType::Boundary_PlayArea", (int64)FSBoundaryType::Boundary_PlayArea },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boundary_Outer.DisplayName", "Outer Boundary" },
				{ "Boundary_Outer.Name", "FSBoundaryType::Boundary_Outer" },
				{ "Boundary_PlayArea.DisplayName", "Play Area" },
				{ "Boundary_PlayArea.Name", "FSBoundaryType::Boundary_PlayArea" },
				{ "Comment", "/* Guardian boundary types*/" },
				{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
				{ "ToolTip", "Guardian boundary types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SkyworthHMD,
				nullptr,
				"FSBoundaryType",
				"FSBoundaryType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* FSFixedFoveatedRenderingLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SkyworthHMD_FSFixedFoveatedRenderingLevel, Z_Construct_UPackage__Script_SkyworthHMD(), TEXT("FSFixedFoveatedRenderingLevel"));
		}
		return Singleton;
	}
	template<> SKYWORTHHMD_API UEnum* StaticEnum<FSFixedFoveatedRenderingLevel>()
	{
		return FSFixedFoveatedRenderingLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FSFixedFoveatedRenderingLevel(FSFixedFoveatedRenderingLevel_StaticEnum, TEXT("/Script/SkyworthHMD"), TEXT("FSFixedFoveatedRenderingLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SkyworthHMD_FSFixedFoveatedRenderingLevel_Hash() { return 4085651587U; }
	UEnum* Z_Construct_UEnum_SkyworthHMD_FSFixedFoveatedRenderingLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FSFixedFoveatedRenderingLevel"), 0, Get_Z_Construct_UEnum_SkyworthHMD_FSFixedFoveatedRenderingLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FSFixedFoveatedRenderingLevel::FFR_Off", (int64)FSFixedFoveatedRenderingLevel::FFR_Off },
				{ "FSFixedFoveatedRenderingLevel::FFR_Low", (int64)FSFixedFoveatedRenderingLevel::FFR_Low },
				{ "FSFixedFoveatedRenderingLevel::FFR_Medium", (int64)FSFixedFoveatedRenderingLevel::FFR_Medium },
				{ "FSFixedFoveatedRenderingLevel::FFR_High", (int64)FSFixedFoveatedRenderingLevel::FFR_High },
				{ "FSFixedFoveatedRenderingLevel::FFR_HighTop", (int64)FSFixedFoveatedRenderingLevel::FFR_HighTop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FFR_High.Name", "FSFixedFoveatedRenderingLevel::FFR_High" },
				{ "FFR_HighTop.Comment", "// High foveation setting with more detail toward the bottom of the view and more foveation near the top (Same as High on Oculus Go)\n" },
				{ "FFR_HighTop.Name", "FSFixedFoveatedRenderingLevel::FFR_HighTop" },
				{ "FFR_HighTop.ToolTip", "High foveation setting with more detail toward the bottom of the view and more foveation near the top (Same as High on Oculus Go)" },
				{ "FFR_Low.Name", "FSFixedFoveatedRenderingLevel::FFR_Low" },
				{ "FFR_Medium.Name", "FSFixedFoveatedRenderingLevel::FFR_Medium" },
				{ "FFR_Off.Name", "FSFixedFoveatedRenderingLevel::FFR_Off" },
				{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SkyworthHMD,
				nullptr,
				"FSFixedFoveatedRenderingLevel",
				"FSFixedFoveatedRenderingLevel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* FSTrackedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SkyworthHMD_FSTrackedDeviceType, Z_Construct_UPackage__Script_SkyworthHMD(), TEXT("FSTrackedDeviceType"));
		}
		return Singleton;
	}
	template<> SKYWORTHHMD_API UEnum* StaticEnum<FSTrackedDeviceType>()
	{
		return FSTrackedDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FSTrackedDeviceType(FSTrackedDeviceType_StaticEnum, TEXT("/Script/SkyworthHMD"), TEXT("FSTrackedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SkyworthHMD_FSTrackedDeviceType_Hash() { return 2456407237U; }
	UEnum* Z_Construct_UEnum_SkyworthHMD_FSTrackedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FSTrackedDeviceType"), 0, Get_Z_Construct_UEnum_SkyworthHMD_FSTrackedDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FSTrackedDeviceType::None", (int64)FSTrackedDeviceType::None },
				{ "FSTrackedDeviceType::HMD", (int64)FSTrackedDeviceType::HMD },
				{ "FSTrackedDeviceType::LTouch", (int64)FSTrackedDeviceType::LTouch },
				{ "FSTrackedDeviceType::RTouch", (int64)FSTrackedDeviceType::RTouch },
				{ "FSTrackedDeviceType::Touch", (int64)FSTrackedDeviceType::Touch },
				{ "FSTrackedDeviceType::DeviceObjectZero", (int64)FSTrackedDeviceType::DeviceObjectZero },
				{ "FSTrackedDeviceType::All", (int64)FSTrackedDeviceType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.DisplayName", "All Devices" },
				{ "All.Name", "FSTrackedDeviceType::All" },
				{ "BlueprintType", "true" },
				{ "Comment", "/* Tracked device types corresponding to ovrTrackedDeviceType enum*/" },
				{ "DeviceObjectZero.DisplayName", "DeviceObject Zero" },
				{ "DeviceObjectZero.Name", "FSTrackedDeviceType::DeviceObjectZero" },
				{ "HMD.DisplayName", "HMD" },
				{ "HMD.Name", "FSTrackedDeviceType::HMD" },
				{ "LTouch.DisplayName", "Left Hand" },
				{ "LTouch.Name", "FSTrackedDeviceType::LTouch" },
				{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
				{ "None.DisplayName", "No Devices" },
				{ "None.Name", "FSTrackedDeviceType::None" },
				{ "RTouch.DisplayName", "Right Hand" },
				{ "RTouch.Name", "FSTrackedDeviceType::RTouch" },
				{ "ToolTip", "Tracked device types corresponding to ovrTrackedDeviceType enum" },
				{ "Touch.DisplayName", "All Hands" },
				{ "Touch.Name", "FSTrackedDeviceType::Touch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SkyworthHMD,
				nullptr,
				"FSTrackedDeviceType",
				"FSTrackedDeviceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSGuardianTestResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SKYWORTHHMD_API uint32 Get_Z_Construct_UScriptStruct_FSGuardianTestResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGuardianTestResult, Z_Construct_UPackage__Script_SkyworthHMD(), TEXT("SGuardianTestResult"), sizeof(FSGuardianTestResult), Get_Z_Construct_UScriptStruct_FSGuardianTestResult_Hash());
	}
	return Singleton;
}
template<> SKYWORTHHMD_API UScriptStruct* StaticStruct<FSGuardianTestResult>()
{
	return FSGuardianTestResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSGuardianTestResult(FSGuardianTestResult::StaticStruct, TEXT("/Script/SkyworthHMD"), TEXT("SGuardianTestResult"), false, nullptr, nullptr);
static struct FScriptStruct_SkyworthHMD_StaticRegisterNativesFSGuardianTestResult
{
	FScriptStruct_SkyworthHMD_StaticRegisterNativesFSGuardianTestResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SGuardianTestResult")),new UScriptStruct::TCppStructOps<FSGuardianTestResult>);
	}
} ScriptStruct_SkyworthHMD_StaticRegisterNativesFSGuardianTestResult;
	struct Z_Construct_UScriptStruct_FSGuardianTestResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTriggering_MetaData[];
#endif
		static void NewProp_IsTriggering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTriggering;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosestDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClosestDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosestPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosestPointNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClosestPointNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Information about relationships between a triggered boundary (EBoundaryType::Boundary_Outer or\n* EBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space.\n*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "* Information about relationships between a triggered boundary (EBoundaryType::Boundary_Outer or\n* EBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGuardianTestResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_IsTriggering_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Is there a triggering interaction between the device/point and specified boundary? */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Is there a triggering interaction between the device/point and specified boundary?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_IsTriggering_SetBit(void* Obj)
	{
		((FSGuardianTestResult*)Obj)->IsTriggering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_IsTriggering = { "IsTriggering", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSGuardianTestResult), &Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_IsTriggering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_IsTriggering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_IsTriggering_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Device type triggering boundary (ETrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device) */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Device type triggering boundary (ETrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGuardianTestResult, DeviceType), Z_Construct_UEnum_SkyworthHMD_FSTrackedDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_DeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_DeviceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Distance of device/point to surface of boundary specified by BoundaryType */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Distance of device/point to surface of boundary specified by BoundaryType" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestDistance = { "ClosestDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGuardianTestResult, ClosestDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Closest point on surface corresponding to specified boundary */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Closest point on surface corresponding to specified boundary" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGuardianTestResult, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Normal of closest point */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Normal of closest point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPointNormal = { "ClosestPointNormal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSGuardianTestResult, ClosestPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_IsTriggering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::NewProp_ClosestPointNormal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthHMD,
		nullptr,
		&NewStructOps,
		"SGuardianTestResult",
		sizeof(FSGuardianTestResult),
		alignof(FSGuardianTestResult),
		Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSGuardianTestResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSGuardianTestResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SGuardianTestResult"), sizeof(FSGuardianTestResult), Get_Z_Construct_UScriptStruct_FSGuardianTestResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSGuardianTestResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSGuardianTestResult_Hash() { return 2888366126U; }
class UScriptStruct* FSHmdUserProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SKYWORTHHMD_API uint32 Get_Z_Construct_UScriptStruct_FSHmdUserProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSHmdUserProfile, Z_Construct_UPackage__Script_SkyworthHMD(), TEXT("SHmdUserProfile"), sizeof(FSHmdUserProfile), Get_Z_Construct_UScriptStruct_FSHmdUserProfile_Hash());
	}
	return Singleton;
}
template<> SKYWORTHHMD_API UScriptStruct* StaticStruct<FSHmdUserProfile>()
{
	return FSHmdUserProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSHmdUserProfile(FSHmdUserProfile::StaticStruct, TEXT("/Script/SkyworthHMD"), TEXT("SHmdUserProfile"), false, nullptr, nullptr);
static struct FScriptStruct_SkyworthHMD_StaticRegisterNativesFSHmdUserProfile
{
	FScriptStruct_SkyworthHMD_StaticRegisterNativesFSHmdUserProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SHmdUserProfile")),new UScriptStruct::TCppStructOps<FSHmdUserProfile>);
	}
} ScriptStruct_SkyworthHMD_StaticRegisterNativesFSHmdUserProfile;
	struct Z_Construct_UScriptStruct_FSHmdUserProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPD_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IPD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckToEyeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckToEyeDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraFields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraFields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSHmdUserProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Name of the user's profile. */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Name of the user's profile." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSHmdUserProfile, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Gender of the user (\"male\", \"female\", etc). */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Gender of the user (\"male\", \"female\", etc)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSHmdUserProfile, Gender), METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Height of the player, in meters */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Height of the player, in meters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_PlayerHeight = { "PlayerHeight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSHmdUserProfile, PlayerHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_EyeHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Height of the player, in meters */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Height of the player, in meters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_EyeHeight = { "EyeHeight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSHmdUserProfile, EyeHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_EyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_EyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_IPD_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Interpupillary distance of the player, in meters */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Interpupillary distance of the player, in meters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_IPD = { "IPD", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSHmdUserProfile, IPD), METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_IPD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_IPD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Neck-to-eye distance, in meters. X - horizontal, Y - vertical. */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Neck-to-eye distance, in meters. X - horizontal, Y - vertical." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_NeckToEyeDistance = { "NeckToEyeDistance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSHmdUserProfile, NeckToEyeDistance), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_ExtraFields_Inner = { "ExtraFields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSHmdUserProfileField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_ExtraFields_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_ExtraFields = { "ExtraFields", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSHmdUserProfile, ExtraFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_ExtraFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_ExtraFields_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_PlayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_EyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_IPD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_NeckToEyeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_ExtraFields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::NewProp_ExtraFields,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthHMD,
		nullptr,
		&NewStructOps,
		"SHmdUserProfile",
		sizeof(FSHmdUserProfile),
		alignof(FSHmdUserProfile),
		Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSHmdUserProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSHmdUserProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SHmdUserProfile"), sizeof(FSHmdUserProfile), Get_Z_Construct_UScriptStruct_FSHmdUserProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSHmdUserProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSHmdUserProfile_Hash() { return 607843411U; }
class UScriptStruct* FSHmdUserProfileField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SKYWORTHHMD_API uint32 Get_Z_Construct_UScriptStruct_FSHmdUserProfileField_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSHmdUserProfileField, Z_Construct_UPackage__Script_SkyworthHMD(), TEXT("SHmdUserProfileField"), sizeof(FSHmdUserProfileField), Get_Z_Construct_UScriptStruct_FSHmdUserProfileField_Hash());
	}
	return Singleton;
}
template<> SKYWORTHHMD_API UScriptStruct* StaticStruct<FSHmdUserProfileField>()
{
	return FSHmdUserProfileField::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSHmdUserProfileField(FSHmdUserProfileField::StaticStruct, TEXT("/Script/SkyworthHMD"), TEXT("SHmdUserProfileField"), false, nullptr, nullptr);
static struct FScriptStruct_SkyworthHMD_StaticRegisterNativesFSHmdUserProfileField
{
	FScriptStruct_SkyworthHMD_StaticRegisterNativesFSHmdUserProfileField()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SHmdUserProfileField")),new UScriptStruct::TCppStructOps<FSHmdUserProfileField>);
	}
} ScriptStruct_SkyworthHMD_StaticRegisterNativesFSHmdUserProfileField;
	struct Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data Field" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSHmdUserProfileField>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSHmdUserProfileField, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSHmdUserProfileField, FieldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::NewProp_FieldValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthHMD,
		nullptr,
		&NewStructOps,
		"SHmdUserProfileField",
		sizeof(FSHmdUserProfileField),
		alignof(FSHmdUserProfileField),
		Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSHmdUserProfileField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSHmdUserProfileField_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SHmdUserProfileField"), sizeof(FSHmdUserProfileField), Get_Z_Construct_UScriptStruct_FSHmdUserProfileField_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSHmdUserProfileField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSHmdUserProfileField_Hash() { return 4218648174U; }
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetGuardianVisibility)
	{
		P_GET_UBOOL(Z_Param_GuardianVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetGuardianVisibility(Z_Param_GuardianVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetNodeGuardianIntersection)
	{
		P_GET_ENUM(FSTrackedDeviceType,Z_Param_DeviceType);
		P_GET_ENUM(FSBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSGuardianTestResult*)Z_Param__Result=USkyworthFunctionLibrary::GetNodeGuardianIntersection(FSTrackedDeviceType(Z_Param_DeviceType),FSBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetPointGuardianIntersection)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_ENUM(FSBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSGuardianTestResult*)Z_Param__Result=USkyworthFunctionLibrary::GetPointGuardianIntersection(Z_Param_Point,FSBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetPlayAreaTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=USkyworthFunctionLibrary::GetPlayAreaTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetGuardianDimensions)
	{
		P_GET_ENUM(FSBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USkyworthFunctionLibrary::GetGuardianDimensions(FSBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetGuardianPoints)
	{
		P_GET_ENUM(FSBoundaryType,Z_Param_BoundaryType);
		P_GET_UBOOL(Z_Param_UsePawnSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=USkyworthFunctionLibrary::GetGuardianPoints(FSBoundaryType(Z_Param_BoundaryType),Z_Param_UsePawnSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execIsGuardianConfigured)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthFunctionLibrary::IsGuardianConfigured();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execIsGuardianDisplayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthFunctionLibrary::IsGuardianDisplayed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetColorScaleAndOffset)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ColorScale);
		P_GET_STRUCT(FLinearColor,Z_Param_ColorOffset);
		P_GET_UBOOL(Z_Param_bApplyToAllLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetColorScaleAndOffset(Z_Param_ColorScale,Z_Param_ColorOffset,Z_Param_bApplyToAllLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execEnableOrientationTracking)
	{
		P_GET_UBOOL(Z_Param_bOrientationTracking);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::EnableOrientationTracking(Z_Param_bOrientationTracking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execEnablePositionTracking)
	{
		P_GET_UBOOL(Z_Param_bPositionTracking);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::EnablePositionTracking(Z_Param_bPositionTracking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetDisplayFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RequestedFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetDisplayFrequency(Z_Param_RequestedFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetCurrentDisplayFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyworthFunctionLibrary::GetCurrentDisplayFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetAvailableDisplayFrequencies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=USkyworthFunctionLibrary::GetAvailableDisplayFrequencies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USkyworthFunctionLibrary::GetDeviceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetFixedFoveatedRenderingLevel)
	{
		P_GET_ENUM(FSFixedFoveatedRenderingLevel,Z_Param_level);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetFixedFoveatedRenderingLevel(FSFixedFoveatedRenderingLevel(Z_Param_level));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetFixedFoveatedRenderingLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSFixedFoveatedRenderingLevel*)Z_Param__Result=USkyworthFunctionLibrary::GetFixedFoveatedRenderingLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetGPUFrameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkyworthFunctionLibrary::GetGPUFrameTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetGPUUtilization)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsGPUAvailable);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GPUUtilization);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::GetGPUUtilization(Z_Param_Out_IsGPUAvailable,Z_Param_Out_GPUUtilization);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execHasSystemOverlayPresent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthFunctionLibrary::HasSystemOverlayPresent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execHasInputFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthFunctionLibrary::HasInputFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetLoadingSplashParams)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TexturePath);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DistanceInMeters);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SizeInMeters);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RotationAxis);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RotationDeltaInDeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::GetLoadingSplashParams(Z_Param_Out_TexturePath,Z_Param_Out_DistanceInMeters,Z_Param_Out_SizeInMeters,Z_Param_Out_RotationAxis,Z_Param_Out_RotationDeltaInDeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetLoadingSplashParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TexturePath);
		P_GET_STRUCT(FVector,Z_Param_DistanceInMeters);
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters);
		P_GET_STRUCT(FVector,Z_Param_RotationAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationDeltaInDeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetLoadingSplashParams(Z_Param_TexturePath,Z_Param_DistanceInMeters,Z_Param_SizeInMeters,Z_Param_RotationAxis,Z_Param_RotationDeltaInDeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execIsLoadingIconEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthFunctionLibrary::IsLoadingIconEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execHideLoadingIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::HideLoadingIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execShowLoadingIcon)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::ShowLoadingIcon(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execIsAutoLoadingSplashScreenEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthFunctionLibrary::IsAutoLoadingSplashScreenEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execEnableAutoLoadingSplashScreen)
	{
		P_GET_UBOOL(Z_Param_bAutoShowEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::EnableAutoLoadingSplashScreen(Z_Param_bAutoShowEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execHideLoadingSplashScreen)
	{
		P_GET_UBOOL(Z_Param_bClear);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::HideLoadingSplashScreen(Z_Param_bClear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execShowLoadingSplashScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::ShowLoadingSplashScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execClearLoadingSplashScreens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::ClearLoadingSplashScreens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execAddLoadingSplashScreen)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_STRUCT(FVector,Z_Param_TranslationInMeters);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters);
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bClearBeforeAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::AddLoadingSplashScreen(Z_Param_Texture,Z_Param_TranslationInMeters,Z_Param_Rotation,Z_Param_SizeInMeters,Z_Param_DeltaRotation,Z_Param_bClearBeforeAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetBaseRotationAndPositionOffset)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRot);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::GetBaseRotationAndPositionOffset(Z_Param_Out_OutRot,Z_Param_Out_OutPosOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetBaseRotationAndPositionOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_BaseRot);
		P_GET_STRUCT(FVector,Z_Param_PosOffset);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetBaseRotationAndPositionOffset(Z_Param_BaseRot,Z_Param_PosOffset,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetPositionScale3D)
	{
		P_GET_STRUCT(FVector,Z_Param_PosScale3D);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetPositionScale3D(Z_Param_PosScale3D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutBaseOffsetInMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(Z_Param_Out_OutRotation,Z_Param_Out_OutBaseOffsetInMeters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_BaseOffsetInMeters);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(Z_Param_Rotation,Z_Param_BaseOffsetInMeters,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetUserProfile)
	{
		P_GET_STRUCT_REF(FSHmdUserProfile,Z_Param_Out_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthFunctionLibrary::GetUserProfile(Z_Param_Out_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetReorientHMDOnControllerRecenter)
	{
		P_GET_UBOOL(Z_Param_recenterMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetReorientHMDOnControllerRecenter(Z_Param_recenterMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execSetCPUAndGPULevels)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CPULevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_GPULevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::SetCPUAndGPULevels(Z_Param_CPULevel,Z_Param_GPULevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execIsDeviceTracked)
	{
		P_GET_ENUM(FSTrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USkyworthFunctionLibrary::IsDeviceTracked(FSTrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetRawSensorData)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularAcceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearAcceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TimeInSeconds);
		P_GET_ENUM(FSTrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::GetRawSensorData(Z_Param_Out_AngularAcceleration,Z_Param_Out_LinearAcceleration,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity,Z_Param_Out_TimeInSeconds,FSTrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthFunctionLibrary::execGetPose)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NeckPosition);
		P_GET_UBOOL(Z_Param_bUseOrienationForPlayerCamera);
		P_GET_UBOOL(Z_Param_bUsePositionForPlayerCamera);
		P_GET_STRUCT(FVector,Z_Param_PositionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkyworthFunctionLibrary::GetPose(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition,Z_Param_Out_NeckPosition,Z_Param_bUseOrienationForPlayerCamera,Z_Param_bUsePositionForPlayerCamera,Z_Param_PositionScale);
		P_NATIVE_END;
	}
	void USkyworthFunctionLibrary::StaticRegisterNativesUSkyworthFunctionLibrary()
	{
		UClass* Class = USkyworthFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLoadingSplashScreen", &USkyworthFunctionLibrary::execAddLoadingSplashScreen },
			{ "ClearLoadingSplashScreens", &USkyworthFunctionLibrary::execClearLoadingSplashScreens },
			{ "EnableAutoLoadingSplashScreen", &USkyworthFunctionLibrary::execEnableAutoLoadingSplashScreen },
			{ "EnableOrientationTracking", &USkyworthFunctionLibrary::execEnableOrientationTracking },
			{ "EnablePositionTracking", &USkyworthFunctionLibrary::execEnablePositionTracking },
			{ "GetAvailableDisplayFrequencies", &USkyworthFunctionLibrary::execGetAvailableDisplayFrequencies },
			{ "GetBaseRotationAndBaseOffsetInMeters", &USkyworthFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters },
			{ "GetBaseRotationAndPositionOffset", &USkyworthFunctionLibrary::execGetBaseRotationAndPositionOffset },
			{ "GetCurrentDisplayFrequency", &USkyworthFunctionLibrary::execGetCurrentDisplayFrequency },
			{ "GetDeviceName", &USkyworthFunctionLibrary::execGetDeviceName },
			{ "GetFixedFoveatedRenderingLevel", &USkyworthFunctionLibrary::execGetFixedFoveatedRenderingLevel },
			{ "GetGPUFrameTime", &USkyworthFunctionLibrary::execGetGPUFrameTime },
			{ "GetGPUUtilization", &USkyworthFunctionLibrary::execGetGPUUtilization },
			{ "GetGuardianDimensions", &USkyworthFunctionLibrary::execGetGuardianDimensions },
			{ "GetGuardianPoints", &USkyworthFunctionLibrary::execGetGuardianPoints },
			{ "GetLoadingSplashParams", &USkyworthFunctionLibrary::execGetLoadingSplashParams },
			{ "GetNodeGuardianIntersection", &USkyworthFunctionLibrary::execGetNodeGuardianIntersection },
			{ "GetPlayAreaTransform", &USkyworthFunctionLibrary::execGetPlayAreaTransform },
			{ "GetPointGuardianIntersection", &USkyworthFunctionLibrary::execGetPointGuardianIntersection },
			{ "GetPose", &USkyworthFunctionLibrary::execGetPose },
			{ "GetRawSensorData", &USkyworthFunctionLibrary::execGetRawSensorData },
			{ "GetUserProfile", &USkyworthFunctionLibrary::execGetUserProfile },
			{ "HasInputFocus", &USkyworthFunctionLibrary::execHasInputFocus },
			{ "HasSystemOverlayPresent", &USkyworthFunctionLibrary::execHasSystemOverlayPresent },
			{ "HideLoadingIcon", &USkyworthFunctionLibrary::execHideLoadingIcon },
			{ "HideLoadingSplashScreen", &USkyworthFunctionLibrary::execHideLoadingSplashScreen },
			{ "IsAutoLoadingSplashScreenEnabled", &USkyworthFunctionLibrary::execIsAutoLoadingSplashScreenEnabled },
			{ "IsDeviceTracked", &USkyworthFunctionLibrary::execIsDeviceTracked },
			{ "IsGuardianConfigured", &USkyworthFunctionLibrary::execIsGuardianConfigured },
			{ "IsGuardianDisplayed", &USkyworthFunctionLibrary::execIsGuardianDisplayed },
			{ "IsLoadingIconEnabled", &USkyworthFunctionLibrary::execIsLoadingIconEnabled },
			{ "SetBaseRotationAndBaseOffsetInMeters", &USkyworthFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters },
			{ "SetBaseRotationAndPositionOffset", &USkyworthFunctionLibrary::execSetBaseRotationAndPositionOffset },
			{ "SetColorScaleAndOffset", &USkyworthFunctionLibrary::execSetColorScaleAndOffset },
			{ "SetCPUAndGPULevels", &USkyworthFunctionLibrary::execSetCPUAndGPULevels },
			{ "SetDisplayFrequency", &USkyworthFunctionLibrary::execSetDisplayFrequency },
			{ "SetFixedFoveatedRenderingLevel", &USkyworthFunctionLibrary::execSetFixedFoveatedRenderingLevel },
			{ "SetGuardianVisibility", &USkyworthFunctionLibrary::execSetGuardianVisibility },
			{ "SetLoadingSplashParams", &USkyworthFunctionLibrary::execSetLoadingSplashParams },
			{ "SetPositionScale3D", &USkyworthFunctionLibrary::execSetPositionScale3D },
			{ "SetReorientHMDOnControllerRecenter", &USkyworthFunctionLibrary::execSetReorientHMDOnControllerRecenter },
			{ "ShowLoadingIcon", &USkyworthFunctionLibrary::execShowLoadingIcon },
			{ "ShowLoadingSplashScreen", &USkyworthFunctionLibrary::execShowLoadingSplashScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics
	{
		struct SkyworthFunctionLibrary_eventAddLoadingSplashScreen_Parms
		{
			UTexture2D* Texture;
			FVector TranslationInMeters;
			FRotator Rotation;
			FVector2D SizeInMeters;
			FRotator DeltaRotation;
			bool bClearBeforeAdd;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static void NewProp_bClearBeforeAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearBeforeAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventAddLoadingSplashScreen_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_TranslationInMeters = { "TranslationInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventAddLoadingSplashScreen_Parms, TranslationInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventAddLoadingSplashScreen_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_SizeInMeters = { "SizeInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventAddLoadingSplashScreen_Parms, SizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventAddLoadingSplashScreen_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventAddLoadingSplashScreen_Parms*)Obj)->bClearBeforeAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd = { "bClearBeforeAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventAddLoadingSplashScreen_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_TranslationInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_SizeInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_DeltaRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09 * Adds loading splash screen with parameters\n\x09 *\n\x09 * @param Texture\x09\x09\x09(in) A texture asset to be used for the splash. Gear VR uses it as a path for loading icon; all other params are currently ignored by Gear VR.\n\x09 * @param TranslationInMeters (in) Initial translation of the center of the splash screen (in meters).\n\x09 * @param Rotation\x09\x09\x09(in) Initial rotation of the splash screen, with the origin at the center of the splash screen.\n\x09 * @param SizeInMeters\x09\x09(in) Size, in meters, of the quad with the splash screen.\n\x09 * @param DeltaRotation\x09\x09(in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n\x09 * @param bClearBeforeAdd\x09(in) If true, clears splashes before adding a new one.\n\x09 */" },
		{ "CPP_Default_bClearBeforeAdd", "false" },
		{ "CPP_Default_DeltaRotation", "" },
		{ "CPP_Default_SizeInMeters", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Adds loading splash screen with parameters\n\n@param Texture                       (in) A texture asset to be used for the splash. Gear VR uses it as a path for loading icon; all other params are currently ignored by Gear VR.\n@param TranslationInMeters (in) Initial translation of the center of the splash screen (in meters).\n@param Rotation                      (in) Initial rotation of the splash screen, with the origin at the center of the splash screen.\n@param SizeInMeters          (in) Size, in meters, of the quad with the splash screen.\n@param DeltaRotation         (in) Incremental rotation, that is added each 2nd frame to the quad transform. The quad is rotated around the center of the quad.\n@param bClearBeforeAdd       (in) If true, clears splashes before adding a new one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "AddLoadingSplashScreen", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventAddLoadingSplashScreen_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_ClearLoadingSplashScreens_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09 * Removes all the splash screens.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Removes all the splash screens." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_ClearLoadingSplashScreens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "ClearLoadingSplashScreens", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_ClearLoadingSplashScreens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_ClearLoadingSplashScreens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics
	{
		struct SkyworthFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms
		{
			bool bAutoShowEnabled;
		};
		static void NewProp_bAutoShowEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoShowEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_bAutoShowEnabled_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms*)Obj)->bAutoShowEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_bAutoShowEnabled = { "bAutoShowEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_bAutoShowEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_bAutoShowEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USkyworthFunctionLibrary::EnableAutoLoadingSplashScreen has been deprecated and no longer functions as before.  Use the generic UStereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen instead" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "EnableAutoLoadingSplashScreen", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics
	{
		struct SkyworthFunctionLibrary_eventEnableOrientationTracking_Parms
		{
			bool bOrientationTracking;
		};
		static void NewProp_bOrientationTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientationTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventEnableOrientationTracking_Parms*)Obj)->bOrientationTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking = { "bOrientationTracking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventEnableOrientationTracking_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Enables/disables orientation tracking on devices that support it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables orientation tracking on devices that support it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "EnableOrientationTracking", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventEnableOrientationTracking_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics
	{
		struct SkyworthFunctionLibrary_eventEnablePositionTracking_Parms
		{
			bool bPositionTracking;
		};
		static void NewProp_bPositionTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPositionTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventEnablePositionTracking_Parms*)Obj)->bPositionTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking = { "bPositionTracking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventEnablePositionTracking_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Enables/disables positional tracking on devices that support it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables positional tracking on devices that support it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "EnablePositionTracking", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventEnablePositionTracking_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics
	{
		struct SkyworthFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns the current available frequencies\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns the current available frequencies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetAvailableDisplayFrequencies", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics
	{
		struct SkyworthFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms
		{
			FRotator OutRotation;
			FVector OutBaseOffsetInMeters;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBaseOffsetInMeters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters = { "OutBaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutBaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns current base rotation and base offset.\n\x09* The base offset is currently used base position offset, previously set by the\n\x09* ResetPosition or SetBasePositionOffset calls. It represents a vector that translates the HMD's position\n\x09* into (0,0,0) point, in meters.\n\x09* The axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\x09*\n\x09* @param OutRotation\x09\x09\x09(out) Rotator object with base rotation\n\x09* @param OutBaseOffsetInMeters\x09(out) base position offset, vector, in meters.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns current base rotation and base offset.\nThe base offset is currently used base position offset, previously set by the\nResetPosition or SetBasePositionOffset calls. It represents a vector that translates the HMD's position\ninto (0,0,0) point, in meters.\nThe axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\n@param OutRotation                    (out) Rotator object with base rotation\n@param OutBaseOffsetInMeters  (out) base position offset, vector, in meters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics
	{
		struct SkyworthFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms
		{
			FRotator OutRot;
			FVector OutPosOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutRot = { "OutRot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutPosOffset = { "OutPosOffset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutPosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutPosOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09 * Returns current base rotation and position offset.\n\x09 *\n\x09 * @param OutRot\x09\x09\x09(out) Rotator object with base rotation\n\x09 * @param OutPosOffset\x09\x09(out) the vector with previously set position offset.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns current base rotation and position offset.\n\n@param OutRot                        (out) Rotator object with base rotation\n@param OutPosOffset          (out) the vector with previously set position offset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetBaseRotationAndPositionOffset", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics
	{
		struct SkyworthFunctionLibrary_eventGetCurrentDisplayFrequency_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetCurrentDisplayFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns the current display frequency\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns the current display frequency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetCurrentDisplayFrequency", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetCurrentDisplayFrequency_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics
	{
		struct SkyworthFunctionLibrary_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns the current device's name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns the current device's name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetDeviceName", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetDeviceName_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics
	{
		struct SkyworthFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms
		{
			FSFixedFoveatedRenderingLevel ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms, ReturnValue), Z_Construct_UEnum_SkyworthHMD_FSFixedFoveatedRenderingLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns the current multiresolution level\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns the current multiresolution level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetFixedFoveatedRenderingLevel", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics
	{
		struct SkyworthFunctionLibrary_eventGetGPUFrameTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetGPUFrameTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns the GPU frame time on supported mobile platforms (Go for now)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns the GPU frame time on supported mobile platforms (Go for now)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetGPUFrameTime", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetGPUFrameTime_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics
	{
		struct SkyworthFunctionLibrary_eventGetGPUUtilization_Parms
		{
			bool IsGPUAvailable;
			float GPUUtilization;
		};
		static void NewProp_IsGPUAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGPUAvailable;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GPUUtilization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventGetGPUUtilization_Parms*)Obj)->IsGPUAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable = { "IsGPUAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventGetGPUUtilization_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::NewProp_GPUUtilization = { "GPUUtilization", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetGPUUtilization_Parms, GPUUtilization), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::NewProp_GPUUtilization,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns the GPU utilization availability and value\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns the GPU utilization availability and value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetGPUUtilization", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetGPUUtilization_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics
	{
		struct SkyworthFunctionLibrary_eventGetGuardianDimensions_Parms
		{
			FSBoundaryType BoundaryType;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetGuardianDimensions_Parms, BoundaryType), Z_Construct_UEnum_SkyworthHMD_FSBoundaryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetGuardianDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns the dimensions in UE world space of the requested Boundary Type\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns the dimensions in UE world space of the requested Boundary Type\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetGuardianDimensions", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetGuardianDimensions_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics
	{
		struct SkyworthFunctionLibrary_eventGetGuardianPoints_Parms
		{
			FSBoundaryType BoundaryType;
			bool UsePawnSpace;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static void NewProp_UsePawnSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePawnSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetGuardianPoints_Parms, BoundaryType), Z_Construct_UEnum_SkyworthHMD_FSBoundaryType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventGetGuardianPoints_Parms*)Obj)->UsePawnSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace = { "UsePawnSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventGetGuardianPoints_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetGuardianPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns the list of points in UE world space of the requested Boundary Type \n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09* @param UsePawnSpace\x09\x09\x09(in) Boolean indicating to return the points in world space or pawn space\n\x09*/" },
		{ "CPP_Default_UsePawnSpace", "false" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns the list of points in UE world space of the requested Boundary Type\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n@param UsePawnSpace                   (in) Boolean indicating to return the points in world space or pawn space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetGuardianPoints", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetGuardianPoints_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics
	{
		struct SkyworthFunctionLibrary_eventGetLoadingSplashParams_Parms
		{
			FString TexturePath;
			FVector DistanceInMeters;
			FVector2D SizeInMeters;
			FVector RotationAxis;
			float RotationDeltaInDeg;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturePath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationDeltaInDeg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetLoadingSplashParams_Parms, TexturePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_DistanceInMeters = { "DistanceInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetLoadingSplashParams_Parms, DistanceInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_SizeInMeters = { "SizeInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetLoadingSplashParams_Parms, SizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetLoadingSplashParams_Parms, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_RotationDeltaInDeg = { "RotationDeltaInDeg", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetLoadingSplashParams_Parms, RotationDeltaInDeg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_TexturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_DistanceInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_SizeInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_RotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::NewProp_RotationDeltaInDeg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USkyworthFunctionLibrary::GetLoadingSplashParams has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetLoadingSplashParams", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetLoadingSplashParams_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics
	{
		struct SkyworthFunctionLibrary_eventGetNodeGuardianIntersection_Parms
		{
			FSTrackedDeviceType DeviceType;
			FSBoundaryType BoundaryType;
			FSGuardianTestResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetNodeGuardianIntersection_Parms, DeviceType), Z_Construct_UEnum_SkyworthHMD_FSTrackedDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetNodeGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_SkyworthHMD_FSBoundaryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetNodeGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGuardianTestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Get the intersection result between a tracked device (HMD or controllers) and a guardian boundary\n\x09* @param DeviceType             (in) Tracked Device type to test against guardian boundaries\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Get the intersection result between a tracked device (HMD or controllers) and a guardian boundary\n@param DeviceType             (in) Tracked Device type to test against guardian boundaries\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetNodeGuardianIntersection", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetNodeGuardianIntersection_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics
	{
		struct SkyworthFunctionLibrary_eventGetPlayAreaTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetPlayAreaTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns the transform of the play area rectangle, defining its position, rotation and scale to apply to a unit cube to match it with the play area.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns the transform of the play area rectangle, defining its position, rotation and scale to apply to a unit cube to match it with the play area." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetPlayAreaTransform", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetPlayAreaTransform_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics
	{
		struct SkyworthFunctionLibrary_eventGetPointGuardianIntersection_Parms
		{
			FVector Point;
			FSBoundaryType BoundaryType;
			FSGuardianTestResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetPointGuardianIntersection_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetPointGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_SkyworthHMD_FSBoundaryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetPointGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGuardianTestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Get the intersection result between a UE4 coordinate and a guardian boundary\n\x09* @param Point\x09\x09\x09\x09\x09(in) Point in UE space to test against guardian boundaries\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Get the intersection result between a UE4 coordinate and a guardian boundary\n@param Point                                  (in) Point in UE space to test against guardian boundaries\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact guardian bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetPointGuardianIntersection", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetPointGuardianIntersection_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics
	{
		struct SkyworthFunctionLibrary_eventGetPose_Parms
		{
			FRotator DeviceRotation;
			FVector DevicePosition;
			FVector NeckPosition;
			bool bUseOrienationForPlayerCamera;
			bool bUsePositionForPlayerCamera;
			FVector PositionScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DevicePosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckPosition;
		static void NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOrienationForPlayerCamera;
		static void NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePositionForPlayerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation = { "DeviceRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetPose_Parms, DeviceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_DevicePosition = { "DevicePosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetPose_Parms, DevicePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_NeckPosition = { "NeckPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetPose_Parms, NeckPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventGetPose_Parms*)Obj)->bUseOrienationForPlayerCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera = { "bUseOrienationForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventGetPose_Parms*)Obj)->bUsePositionForPlayerCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera = { "bUsePositionForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_PositionScale = { "PositionScale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetPose_Parms, PositionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_DevicePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_NeckPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::NewProp_PositionScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09 * Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\x09 *\n\x09 * @param DeviceRotation\x09(out) The device's current rotation\n\x09 * @param DevicePosition\x09(out) The device's current position, in its own tracking space\n\x09 * @param NeckPosition\x09\x09(out) The estimated neck position, calculated using NeckToEye vector from User Profile. Same coordinate space as DevicePosition.\n\x09 * @param bUseOrienationForPlayerCamera\x09(in) Should be set to 'true' if the orientation is going to be used to update orientation of the camera manually.\n\x09 * @param bUsePositionForPlayerCamera\x09(in) Should be set to 'true' if the position is going to be used to update position of the camera manually.\n\x09 * @param PositionScale\x09\x09(in) The 3D scale that will be applied to position.\n\x09 */" },
		{ "CPP_Default_bUseOrienationForPlayerCamera", "false" },
		{ "CPP_Default_bUsePositionForPlayerCamera", "false" },
		{ "CPP_Default_PositionScale", "" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\n@param DeviceRotation        (out) The device's current rotation\n@param DevicePosition        (out) The device's current position, in its own tracking space\n@param NeckPosition          (out) The estimated neck position, calculated using NeckToEye vector from User Profile. Same coordinate space as DevicePosition.\n@param bUseOrienationForPlayerCamera (in) Should be set to 'true' if the orientation is going to be used to update orientation of the camera manually.\n@param bUsePositionForPlayerCamera   (in) Should be set to 'true' if the position is going to be used to update position of the camera manually.\n@param PositionScale         (in) The 3D scale that will be applied to position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetPose", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetPose_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics
	{
		struct SkyworthFunctionLibrary_eventGetRawSensorData_Parms
		{
			FVector AngularAcceleration;
			FVector LinearAcceleration;
			FVector AngularVelocity;
			FVector LinearVelocity;
			float TimeInSeconds;
			FSTrackedDeviceType DeviceType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularAcceleration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearAcceleration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularAcceleration = { "AngularAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetRawSensorData_Parms, AngularAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearAcceleration = { "LinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetRawSensorData_Parms, LinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetRawSensorData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetRawSensorData_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetRawSensorData_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetRawSensorData_Parms, DeviceType), Z_Construct_UEnum_SkyworthHMD_FSTrackedDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_TimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Reports raw sensor data. If HMD doesn't support any of the parameters then it will be set to zero.\n\x09*\n\x09* @param AngularAcceleration\x09(out) Angular acceleration in radians per second per second.\n\x09* @param LinearAcceleration\x09\x09(out) Acceleration in meters per second per second.\n\x09* @param AngularVelocity\x09\x09(out) Angular velocity in radians per second.\n\x09* @param LinearVelocity\x09\x09\x09(out) Velocity in meters per second.\n\x09* @param TimeInSeconds\x09\x09\x09(out) Time when the reported IMU reading took place, in seconds.\n\x09*/" },
		{ "CPP_Default_DeviceType", "HMD" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Reports raw sensor data. If HMD doesn't support any of the parameters then it will be set to zero.\n\n@param AngularAcceleration    (out) Angular acceleration in radians per second per second.\n@param LinearAcceleration             (out) Acceleration in meters per second per second.\n@param AngularVelocity                (out) Angular velocity in radians per second.\n@param LinearVelocity                 (out) Velocity in meters per second.\n@param TimeInSeconds                  (out) Time when the reported IMU reading took place, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetRawSensorData", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetRawSensorData_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics
	{
		struct SkyworthFunctionLibrary_eventGetUserProfile_Parms
		{
			FSHmdUserProfile Profile;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventGetUserProfile_Parms, Profile), Z_Construct_UScriptStruct_FSHmdUserProfile, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventGetUserProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventGetUserProfile_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::NewProp_Profile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns current user profile.\n\x09*\n\x09* @param Profile\x09\x09(out) Structure to hold current user profile.\n\x09* @return (boolean)\x09True, if user profile was acquired.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns current user profile.\n\n@param Profile                (out) Structure to hold current user profile.\n@return (boolean)     True, if user profile was acquired." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "GetUserProfile", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventGetUserProfile_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics
	{
		struct SkyworthFunctionLibrary_eventHasInputFocus_Parms
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
	void Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventHasInputFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventHasInputFocus_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns true, if the app has input focus.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns true, if the app has input focus." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "HasInputFocus", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventHasInputFocus_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics
	{
		struct SkyworthFunctionLibrary_eventHasSystemOverlayPresent_Parms
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
	void Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventHasSystemOverlayPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventHasSystemOverlayPresent_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns true, if the system overlay is present.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns true, if the system overlay is present." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "HasSystemOverlayPresent", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventHasSystemOverlayPresent_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USkyworthFunctionLibrary::HideLoadingIcon has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "HideLoadingIcon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics
	{
		struct SkyworthFunctionLibrary_eventHideLoadingSplashScreen_Parms
		{
			bool bClear;
		};
		static void NewProp_bClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::NewProp_bClear_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventHideLoadingSplashScreen_Parms*)Obj)->bClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::NewProp_bClear = { "bClear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventHideLoadingSplashScreen_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::NewProp_bClear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::NewProp_bClear,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "CPP_Default_bClear", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USkyworthFunctionLibrary::HideLoadingSplashScreen has been deprecated and no longer functions as before.  Use the generic UStereoLayerFunctionLibrary::HideSplashScreen instead" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "HideLoadingSplashScreen", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventHideLoadingSplashScreen_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics
	{
		struct SkyworthFunctionLibrary_eventIsAutoLoadingSplashScreenEnabled_Parms
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
	void Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventIsAutoLoadingSplashScreenEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventIsAutoLoadingSplashScreenEnabled_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USkyworthFunctionLibrary::IsAutoLoadingSplashScreenEnabled has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "IsAutoLoadingSplashScreenEnabled", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventIsAutoLoadingSplashScreenEnabled_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics
	{
		struct SkyworthFunctionLibrary_eventIsDeviceTracked_Parms
		{
			FSTrackedDeviceType DeviceType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventIsDeviceTracked_Parms, DeviceType), Z_Construct_UEnum_SkyworthHMD_FSTrackedDeviceType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventIsDeviceTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventIsDeviceTracked_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns if the device is currently tracked by the runtime or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns if the device is currently tracked by the runtime or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "IsDeviceTracked", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventIsDeviceTracked_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics
	{
		struct SkyworthFunctionLibrary_eventIsGuardianConfigured_Parms
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
	void Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventIsGuardianConfigured_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventIsGuardianConfigured_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns true if the Guardian has been set up by the user, false if the user is in \"seated\" mode and has not set up a play space.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the Guardian has been set up by the user, false if the user is in \"seated\" mode and has not set up a play space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "IsGuardianConfigured", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventIsGuardianConfigured_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics
	{
		struct SkyworthFunctionLibrary_eventIsGuardianDisplayed_Parms
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
	void Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventIsGuardianDisplayed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventIsGuardianDisplayed_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Returns true if the Guardian Outer Boundary is being displayed\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the Guardian Outer Boundary is being displayed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "IsGuardianDisplayed", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventIsGuardianDisplayed_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics
	{
		struct SkyworthFunctionLibrary_eventIsLoadingIconEnabled_Parms
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
	void Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventIsLoadingIconEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventIsLoadingIconEnabled_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USkyworthFunctionLibrary::IsLoadingIconEnabled has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "IsLoadingIconEnabled", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventIsLoadingIconEnabled_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics
	{
		struct SkyworthFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms
		{
			FRotator Rotation;
			FVector BaseOffsetInMeters;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseOffsetInMeters;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters = { "BaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, BaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Sets 'base rotation' - the rotation that will be subtracted from\n\x09* the actual HMD orientation.\n\x09* Sets base position offset (in meters). The base position offset is the distance from the physical (0, 0, 0) position\n\x09* to current HMD position (bringing the (0, 0, 0) point to the current HMD position)\n\x09* Note, this vector is set by ResetPosition call; use this method with care.\n\x09* The axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\x09*\n\x09* @param Rotation\x09\x09\x09(in) Rotator object with base rotation\n\x09* @param BaseOffsetInMeters (in) the vector to be set as base offset, in meters.\n\x09* @param Options\x09\x09\x09(in) specifies either position, orientation or both should be set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Sets 'base rotation' - the rotation that will be subtracted from\nthe actual HMD orientation.\nSets base position offset (in meters). The base position offset is the distance from the physical (0, 0, 0) position\nto current HMD position (bringing the (0, 0, 0) point to the current HMD position)\nNote, this vector is set by ResetPosition call; use this method with care.\nThe axis of the vector are the same as in Unreal: X - forward, Y - right, Z - up.\n\n@param Rotation                       (in) Rotator object with base rotation\n@param BaseOffsetInMeters (in) the vector to be set as base offset, in meters.\n@param Options                        (in) specifies either position, orientation or both should be set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics
	{
		struct SkyworthFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms
		{
			FRotator BaseRot;
			FVector PosOffset;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseRot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosOffset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_BaseRot = { "BaseRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, BaseRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_PosOffset = { "PosOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, PosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_BaseRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_PosOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09 * Sets 'base rotation' - the rotation that will be subtracted from\n\x09 * the actual HMD orientation.\n\x09 * The position offset might be added to current HMD position,\n\x09 * effectively moving the virtual camera by the specified offset. The addition\n\x09 * occurs after the HMD orientation and position are applied.\n\x09 *\n\x09 * @param BaseRot\x09\x09\x09(in) Rotator object with base rotation\n\x09 * @param PosOffset\x09\x09\x09(in) the vector to be added to HMD position.\n\x09 * @param Options\x09\x09\x09(in) specifies either position, orientation or both should be set.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Sets 'base rotation' - the rotation that will be subtracted from\nthe actual HMD orientation.\nThe position offset might be added to current HMD position,\neffectively moving the virtual camera by the specified offset. The addition\noccurs after the HMD orientation and position are applied.\n\n@param BaseRot                       (in) Rotator object with base rotation\n@param PosOffset                     (in) the vector to be added to HMD position.\n@param Options                       (in) specifies either position, orientation or both should be set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetBaseRotationAndPositionOffset", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics
	{
		struct SkyworthFunctionLibrary_eventSetColorScaleAndOffset_Parms
		{
			FLinearColor ColorScale;
			FLinearColor ColorOffset;
			bool bApplyToAllLayers;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
		static void NewProp_bApplyToAllLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventSetColorScaleAndOffset_Parms*)Obj)->bApplyToAllLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers = { "bApplyToAllLayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventSetColorScaleAndOffset_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Enables/disables orientation tracking on devices that support it.\n\x09*/" },
		{ "CPP_Default_bApplyToAllLayers", "false" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables orientation tracking on devices that support it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetColorScaleAndOffset", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetColorScaleAndOffset_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics
	{
		struct SkyworthFunctionLibrary_eventSetCPUAndGPULevels_Parms
		{
			int32 CPULevel;
			int32 GPULevel;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CPULevel;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GPULevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetCPUAndGPULevels_Parms, CPULevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetCPUAndGPULevels_Parms, GPULevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Returns if the device is currently tracked by the runtime or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Returns if the device is currently tracked by the runtime or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetCPUAndGPULevels", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetCPUAndGPULevels_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics
	{
		struct SkyworthFunctionLibrary_eventSetDisplayFrequency_Parms
		{
			float RequestedFrequency;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequestedFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency = { "RequestedFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetDisplayFrequency_Parms, RequestedFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Sets the requested display frequency\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Sets the requested display frequency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetDisplayFrequency", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetDisplayFrequency_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics
	{
		struct SkyworthFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms
		{
			FSFixedFoveatedRenderingLevel level;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms, level), Z_Construct_UEnum_SkyworthHMD_FSFixedFoveatedRenderingLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Set the requested multiresolution level for the next frame\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Set the requested multiresolution level for the next frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetFixedFoveatedRenderingLevel", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics
	{
		struct SkyworthFunctionLibrary_eventSetGuardianVisibility_Parms
		{
			bool GuardianVisible;
		};
		static void NewProp_GuardianVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GuardianVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventSetGuardianVisibility_Parms*)Obj)->GuardianVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible = { "GuardianVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventSetGuardianVisibility_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary|Guardian" },
		{ "Comment", "/**\n\x09* Forces the runtime to render guardian at all times or not\n\x09* @param GuardianVisible\x09\x09\x09(in) True will display guardian, False will hide it\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Forces the runtime to render guardian at all times or not\n@param GuardianVisible                        (in) True will display guardian, False will hide it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetGuardianVisibility", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetGuardianVisibility_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics
	{
		struct SkyworthFunctionLibrary_eventSetLoadingSplashParams_Parms
		{
			FString TexturePath;
			FVector DistanceInMeters;
			FVector2D SizeInMeters;
			FVector RotationAxis;
			float RotationDeltaInDeg;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturePath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeInMeters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationDeltaInDeg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetLoadingSplashParams_Parms, TexturePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_DistanceInMeters = { "DistanceInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetLoadingSplashParams_Parms, DistanceInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_SizeInMeters = { "SizeInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetLoadingSplashParams_Parms, SizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetLoadingSplashParams_Parms, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_RotationDeltaInDeg = { "RotationDeltaInDeg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetLoadingSplashParams_Parms, RotationDeltaInDeg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_TexturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_DistanceInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_SizeInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_RotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::NewProp_RotationDeltaInDeg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USkyworthFunctionLibrary::SetLoadingSplashParams has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetLoadingSplashParams", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetLoadingSplashParams_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics
	{
		struct SkyworthFunctionLibrary_eventSetPositionScale3D_Parms
		{
			FVector PosScale3D;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosScale3D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::NewProp_PosScale3D = { "PosScale3D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventSetPositionScale3D_Parms, PosScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::NewProp_PosScale3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09 * Scales the HMD position that gets added to the virtual camera position.\n\x09 *\n\x09 * @param PosScale3D\x09(in) the scale to apply to the HMD position.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This feature is no longer supported." },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Scales the HMD position that gets added to the virtual camera position.\n\n@param PosScale3D    (in) the scale to apply to the HMD position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetPositionScale3D", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetPositionScale3D_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics
	{
		struct SkyworthFunctionLibrary_eventSetReorientHMDOnControllerRecenter_Parms
		{
			bool recenterMode;
		};
		static void NewProp_recenterMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_recenterMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::NewProp_recenterMode_SetBit(void* Obj)
	{
		((SkyworthFunctionLibrary_eventSetReorientHMDOnControllerRecenter_Parms*)Obj)->recenterMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::NewProp_recenterMode = { "recenterMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkyworthFunctionLibrary_eventSetReorientHMDOnControllerRecenter_Parms), &Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::NewProp_recenterMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::NewProp_recenterMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "Comment", "/**\n\x09* Sets the HMD recenter behavior to a mode that specifies HMD recentering behavior when a\n\x09* controller recenter is performed. If the recenterMode specified is 1, the HMD will recenter\n\x09* on controller recenter; if it's 0, only the controller will recenter. Returns false if not\n\x09* supported.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
		{ "ToolTip", "Sets the HMD recenter behavior to a mode that specifies HMD recentering behavior when a\ncontroller recenter is performed. If the recenterMode specified is 1, the HMD will recenter\non controller recenter; if it's 0, only the controller will recenter. Returns false if not\nsupported." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "SetReorientHMDOnControllerRecenter", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventSetReorientHMDOnControllerRecenter_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics
	{
		struct SkyworthFunctionLibrary_eventShowLoadingIcon_Parms
		{
			UTexture2D* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthFunctionLibrary_eventShowLoadingIcon_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USkyworthFunctionLibrary::ShowLoadingIcon has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead." },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "ShowLoadingIcon", nullptr, nullptr, sizeof(SkyworthFunctionLibrary_eventShowLoadingIcon_Parms), Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingSplashScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "USkyworthFunctionLibrary::ShowLoadingSplashScreen has been deprecated and no longer functions as before.  Use the generic UStereoLayerFunctionLibrary::ShowSplashScreen instead" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthFunctionLibrary, nullptr, "ShowLoadingSplashScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkyworthFunctionLibrary_NoRegister()
	{
		return USkyworthFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyworthFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_AddLoadingSplashScreen, "AddLoadingSplashScreen" }, // 3982311954
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_ClearLoadingSplashScreens, "ClearLoadingSplashScreens" }, // 2622374829
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_EnableAutoLoadingSplashScreen, "EnableAutoLoadingSplashScreen" }, // 2881213251
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_EnableOrientationTracking, "EnableOrientationTracking" }, // 2413237076
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_EnablePositionTracking, "EnablePositionTracking" }, // 3934008097
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetAvailableDisplayFrequencies, "GetAvailableDisplayFrequencies" }, // 3776638742
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters, "GetBaseRotationAndBaseOffsetInMeters" }, // 166393651
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetBaseRotationAndPositionOffset, "GetBaseRotationAndPositionOffset" }, // 810504450
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetCurrentDisplayFrequency, "GetCurrentDisplayFrequency" }, // 3737887053
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetDeviceName, "GetDeviceName" }, // 3090249016
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetFixedFoveatedRenderingLevel, "GetFixedFoveatedRenderingLevel" }, // 1776503366
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUFrameTime, "GetGPUFrameTime" }, // 3278156065
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetGPUUtilization, "GetGPUUtilization" }, // 2718680965
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianDimensions, "GetGuardianDimensions" }, // 2275919707
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetGuardianPoints, "GetGuardianPoints" }, // 3082509397
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetLoadingSplashParams, "GetLoadingSplashParams" }, // 3130943212
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetNodeGuardianIntersection, "GetNodeGuardianIntersection" }, // 3199123660
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetPlayAreaTransform, "GetPlayAreaTransform" }, // 1905898229
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetPointGuardianIntersection, "GetPointGuardianIntersection" }, // 1498265453
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetPose, "GetPose" }, // 1273884667
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetRawSensorData, "GetRawSensorData" }, // 112118331
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_GetUserProfile, "GetUserProfile" }, // 3622644286
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_HasInputFocus, "HasInputFocus" }, // 2632778981
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_HasSystemOverlayPresent, "HasSystemOverlayPresent" }, // 3020245654
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingIcon, "HideLoadingIcon" }, // 1573607864
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_HideLoadingSplashScreen, "HideLoadingSplashScreen" }, // 2743060260
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_IsAutoLoadingSplashScreenEnabled, "IsAutoLoadingSplashScreenEnabled" }, // 472204232
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_IsDeviceTracked, "IsDeviceTracked" }, // 1588408618
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianConfigured, "IsGuardianConfigured" }, // 4254628476
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_IsGuardianDisplayed, "IsGuardianDisplayed" }, // 4222164483
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_IsLoadingIconEnabled, "IsLoadingIconEnabled" }, // 799742483
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters, "SetBaseRotationAndBaseOffsetInMeters" }, // 4150750886
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetBaseRotationAndPositionOffset, "SetBaseRotationAndPositionOffset" }, // 3352694172
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetColorScaleAndOffset, "SetColorScaleAndOffset" }, // 3669258733
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetCPUAndGPULevels, "SetCPUAndGPULevels" }, // 3158264535
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetDisplayFrequency, "SetDisplayFrequency" }, // 893215258
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetFixedFoveatedRenderingLevel, "SetFixedFoveatedRenderingLevel" }, // 204530274
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetGuardianVisibility, "SetGuardianVisibility" }, // 2189269003
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetLoadingSplashParams, "SetLoadingSplashParams" }, // 1782340376
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetPositionScale3D, "SetPositionScale3D" }, // 2060114233
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_SetReorientHMDOnControllerRecenter, "SetReorientHMDOnControllerRecenter" }, // 1164345074
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingIcon, "ShowLoadingIcon" }, // 3685670717
		{ &Z_Construct_UFunction_USkyworthFunctionLibrary_ShowLoadingSplashScreen, "ShowLoadingSplashScreen" }, // 366157543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkyworthFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SkyworthFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthFunctionLibrary_Statics::ClassParams = {
		&USkyworthFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkyworthFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthFunctionLibrary, 3657847264);
	template<> SKYWORTHHMD_API UClass* StaticClass<USkyworthFunctionLibrary>()
	{
		return USkyworthFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthFunctionLibrary(Z_Construct_UClass_USkyworthFunctionLibrary, &USkyworthFunctionLibrary::StaticClass, TEXT("/Script/SkyworthHMD"), TEXT("USkyworthFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
