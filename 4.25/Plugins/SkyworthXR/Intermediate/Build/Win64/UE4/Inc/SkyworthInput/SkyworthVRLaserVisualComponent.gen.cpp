// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Classes/SkyworthVRLaserVisualComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRLaserVisualComponent() {}
// Cross Module References
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRLaserVisualComponent_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRLaserVisualComponent();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRLaserVisual();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRLaserPlaneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USkyworthVRLaserVisualComponent::execSetPointerDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMetersScale);
		P_GET_STRUCT(FVector,Z_Param_CameraLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointerDistance(Z_Param_Distance,Z_Param_WorldToMetersScale,Z_Param_CameraLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRLaserVisualComponent::execGetLaserMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetLaserMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRLaserVisualComponent::execGetLaser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkyworthVRLaserPlaneComponent**)Z_Param__Result=P_THIS->GetLaser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRLaserVisualComponent::execGetReticle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialBillboardComponent**)Z_Param__Result=P_THIS->GetReticle();
		P_NATIVE_END;
	}
	void USkyworthVRLaserVisualComponent::StaticRegisterNativesUSkyworthVRLaserVisualComponent()
	{
		UClass* Class = USkyworthVRLaserVisualComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLaser", &USkyworthVRLaserVisualComponent::execGetLaser },
			{ "GetLaserMaterial", &USkyworthVRLaserVisualComponent::execGetLaserMaterial },
			{ "GetReticle", &USkyworthVRLaserVisualComponent::execGetReticle },
			{ "SetPointerDistance", &USkyworthVRLaserVisualComponent::execSetPointerDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics
	{
		struct SkyworthVRLaserVisualComponent_eventGetLaser_Parms
		{
			USkyworthVRLaserPlaneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRLaserVisualComponent_eventGetLaser_Parms, ReturnValue), Z_Construct_UClass_USkyworthVRLaserPlaneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRMotionController" },
		{ "Comment", "/** Get the Laser Plane Component.\n\x09*  Can be used if you desire to modify the laser at runtime\n\x09*  @return Laser Plane Component.\n\x09*/" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Get the Laser Plane Component.\nCan be used if you desire to modify the laser at runtime\n@return Laser Plane Component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRLaserVisualComponent, nullptr, "GetLaser", nullptr, nullptr, sizeof(SkyworthVRLaserVisualComponent_eventGetLaser_Parms), Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics
	{
		struct SkyworthVRLaserVisualComponent_eventGetLaserMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRLaserVisualComponent_eventGetLaserMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRMotionController" },
		{ "Comment", "/** Get the MaterialInstanceDynamic used to represent the laser material.\n\x09*  Can be used if you desire to modify the laser at runtime\n\x09*  (i.e. change laser color when pointing at object).\n\x09*  @return laser dynamic material instance.\n\x09*/" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Get the MaterialInstanceDynamic used to represent the laser material.\nCan be used if you desire to modify the laser at runtime\n(i.e. change laser color when pointing at object).\n@return laser dynamic material instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRLaserVisualComponent, nullptr, "GetLaserMaterial", nullptr, nullptr, sizeof(SkyworthVRLaserVisualComponent_eventGetLaserMaterial_Parms), Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics
	{
		struct SkyworthVRLaserVisualComponent_eventGetReticle_Parms
		{
			UMaterialBillboardComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRLaserVisualComponent_eventGetReticle_Parms, ReturnValue), Z_Construct_UClass_UMaterialBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRMotionController" },
		{ "Comment", "/** Get the MaterialBillboardComponent used to represent the reticle.\n\x09*  Can be used if you desire to modify the reticle at runtime\n\x09*  @return reticle billboard component.\n\x09*/" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Get the MaterialBillboardComponent used to represent the reticle.\nCan be used if you desire to modify the reticle at runtime\n@return reticle billboard component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRLaserVisualComponent, nullptr, "GetReticle", nullptr, nullptr, sizeof(SkyworthVRLaserVisualComponent_eventGetReticle_Parms), Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics
	{
		struct SkyworthVRLaserVisualComponent_eventSetPointerDistance_Parms
		{
			float Distance;
			float WorldToMetersScale;
			FVector CameraLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldToMetersScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRLaserVisualComponent_eventSetPointerDistance_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::NewProp_WorldToMetersScale = { "WorldToMetersScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRLaserVisualComponent_eventSetPointerDistance_Parms, WorldToMetersScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRLaserVisualComponent_eventSetPointerDistance_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::NewProp_CameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::NewProp_WorldToMetersScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRMotionController" },
		{ "Comment", "/** Set the distance of the pointer.\n\x09*  This will update the distance of the laser and the reticle\n\x09*  based upon the min and max distances.\n\x09*  @param Distance - new distance\n\x09*/" },
		{ "Keywords", "Cardboard AVR GVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Set the distance of the pointer.\nThis will update the distance of the laser and the reticle\nbased upon the min and max distances.\n@param Distance - new distance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRLaserVisualComponent, nullptr, "SetPointerDistance", nullptr, nullptr, sizeof(SkyworthVRLaserVisualComponent_eventSetPointerDistance_Parms), Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkyworthVRLaserVisualComponent_NoRegister()
	{
		return USkyworthVRLaserVisualComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserDistanceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaserDistanceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPointerDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPointerDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultReticleDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultReticleDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TranslucentSortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerReticleMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerReticleMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserPlaneMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserPlaneMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkyworthVRLaserVisual,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaser, "GetLaser" }, // 2610071247
		{ &Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetLaserMaterial, "GetLaserMaterial" }, // 1707698357
		{ &Z_Construct_UFunction_USkyworthVRLaserVisualComponent_GetReticle, "GetReticle" }, // 446650238
		{ &Z_Construct_UFunction_USkyworthVRLaserVisualComponent_SetPointerDistance, "SetPointerDistance" }, // 2368387059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SkyworthInput" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SkyworthVRLaserVisualComponent.h" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ReticleSize_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Size of the reticle (in meters) as seen from 1 meter */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Size of the reticle (in meters) as seen from 1 meter" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ReticleSize = { "ReticleSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRLaserVisualComponent, ReticleSize), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ReticleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ReticleSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserDistanceMax_MetaData[] = {
		{ "Category", "Laser" },
		{ "Comment", "/** Maximum distance of the pointer (in meters). */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Maximum distance of the pointer (in meters)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserDistanceMax = { "LaserDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRLaserVisualComponent, LaserDistanceMax), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserDistanceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_MaxPointerDistance_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Distance from the pointer that raycast hits will be detected. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Distance from the pointer that raycast hits will be detected." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_MaxPointerDistance = { "MaxPointerDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRLaserVisualComponent, MaxPointerDistance), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_MaxPointerDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_MaxPointerDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_DefaultReticleDistance_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Distance from the pointer that the reticle will be drawn at when hitting nothing. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Distance from the pointer that the reticle will be drawn at when hitting nothing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_DefaultReticleDistance = { "DefaultReticleDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRLaserVisualComponent, DefaultReticleDistance), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_DefaultReticleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_DefaultReticleDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_TranslucentSortPriority_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** TranslucentSortPriority to use when rendering.\n\x09*  The reticle, the laser, and the controller mesh use TranslucentSortPriority.\n\x09*  The controller touch point mesh uses TranslucentSortPriority+1, this makes sure that\n\x09*  the touch point doesn't z-fight with the controller mesh.\n\x09**/" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "TranslucentSortPriority to use when rendering.\nThe reticle, the laser, and the controller mesh use TranslucentSortPriority.\nThe controller touch point mesh uses TranslucentSortPriority+1, this makes sure that\nthe touch point doesn't z-fight with the controller mesh." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_TranslucentSortPriority = { "TranslucentSortPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRLaserVisualComponent, TranslucentSortPriority), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_TranslucentSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_TranslucentSortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ControllerReticleMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Material used for the reticle billboard. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Material used for the reticle billboard." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ControllerReticleMaterial = { "ControllerReticleMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRLaserVisualComponent, ControllerReticleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ControllerReticleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ControllerReticleMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserPlaneMesh_MetaData[] = {
		{ "Category", "Laser" },
		{ "Comment", "/** Static mesh used to represent the laser. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisualComponent.h" },
		{ "ToolTip", "Static mesh used to represent the laser." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserPlaneMesh = { "LaserPlaneMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRLaserVisualComponent, LaserPlaneMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserPlaneMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserPlaneMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ReticleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserDistanceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_MaxPointerDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_DefaultReticleDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_TranslucentSortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_ControllerReticleMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::NewProp_LaserPlaneMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthVRLaserVisualComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::ClassParams = {
		&USkyworthVRLaserVisualComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRLaserVisualComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRLaserVisualComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRLaserVisualComponent, 3468117936);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRLaserVisualComponent>()
	{
		return USkyworthVRLaserVisualComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRLaserVisualComponent(Z_Construct_UClass_USkyworthVRLaserVisualComponent, &USkyworthVRLaserVisualComponent::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRLaserVisualComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRLaserVisualComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
