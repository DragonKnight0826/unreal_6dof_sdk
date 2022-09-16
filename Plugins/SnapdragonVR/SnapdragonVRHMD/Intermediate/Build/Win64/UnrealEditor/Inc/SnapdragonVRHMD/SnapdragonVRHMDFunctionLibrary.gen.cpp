// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnapdragonVRHMD/Public/SnapdragonVRHMDFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapdragonVRHMDFunctionLibrary() {}
// Cross Module References
	SNAPDRAGONVRHMD_API UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye();
	UPackage* Z_Construct_UPackage__Script_SnapdragonVRHMD();
	SNAPDRAGONVRHMD_API UClass* Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_NoRegister();
	SNAPDRAGONVRHMD_API UClass* Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SNAPDRAGONVRHMD_API UClass* Z_Construct_UClass_USnapdragonVRHMDEventManager_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapdragonVRHMD_Eye;
	static UEnum* ESnapdragonVRHMD_Eye_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRHMD_Eye.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapdragonVRHMD_Eye.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye, Z_Construct_UPackage__Script_SnapdragonVRHMD(), TEXT("ESnapdragonVRHMD_Eye"));
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRHMD_Eye.OuterSingleton;
	}
	template<> SNAPDRAGONVRHMD_API UEnum* StaticEnum<ESnapdragonVRHMD_Eye>()
	{
		return ESnapdragonVRHMD_Eye_StaticEnum();
	}
	struct Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye_Statics::Enumerators[] = {
		{ "ESnapdragonVRHMD_Eye::LeftEye", (int64)ESnapdragonVRHMD_Eye::LeftEye },
		{ "ESnapdragonVRHMD_Eye::RightEye", (int64)ESnapdragonVRHMD_Eye::RightEye },
		{ "ESnapdragonVRHMD_Eye::AverageEye", (int64)ESnapdragonVRHMD_Eye::AverageEye },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye_Statics::Enum_MetaDataParams[] = {
		{ "AverageEye.Name", "ESnapdragonVRHMD_Eye::AverageEye" },
		{ "BlueprintType", "true" },
		{ "LeftEye.Name", "ESnapdragonVRHMD_Eye::LeftEye" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "RightEye.Name", "ESnapdragonVRHMD_Eye::RightEye" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRHMD,
		nullptr,
		"ESnapdragonVRHMD_Eye",
		"ESnapdragonVRHMD_Eye",
		Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRHMD_Eye.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapdragonVRHMD_Eye.InnerSingleton, Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRHMD_Eye.InnerSingleton;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execisEyetrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::isEyetrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execenableEyetrackingMarker)
	{
		P_GET_UBOOL(Z_Param_v);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::enableEyetrackingMarker(Z_Param_v);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execisEyetrackingMarkerEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::isEyetrackingMarkerEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execsetEyetrackingMarkerRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::setEyetrackingMarkerRadius(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execgetEyetrackingMarkerRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::getEyetrackingMarkerRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execgetAverageGazeDirection)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_x);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::getAverageGazeDirection(Z_Param_Out_x,Z_Param_Out_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationFocusFrequencyRho)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rho);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::setTextureFoveationFocusFrequencyRho(Z_Param_Rho);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationFocusFrequencyRho)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::getTextureFoveationFocusFrequencyRho();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationFocusFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::setTextureFoveationFocusFrequency(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationFocusFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::getTextureFoveationFocusFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationFocusAmplitude)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::setTextureFoveationFocusAmplitude(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationFocusAmplitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::getTextureFoveationFocusAmplitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execsetTextureMinimumPixelDensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::setTextureMinimumPixelDensity(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execgetTextureMinimumPixelDensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::getTextureMinimumPixelDensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationArea)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::setTextureFoveationArea(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::getTextureFoveationArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::setTextureFoveationGain(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationGain)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_x);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::getTextureFoveationGain(Z_Param_Out_x,Z_Param_Out_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execenableTextureFoveationFocus)
	{
		P_GET_UBOOL(Z_Param_t);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::enableTextureFoveationFocus(Z_Param_t);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execenableTextureFoveation)
	{
		P_GET_UBOOL(Z_Param_t);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::enableTextureFoveation(Z_Param_t);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execenableTemporalFoveation)
	{
		P_GET_UBOOL(Z_Param_t);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::enableTemporalFoveation(Z_Param_t);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execisTextureFoveationFocusEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::isTextureFoveationFocusEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execisTextureFoveationEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::isTextureFoveationEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execisTemporalFoveationEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::isTemporalFoveationEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execRecenterPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::RecenterPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execRecenterOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::RecenterOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execGetHeadOrientationAndPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutOrientation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotator);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::GetHeadOrientationAndPosition(Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation,Z_Param_Out_OutRotator,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execGetPupilDialation)
	{
		P_GET_ENUM(ESnapdragonVRHMD_Eye,Z_Param_WhichEye);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Openness);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::GetPupilDialation(ESnapdragonVRHMD_Eye(Z_Param_WhichEye),Z_Param_Out_Openness,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execGetEyeOpenness)
	{
		P_GET_ENUM(ESnapdragonVRHMD_Eye,Z_Param_WhichEye);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Openness);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::GetEyeOpenness(ESnapdragonVRHMD_Eye(Z_Param_WhichEye),Z_Param_Out_Openness,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execGetEyeOrientationAndPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutOrientation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::GetEyeOrientationAndPosition(Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation,Z_Param_Out_OutRotation,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execGetEyeGazeDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::GetEyeGazeDirection(Z_Param_Out_OutDirection,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execGetSnapdragonVRHMDEventManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USnapdragonVRHMDEventManager**)Z_Param__Result=USnapdragonVRHMDFunctionLibrary::GetSnapdragonVRHMDEventManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USnapdragonVRHMDFunctionLibrary::execSetCpuAndGpuLevelsSVR)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CpuLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_GpuLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		USnapdragonVRHMDFunctionLibrary::SetCpuAndGpuLevelsSVR(Z_Param_CpuLevel,Z_Param_GpuLevel);
		P_NATIVE_END;
	}
	void USnapdragonVRHMDFunctionLibrary::StaticRegisterNativesUSnapdragonVRHMDFunctionLibrary()
	{
		UClass* Class = USnapdragonVRHMDFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "enableEyetrackingMarker", &USnapdragonVRHMDFunctionLibrary::execenableEyetrackingMarker },
			{ "enableTemporalFoveation", &USnapdragonVRHMDFunctionLibrary::execenableTemporalFoveation },
			{ "enableTextureFoveation", &USnapdragonVRHMDFunctionLibrary::execenableTextureFoveation },
			{ "enableTextureFoveationFocus", &USnapdragonVRHMDFunctionLibrary::execenableTextureFoveationFocus },
			{ "getAverageGazeDirection", &USnapdragonVRHMDFunctionLibrary::execgetAverageGazeDirection },
			{ "GetEyeGazeDirection", &USnapdragonVRHMDFunctionLibrary::execGetEyeGazeDirection },
			{ "GetEyeOpenness", &USnapdragonVRHMDFunctionLibrary::execGetEyeOpenness },
			{ "GetEyeOrientationAndPosition", &USnapdragonVRHMDFunctionLibrary::execGetEyeOrientationAndPosition },
			{ "getEyetrackingMarkerRadius", &USnapdragonVRHMDFunctionLibrary::execgetEyetrackingMarkerRadius },
			{ "GetHeadOrientationAndPosition", &USnapdragonVRHMDFunctionLibrary::execGetHeadOrientationAndPosition },
			{ "GetPupilDialation", &USnapdragonVRHMDFunctionLibrary::execGetPupilDialation },
			{ "GetSnapdragonVRHMDEventManager", &USnapdragonVRHMDFunctionLibrary::execGetSnapdragonVRHMDEventManager },
			{ "getTextureFoveationArea", &USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationArea },
			{ "getTextureFoveationFocusAmplitude", &USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationFocusAmplitude },
			{ "getTextureFoveationFocusFrequency", &USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationFocusFrequency },
			{ "getTextureFoveationFocusFrequencyRho", &USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationFocusFrequencyRho },
			{ "getTextureFoveationGain", &USnapdragonVRHMDFunctionLibrary::execgetTextureFoveationGain },
			{ "getTextureMinimumPixelDensity", &USnapdragonVRHMDFunctionLibrary::execgetTextureMinimumPixelDensity },
			{ "isEyetrackingEnabled", &USnapdragonVRHMDFunctionLibrary::execisEyetrackingEnabled },
			{ "isEyetrackingMarkerEnabled", &USnapdragonVRHMDFunctionLibrary::execisEyetrackingMarkerEnabled },
			{ "isTemporalFoveationEnabled", &USnapdragonVRHMDFunctionLibrary::execisTemporalFoveationEnabled },
			{ "isTextureFoveationEnabled", &USnapdragonVRHMDFunctionLibrary::execisTextureFoveationEnabled },
			{ "isTextureFoveationFocusEnabled", &USnapdragonVRHMDFunctionLibrary::execisTextureFoveationFocusEnabled },
			{ "RecenterOrientation", &USnapdragonVRHMDFunctionLibrary::execRecenterOrientation },
			{ "RecenterPosition", &USnapdragonVRHMDFunctionLibrary::execRecenterPosition },
			{ "SetCpuAndGpuLevelsSVR", &USnapdragonVRHMDFunctionLibrary::execSetCpuAndGpuLevelsSVR },
			{ "setEyetrackingMarkerRadius", &USnapdragonVRHMDFunctionLibrary::execsetEyetrackingMarkerRadius },
			{ "setTextureFoveationArea", &USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationArea },
			{ "setTextureFoveationFocusAmplitude", &USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationFocusAmplitude },
			{ "setTextureFoveationFocusFrequency", &USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationFocusFrequency },
			{ "setTextureFoveationFocusFrequencyRho", &USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationFocusFrequencyRho },
			{ "setTextureFoveationGain", &USnapdragonVRHMDFunctionLibrary::execsetTextureFoveationGain },
			{ "setTextureMinimumPixelDensity", &USnapdragonVRHMDFunctionLibrary::execsetTextureMinimumPixelDensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventenableEyetrackingMarker_Parms
		{
			bool v;
		};
		static void NewProp_v_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_v;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::NewProp_v_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventenableEyetrackingMarker_Parms*)Obj)->v = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventenableEyetrackingMarker_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::NewProp_v_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::NewProp_v,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eyetracking|SnapdragonXR" },
		{ "DisplayName", "enable Eyetracking Marker?" },
		{ "Keywords", "Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "enableEyetrackingMarker", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::SnapdragonVRHMDFunctionLibrary_eventenableEyetrackingMarker_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventenableTemporalFoveation_Parms
		{
			bool t;
		};
		static void NewProp_t_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_t;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::NewProp_t_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventenableTemporalFoveation_Parms*)Obj)->t = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventenableTemporalFoveation_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::NewProp_t_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::NewProp_t,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temporal|Foveation|SnapdragonXR" },
		{ "DisplayName", "enable Temporal Foveation" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "enableTemporalFoveation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::SnapdragonVRHMDFunctionLibrary_eventenableTemporalFoveation_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventenableTextureFoveation_Parms
		{
			bool t;
		};
		static void NewProp_t_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_t;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::NewProp_t_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventenableTextureFoveation_Parms*)Obj)->t = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventenableTextureFoveation_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::NewProp_t_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::NewProp_t,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "enable Texture Foveation" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "enableTextureFoveation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::SnapdragonVRHMDFunctionLibrary_eventenableTextureFoveation_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventenableTextureFoveationFocus_Parms
		{
			bool t;
		};
		static void NewProp_t_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_t;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::NewProp_t_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventenableTextureFoveationFocus_Parms*)Obj)->t = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventenableTextureFoveationFocus_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::NewProp_t_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::NewProp_t,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "enable Texture Foveation Focus" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "enableTextureFoveationFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::SnapdragonVRHMDFunctionLibrary_eventenableTextureFoveationFocus_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventgetAverageGazeDirection_Parms
		{
			float x;
			float y;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetAverageGazeDirection_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetAverageGazeDirection_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eyetracking|SnapdragonXR" },
		{ "Comment", "// eyetracking\n" },
		{ "DisplayName", "get average gaze direction" },
		{ "Keywords", "Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "ToolTip", "eyetracking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "getAverageGazeDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::SnapdragonVRHMDFunctionLibrary_eventgetAverageGazeDirection_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventGetEyeGazeDirection_Parms
		{
			FVector OutDirection;
			bool Success;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetEyeGazeDirection_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventGetEyeGazeDirection_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventGetEyeGazeDirection_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::NewProp_OutDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnapdragonVR" },
		{ "Keywords", "SnapdragonVR Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "Tooltip", "Gaze Direction in World Coordinates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "GetEyeGazeDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::SnapdragonVRHMDFunctionLibrary_eventGetEyeGazeDirection_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventGetEyeOpenness_Parms
		{
			ESnapdragonVRHMD_Eye WhichEye;
			float Openness;
			bool Success;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_WhichEye_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WhichEye;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Openness;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_WhichEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_WhichEye = { "WhichEye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetEyeOpenness_Parms, WhichEye), Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye, METADATA_PARAMS(nullptr, 0) }; // 4131208653
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_Openness = { "Openness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetEyeOpenness_Parms, Openness), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventGetEyeOpenness_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventGetEyeOpenness_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_WhichEye_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_WhichEye,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_Openness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnapdragonVR" },
		{ "Comment", "//\x09UFUNCTION(BlueprintPure, Category = \"SnapdragonVR\", meta = (Keywords = \"SnapdragonVR Eyetracking\", Tooltip = \"Direction and Orientation of current pose in World coordinate system\"))\n//\x09\x09static void GetRelativeEyePose(FVector& OutPosition, FQuat& OutOrientation, bool& Success);\n" },
		{ "Keywords", "SnapdragonVR Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"SnapdragonVR\", meta = (Keywords = \"SnapdragonVR Eyetracking\", Tooltip = \"Direction and Orientation of current pose in World coordinate system\"))\n       static void GetRelativeEyePose(FVector& OutPosition, FQuat& OutOrientation, bool& Success);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "GetEyeOpenness", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::SnapdragonVRHMDFunctionLibrary_eventGetEyeOpenness_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventGetEyeOrientationAndPosition_Parms
		{
			FVector OutPosition;
			FQuat OutOrientation;
			FRotator OutRotation;
			bool Success;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetEyeOrientationAndPosition_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetEyeOrientationAndPosition_Parms, OutOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetEyeOrientationAndPosition_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventGetEyeOrientationAndPosition_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventGetEyeOrientationAndPosition_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_OutOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_OutRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnapdragonVR" },
		{ "Keywords", "SnapdragonVR Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "Tooltip", "Direction and Orientation in World Coordinates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "GetEyeOrientationAndPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::SnapdragonVRHMDFunctionLibrary_eventGetEyeOrientationAndPosition_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventgetEyetrackingMarkerRadius_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetEyetrackingMarkerRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eyetracking|SnapdragonXR" },
		{ "DisplayName", "get Texture Eyetracking Marker Radius" },
		{ "Keywords", "Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "getEyetrackingMarkerRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::SnapdragonVRHMDFunctionLibrary_eventgetEyetrackingMarkerRadius_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventGetHeadOrientationAndPosition_Parms
		{
			FVector OutPosition;
			FQuat OutOrientation;
			FRotator OutRotator;
			bool Success;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotator;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetHeadOrientationAndPosition_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetHeadOrientationAndPosition_Parms, OutOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_OutRotator = { "OutRotator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetHeadOrientationAndPosition_Parms, OutRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventGetHeadOrientationAndPosition_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventGetHeadOrientationAndPosition_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_OutOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_OutRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnapdragonVR" },
		{ "Keywords", "SnapdragonVR HMD" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "Tooltip", "Direction and Orientation/Rotator of current head pose in World coordinate system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "GetHeadOrientationAndPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::SnapdragonVRHMDFunctionLibrary_eventGetHeadOrientationAndPosition_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventGetPupilDialation_Parms
		{
			ESnapdragonVRHMD_Eye WhichEye;
			float Openness;
			bool Success;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_WhichEye_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WhichEye;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Openness;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_WhichEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_WhichEye = { "WhichEye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetPupilDialation_Parms, WhichEye), Z_Construct_UEnum_SnapdragonVRHMD_ESnapdragonVRHMD_Eye, METADATA_PARAMS(nullptr, 0) }; // 4131208653
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_Openness = { "Openness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetPupilDialation_Parms, Openness), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventGetPupilDialation_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventGetPupilDialation_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_WhichEye_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_WhichEye,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_Openness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnapdragonVR" },
		{ "Keywords", "SnapdragonVR Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "GetPupilDialation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::SnapdragonVRHMDFunctionLibrary_eventGetPupilDialation_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventGetSnapdragonVRHMDEventManager_Parms
		{
			USnapdragonVRHMDEventManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventGetSnapdragonVRHMDEventManager_Parms, ReturnValue), Z_Construct_UClass_USnapdragonVRHMDEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnapdragonVR" },
		{ "Keywords", "SnapdragonVR" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "GetSnapdragonVRHMDEventManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::SnapdragonVRHMDFunctionLibrary_eventGetSnapdragonVRHMDEventManager_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationArea_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationArea_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "get Texture Foveation Area" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "getTextureFoveationArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationArea_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationFocusAmplitude_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationFocusAmplitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "get Texture Foveation Focus Amplitude" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "getTextureFoveationFocusAmplitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationFocusAmplitude_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationFocusFrequency_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationFocusFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "get Texture Foveation Focus Frequency" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "getTextureFoveationFocusFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationFocusFrequency_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationFocusFrequencyRho_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationFocusFrequencyRho_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "get Texture Foveation Focus Frequency Rho" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "getTextureFoveationFocusFrequencyRho", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationFocusFrequencyRho_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationGain_Parms
		{
			float x;
			float y;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationGain_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationGain_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "get Texture Foveation Gain" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "getTextureFoveationGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::SnapdragonVRHMDFunctionLibrary_eventgetTextureFoveationGain_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventgetTextureMinimumPixelDensity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventgetTextureMinimumPixelDensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "get Texture Minimum Pixel Density" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "getTextureMinimumPixelDensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::SnapdragonVRHMDFunctionLibrary_eventgetTextureMinimumPixelDensity_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventisEyetrackingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventisEyetrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventisEyetrackingEnabled_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eyetracking|SnapdragonXR" },
		{ "DisplayName", "is Eyetracking enabled" },
		{ "Keywords", "Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "isEyetrackingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::SnapdragonVRHMDFunctionLibrary_eventisEyetrackingEnabled_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventisEyetrackingMarkerEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventisEyetrackingMarkerEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventisEyetrackingMarkerEnabled_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eyetracking|SnapdragonXR" },
		{ "DisplayName", "is EyetrackingMarker enabled" },
		{ "Keywords", "Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "isEyetrackingMarkerEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::SnapdragonVRHMDFunctionLibrary_eventisEyetrackingMarkerEnabled_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventisTemporalFoveationEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventisTemporalFoveationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventisTemporalFoveationEnabled_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temporal|Foveation|SnapdragonXR" },
		{ "Comment", "// FOVEATION\n" },
		{ "DisplayName", "is Temporal Foveation Enabled?" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "ToolTip", "FOVEATION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "isTemporalFoveationEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::SnapdragonVRHMDFunctionLibrary_eventisTemporalFoveationEnabled_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventisTextureFoveationEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventisTextureFoveationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventisTextureFoveationEnabled_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "is Texture Foveation Enabled?" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "isTextureFoveationEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::SnapdragonVRHMDFunctionLibrary_eventisTextureFoveationEnabled_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventisTextureFoveationFocusEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SnapdragonVRHMDFunctionLibrary_eventisTextureFoveationFocusEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapdragonVRHMDFunctionLibrary_eventisTextureFoveationFocusEnabled_Parms), &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "is Texture Foveation Focus Enabled?" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "isTextureFoveationFocusEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::SnapdragonVRHMDFunctionLibrary_eventisTextureFoveationFocusEnabled_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterOrientation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnapdragonVR" },
		{ "Keywords", "SnapdragonVR HMD" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "Tooltip", "Recenter the HDM's Orientation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "RecenterOrientation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnapdragonVR" },
		{ "Keywords", "SnapdragonVR HMD" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "Tooltip", "Recenter the HMD's position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "RecenterPosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventSetCpuAndGpuLevelsSVR_Parms
		{
			int32 CpuLevel;
			int32 GpuLevel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CpuLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CpuLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GpuLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_CpuLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_CpuLevel = { "CpuLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventSetCpuAndGpuLevelsSVR_Parms, CpuLevel), METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_CpuLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_CpuLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_GpuLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_GpuLevel = { "GpuLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventSetCpuAndGpuLevelsSVR_Parms, GpuLevel), METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_GpuLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_GpuLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_CpuLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::NewProp_GpuLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnapdragonVR" },
		{ "Comment", "/**\n\x09* Sets Snapdragon VR CPU and GPU performance Levels\n\x09*\n\x09* @param CpuLevel\x09\x09\x09(in) 0 = kPerfSystem = system-defined; 1 = kPerfMinimum = Minimum performance level (default 30-50% of max frequency); 2 = kPerfMedium = Medium performance level (default 51-80% of max frequency), 3 = kPerfMaximum = Maximum performance level (default 81-100% of max frequency)\n\x09* @param GpuLevel\x09\x09\x09(in) 0 = kPerfSystem = system-defined; 1 = kPerfMinimum = Minimum performance level (default 30-50% of max frequency); 2 = kPerfMedium = Medium performance level (default 51-80% of max frequency), 3 = kPerfMaximum = Maximum performance level (default 81-100% of max frequency)\n\x09*/" },
		{ "Keywords", "SnapdragonVR" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
		{ "ToolTip", "Sets Snapdragon VR CPU and GPU performance Levels\n\n@param CpuLevel                       (in) 0 = kPerfSystem = system-defined; 1 = kPerfMinimum = Minimum performance level (default 30-50% of max frequency); 2 = kPerfMedium = Medium performance level (default 51-80% of max frequency), 3 = kPerfMaximum = Maximum performance level (default 81-100% of max frequency)\n@param GpuLevel                       (in) 0 = kPerfSystem = system-defined; 1 = kPerfMinimum = Minimum performance level (default 30-50% of max frequency); 2 = kPerfMedium = Medium performance level (default 51-80% of max frequency), 3 = kPerfMaximum = Maximum performance level (default 81-100% of max frequency)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "SetCpuAndGpuLevelsSVR", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::SnapdragonVRHMDFunctionLibrary_eventSetCpuAndGpuLevelsSVR_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventsetEyetrackingMarkerRadius_Parms
		{
			float x;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventsetEyetrackingMarkerRadius_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eyetracking|SnapdragonXR" },
		{ "DisplayName", "set Texture Eyetracking Marker Radius" },
		{ "Keywords", "Eyetracking" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "setEyetrackingMarkerRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::SnapdragonVRHMDFunctionLibrary_eventsetEyetrackingMarkerRadius_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationArea_Parms
		{
			float x;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationArea_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "set Texture Foveation Area" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "setTextureFoveationArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationArea_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationFocusAmplitude_Parms
		{
			float x;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationFocusAmplitude_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "set Texture Foveation Focus Amplitude" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "setTextureFoveationFocusAmplitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationFocusAmplitude_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationFocusFrequency_Parms
		{
			float x;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationFocusFrequency_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "set Texture Foveation Focus Frequency" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "setTextureFoveationFocusFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationFocusFrequency_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationFocusFrequencyRho_Parms
		{
			float Rho;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rho;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::NewProp_Rho = { "Rho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationFocusFrequencyRho_Parms, Rho), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::NewProp_Rho,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "set Texture Foveation Focus Frequency Rho" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "setTextureFoveationFocusFrequencyRho", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationFocusFrequencyRho_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationGain_Parms
		{
			float x;
			float y;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationGain_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationGain_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "set Texture Foveation Gain" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "setTextureFoveationGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::SnapdragonVRHMDFunctionLibrary_eventsetTextureFoveationGain_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics
	{
		struct SnapdragonVRHMDFunctionLibrary_eventsetTextureMinimumPixelDensity_Parms
		{
			float x;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapdragonVRHMDFunctionLibrary_eventsetTextureMinimumPixelDensity_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture|Foveation|SnapdragonXR" },
		{ "DisplayName", "set Texture Minimum Pixel Density" },
		{ "Keywords", "Foveation" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, nullptr, "setTextureMinimumPixelDensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::SnapdragonVRHMDFunctionLibrary_eventsetTextureMinimumPixelDensity_Parms), Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapdragonVRHMDFunctionLibrary);
	UClass* Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_NoRegister()
	{
		return USnapdragonVRHMDFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SnapdragonVRHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableEyetrackingMarker, "enableEyetrackingMarker" }, // 1893861991
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTemporalFoveation, "enableTemporalFoveation" }, // 1707439424
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveation, "enableTextureFoveation" }, // 1047084941
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_enableTextureFoveationFocus, "enableTextureFoveationFocus" }, // 3593380912
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getAverageGazeDirection, "getAverageGazeDirection" }, // 2221244879
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeGazeDirection, "GetEyeGazeDirection" }, // 326871531
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOpenness, "GetEyeOpenness" }, // 2410005300
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetEyeOrientationAndPosition, "GetEyeOrientationAndPosition" }, // 327612714
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getEyetrackingMarkerRadius, "getEyetrackingMarkerRadius" }, // 1478849197
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetHeadOrientationAndPosition, "GetHeadOrientationAndPosition" }, // 2974069431
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetPupilDialation, "GetPupilDialation" }, // 215228720
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_GetSnapdragonVRHMDEventManager, "GetSnapdragonVRHMDEventManager" }, // 2482068235
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationArea, "getTextureFoveationArea" }, // 3944648637
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusAmplitude, "getTextureFoveationFocusAmplitude" }, // 2205377361
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequency, "getTextureFoveationFocusFrequency" }, // 2615855903
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationFocusFrequencyRho, "getTextureFoveationFocusFrequencyRho" }, // 2383364486
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureFoveationGain, "getTextureFoveationGain" }, // 2663438739
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_getTextureMinimumPixelDensity, "getTextureMinimumPixelDensity" }, // 2507550982
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingEnabled, "isEyetrackingEnabled" }, // 4078948485
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isEyetrackingMarkerEnabled, "isEyetrackingMarkerEnabled" }, // 3623097404
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTemporalFoveationEnabled, "isTemporalFoveationEnabled" }, // 1141878479
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationEnabled, "isTextureFoveationEnabled" }, // 1236611194
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_isTextureFoveationFocusEnabled, "isTextureFoveationFocusEnabled" }, // 1376089033
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterOrientation, "RecenterOrientation" }, // 3280892892
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_RecenterPosition, "RecenterPosition" }, // 1820364486
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_SetCpuAndGpuLevelsSVR, "SetCpuAndGpuLevelsSVR" }, // 3285933189
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setEyetrackingMarkerRadius, "setEyetrackingMarkerRadius" }, // 591394327
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationArea, "setTextureFoveationArea" }, // 3751816436
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusAmplitude, "setTextureFoveationFocusAmplitude" }, // 4145531155
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequency, "setTextureFoveationFocusFrequency" }, // 2261236839
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationFocusFrequencyRho, "setTextureFoveationFocusFrequencyRho" }, // 2845517516
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureFoveationGain, "setTextureFoveationGain" }, // 3919392973
		{ &Z_Construct_UFunction_USnapdragonVRHMDFunctionLibrary_setTextureMinimumPixelDensity, "setTextureMinimumPixelDensity" }, // 3089979708
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnapdragonVRHMDFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SnapdragonVRHMDFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapdragonVRHMDFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_Statics::ClassParams = {
		&USnapdragonVRHMDFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USnapdragonVRHMDFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapdragonVRHMDFunctionLibrary.OuterSingleton, Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapdragonVRHMDFunctionLibrary.OuterSingleton;
	}
	template<> SNAPDRAGONVRHMD_API UClass* StaticClass<USnapdragonVRHMDFunctionLibrary>()
	{
		return USnapdragonVRHMDFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapdragonVRHMDFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Public_SnapdragonVRHMDFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Public_SnapdragonVRHMDFunctionLibrary_h_Statics::EnumInfo[] = {
		{ ESnapdragonVRHMD_Eye_StaticEnum, TEXT("ESnapdragonVRHMD_Eye"), &Z_Registration_Info_UEnum_ESnapdragonVRHMD_Eye, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4131208653U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Public_SnapdragonVRHMDFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapdragonVRHMDFunctionLibrary, USnapdragonVRHMDFunctionLibrary::StaticClass, TEXT("USnapdragonVRHMDFunctionLibrary"), &Z_Registration_Info_UClass_USnapdragonVRHMDFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapdragonVRHMDFunctionLibrary), 225872606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Public_SnapdragonVRHMDFunctionLibrary_h_2045494155(TEXT("/Script/SnapdragonVRHMD"),
		Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Public_SnapdragonVRHMDFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Public_SnapdragonVRHMDFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Public_SnapdragonVRHMDFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRHMD_Public_SnapdragonVRHMDFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
