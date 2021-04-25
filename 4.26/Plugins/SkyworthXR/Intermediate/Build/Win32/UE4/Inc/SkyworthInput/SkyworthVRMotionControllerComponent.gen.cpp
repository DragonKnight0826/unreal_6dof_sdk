// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Classes/SkyworthVRMotionControllerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRMotionControllerComponent() {}
// Cross Module References
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRMotionControllerComponent_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRMotionControllerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SKYWORTHINPUT_API UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRPointerInputMode();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRPointer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USkyworthVRMotionControllerComponent::execGetCurrentPointerDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPointerDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRMotionControllerComponent::execSetPointerDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointerDistance(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRMotionControllerComponent::execGetLaserMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetLaserMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRMotionControllerComponent::execGetControllerMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetControllerMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyworthVRMotionControllerComponent::execGetMotionController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMotionControllerComponent**)Z_Param__Result=P_THIS->GetMotionController();
		P_NATIVE_END;
	}
	void USkyworthVRMotionControllerComponent::StaticRegisterNativesUSkyworthVRMotionControllerComponent()
	{
		UClass* Class = USkyworthVRMotionControllerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerMesh", &USkyworthVRMotionControllerComponent::execGetControllerMesh },
			{ "GetCurrentPointerDistance", &USkyworthVRMotionControllerComponent::execGetCurrentPointerDistance },
			{ "GetLaserMaterial", &USkyworthVRMotionControllerComponent::execGetLaserMaterial },
			{ "GetMotionController", &USkyworthVRMotionControllerComponent::execGetMotionController },
			{ "SetPointerDistance", &USkyworthVRMotionControllerComponent::execSetPointerDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics
	{
		struct SkyworthVRMotionControllerComponent_eventGetControllerMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRMotionControllerComponent_eventGetControllerMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRMotionController" },
		{ "Comment", "/** Get the StaticMeshComponent used to represent the controller.\n\x09 *  Can be used if you desire to modify the controller at runtime\n\x09 *  @return controller static mesh component.\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Get the StaticMeshComponent used to represent the controller.\nCan be used if you desire to modify the controller at runtime\n@return controller static mesh component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRMotionControllerComponent, nullptr, "GetControllerMesh", nullptr, nullptr, sizeof(SkyworthVRMotionControllerComponent_eventGetControllerMesh_Parms), Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics
	{
		struct SkyworthVRMotionControllerComponent_eventGetCurrentPointerDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRMotionControllerComponent_eventGetCurrentPointerDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRMotionController" },
		{ "Comment", "/** Get the Current Pointer Distance.\n\x09*  Can be used for debugging your scene\n\x09*  @return the distance used.\n\x09*/" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Get the Current Pointer Distance.\nCan be used for debugging your scene\n@return the distance used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRMotionControllerComponent, nullptr, "GetCurrentPointerDistance", nullptr, nullptr, sizeof(SkyworthVRMotionControllerComponent_eventGetCurrentPointerDistance_Parms), Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics
	{
		struct SkyworthVRMotionControllerComponent_eventGetLaserMaterial_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRMotionControllerComponent_eventGetLaserMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRMotionController" },
		{ "Comment", "/** Get the MaterialInstanceDynamic used to represent the laser material.\n\x09*  Can be used if you desire to modify the laser at runtime\n\x09*  (i.e. change laser color when pointing at object).\n\x09*  @return laser dynamic material instance.\n\x09*/" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Get the MaterialInstanceDynamic used to represent the laser material.\nCan be used if you desire to modify the laser at runtime\n(i.e. change laser color when pointing at object).\n@return laser dynamic material instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRMotionControllerComponent, nullptr, "GetLaserMaterial", nullptr, nullptr, sizeof(SkyworthVRMotionControllerComponent_eventGetLaserMaterial_Parms), Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics
	{
		struct SkyworthVRMotionControllerComponent_eventGetMotionController_Parms
		{
			UMotionControllerComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRMotionControllerComponent_eventGetMotionController_Parms, ReturnValue), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRMotionController" },
		{ "Comment", "/** Get the MotionControllerComponent.\n\x09 *  This is the MotionControllerComponent being used to position the\n\x09 *  Controller visuals.\n\x09 *  Can be used if you desire to attach any additional components\n\x09 *  As part of your visualization of the controller.\n\x09 *  @return motion controller component\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Get the MotionControllerComponent.\nThis is the MotionControllerComponent being used to position the\nController visuals.\nCan be used if you desire to attach any additional components\nAs part of your visualization of the controller.\n@return motion controller component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRMotionControllerComponent, nullptr, "GetMotionController", nullptr, nullptr, sizeof(SkyworthVRMotionControllerComponent_eventGetMotionController_Parms), Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics
	{
		struct SkyworthVRMotionControllerComponent_eventSetPointerDistance_Parms
		{
			float Distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRMotionControllerComponent_eventSetPointerDistance_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkyworthVRMotionController" },
		{ "Comment", "/** Set the distance of the pointer.\n\x09 *  This will update the distance of the laser and the reticle\n\x09 *  based upon the min and max distances.\n\x09 *  @param Distance - new distance\n\x09 */" },
		{ "Keywords", "SVR" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Set the distance of the pointer.\nThis will update the distance of the laser and the reticle\nbased upon the min and max distances.\n@param Distance - new distance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRMotionControllerComponent, nullptr, "SetPointerDistance", nullptr, nullptr, sizeof(SkyworthVRMotionControllerComponent_eventSetPointerDistance_Parms), Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkyworthVRMotionControllerComponent_NoRegister()
	{
		return USkyworthVRMotionControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerTouchPointMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerTouchPointMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchpadMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchpadMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AppMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerTouchPointMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerTouchPointMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerBatteryMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerBatteryMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryTextureParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BatteryTextureParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryUnknownTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BatteryUnknownTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryFullTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BatteryFullTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryAlmostFullTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BatteryAlmostFullTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryMediumTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BatteryMediumTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryLowTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BatteryLowTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryCriticalLowTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BatteryCriticalLowTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryChargingTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BatteryChargingTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterRadiusCoeff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnterRadiusCoeff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitRadiusCoeff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExitRadiusCoeff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserVisualComponentTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LaserVisualComponentTag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PointerInputMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerInputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PointerInputMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequireInputComponent_MetaData[];
#endif
		static void NewProp_RequireInputComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequireInputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLockedToHead_MetaData[];
#endif
		static void NewProp_IsLockedToHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLockedToHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TranslucentSortPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetControllerMesh, "GetControllerMesh" }, // 2290933205
		{ &Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetCurrentPointerDistance, "GetCurrentPointerDistance" }, // 3881885590
		{ &Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetLaserMaterial, "GetLaserMaterial" }, // 1916299970
		{ &Z_Construct_UFunction_USkyworthVRMotionControllerComponent_GetMotionController, "GetMotionController" }, // 2299089977
		{ &Z_Construct_UFunction_USkyworthVRMotionControllerComponent_SetPointerDistance, "SetPointerDistance" }, // 1251755846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SkyworthInput" },
		{ "Comment", "/**\n * SkyworthVRMotionControllerComponent is a customizable Daydream Motion Controller.\n *\n * It uses the standard unreal MotionControllerComponent to control position and orientation,\n * and adds the following features:\n *\n * Controller Visualization:\n * Renders a skinnable 3D model that responds to button presses on the controller,\n * as well as a laser and reticle.\n *\n * Pointer Input Integration:\n * Integrates with GoogleVRPointerInputComponent so that the motion controller can easily be used to interact with\n * Actors and widgets.\n *\n * Controller Connection Status:\n * The controller visual and pointer input will automatically be turned off when the controller is disconnected.\n * If the component is activated while the controller is disconnected, then the controller visual and pointer input\n * will be off initially. When the controller becomes connected, they will automatically turn on.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SkyworthVRMotionControllerComponent.h" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "SkyworthVRMotionControllerComponent is a customizable Daydream Motion Controller.\n\nIt uses the standard unreal MotionControllerComponent to control position and orientation,\nand adds the following features:\n\nController Visualization:\nRenders a skinnable 3D model that responds to button presses on the controller,\nas well as a laser and reticle.\n\nPointer Input Integration:\nIntegrates with GoogleVRPointerInputComponent so that the motion controller can easily be used to interact with\nActors and widgets.\n\nController Connection Status:\nThe controller visual and pointer input will automatically be turned off when the controller is disconnected.\nIf the component is activated while the controller is disconnected, then the controller visual and pointer input\nwill be off initially. When the controller becomes connected, they will automatically turn on." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Mesh used for controller. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Mesh used for controller." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerMesh = { "ControllerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, ControllerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TriggerMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TriggerMesh = { "TriggerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, TriggerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TriggerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TriggerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Mesh used for controller touch point. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Mesh used for controller touch point." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMesh = { "ControllerTouchPointMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, ControllerTouchPointMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IdleMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Material used when idle. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Material used when idle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IdleMaterial = { "IdleMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, IdleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IdleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IdleMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TouchpadMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Material used when pressing the touchpad button. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Material used when pressing the touchpad button." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TouchpadMaterial = { "TouchpadMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, TouchpadMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TouchpadMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TouchpadMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_AppMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Material used when pressing the app button. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Material used when pressing the app button." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_AppMaterial = { "AppMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, AppMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_AppMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_AppMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_SystemMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Material used when pressing the system button. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Material used when pressing the system button." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_SystemMaterial = { "SystemMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, SystemMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_SystemMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_SystemMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Material used for touch point when touching the touch pad. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Material used for touch point when touching the touch pad." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMaterial = { "ControllerTouchPointMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, ControllerTouchPointMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ParameterCollection_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Parameter collection used to set the alpha of all components.\n\x09 *  Must include property named \"GoogleVRMotionControllerAlpha\".\n\x09 */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Parameter collection used to set the alpha of all components.\nMust include property named \"GoogleVRMotionControllerAlpha\"." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerBatteryMesh_MetaData[] = {
		{ "Category", "Battery" },
		{ "Comment", "/** Mesh used for controller battery state. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Mesh used for controller battery state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerBatteryMesh = { "ControllerBatteryMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, ControllerBatteryMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerBatteryMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerBatteryMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryTextureParameterName_MetaData[] = {
		{ "Category", "Battery" },
		{ "Comment", "/** Texture parameter name for the battery material. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Texture parameter name for the battery material." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryTextureParameterName = { "BatteryTextureParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, BatteryTextureParameterName), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryTextureParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryTextureParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryUnknownTexture_MetaData[] = {
		{ "Category", "Battery" },
		{ "Comment", "/** Texture used for the battery unknown state. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Texture used for the battery unknown state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryUnknownTexture = { "BatteryUnknownTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, BatteryUnknownTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryUnknownTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryUnknownTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryFullTexture_MetaData[] = {
		{ "Category", "Battery" },
		{ "Comment", "/** Texture used for the battery full state. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Texture used for the battery full state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryFullTexture = { "BatteryFullTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, BatteryFullTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryFullTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryFullTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryAlmostFullTexture_MetaData[] = {
		{ "Category", "Battery" },
		{ "Comment", "/** Texture used for the battery almost full state. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Texture used for the battery almost full state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryAlmostFullTexture = { "BatteryAlmostFullTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, BatteryAlmostFullTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryAlmostFullTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryAlmostFullTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryMediumTexture_MetaData[] = {
		{ "Category", "Battery" },
		{ "Comment", "/** Texture used for the battery medium state. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Texture used for the battery medium state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryMediumTexture = { "BatteryMediumTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, BatteryMediumTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryMediumTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryMediumTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryLowTexture_MetaData[] = {
		{ "Category", "Battery" },
		{ "Comment", "/** Texture used for the battery low state. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Texture used for the battery low state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryLowTexture = { "BatteryLowTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, BatteryLowTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryLowTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryLowTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryCriticalLowTexture_MetaData[] = {
		{ "Category", "Battery" },
		{ "Comment", "/** Texture used for the battery critcally low state. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Texture used for the battery critcally low state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryCriticalLowTexture = { "BatteryCriticalLowTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, BatteryCriticalLowTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryCriticalLowTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryCriticalLowTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryChargingTexture_MetaData[] = {
		{ "Category", "Battery" },
		{ "Comment", "/** Texture used for the battery charging state. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Texture used for the battery charging state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryChargingTexture = { "BatteryChargingTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, BatteryChargingTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryChargingTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryChargingTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_EnterRadiusCoeff_MetaData[] = {
		{ "Category", "Ray" },
		{ "Comment", "/** The enter radius for the ray is the sprite size multiplied by this value.\n\x09 *  See ISkyworthVRPointer.h for details.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "The enter radius for the ray is the sprite size multiplied by this value.\nSee ISkyworthVRPointer.h for details." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_EnterRadiusCoeff = { "EnterRadiusCoeff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, EnterRadiusCoeff), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_EnterRadiusCoeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_EnterRadiusCoeff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ExitRadiusCoeff_MetaData[] = {
		{ "Category", "Ray" },
		{ "Comment", "/** The exit radius for the ray is the sprite size multiplied by this value.\n\x09 *  See ISkyworthVRPointer.h for details.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "The exit radius for the ray is the sprite size multiplied by this value.\nSee ISkyworthVRPointer.h for details." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ExitRadiusCoeff = { "ExitRadiusCoeff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, ExitRadiusCoeff), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ExitRadiusCoeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ExitRadiusCoeff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_LaserVisualComponentTag_MetaData[] = {
		{ "Category", "Ray" },
		{ "Comment", "/** The name of the LaserVisualComponent to use.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "The name of the LaserVisualComponent to use." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_LaserVisualComponentTag = { "LaserVisualComponentTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, LaserVisualComponentTag), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_LaserVisualComponentTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_LaserVisualComponentTag_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_PointerInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_PointerInputMode_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Determines the method used to detect what the pointer hits. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "Determines the method used to detect what the pointer hits." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_PointerInputMode = { "PointerInputMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, PointerInputMode), Z_Construct_UEnum_SkyworthInput_ESkyworthVRPointerInputMode, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_PointerInputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_PointerInputMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_RequireInputComponent_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If true, then a SkyworthVRInputComponent will automatically be created if one doesn't already exist. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "If true, then a SkyworthVRInputComponent will automatically be created if one doesn't already exist." },
	};
#endif
	void Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_RequireInputComponent_SetBit(void* Obj)
	{
		((USkyworthVRMotionControllerComponent*)Obj)->RequireInputComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_RequireInputComponent = { "RequireInputComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkyworthVRMotionControllerComponent), &Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_RequireInputComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_RequireInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_RequireInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IsLockedToHead_MetaData[] = {
		{ "Category", "Arm Model" },
		{ "Comment", "/** If true, the root of the pose is locked to the local position of the player's head. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "If true, the root of the pose is locked to the local position of the player's head." },
	};
#endif
	void Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IsLockedToHead_SetBit(void* Obj)
	{
		((USkyworthVRMotionControllerComponent*)Obj)->IsLockedToHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IsLockedToHead = { "IsLockedToHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkyworthVRMotionControllerComponent), &Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IsLockedToHead_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IsLockedToHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IsLockedToHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TranslucentSortPriority_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** TranslucentSortPriority to use when rendering.\n\x09 *  The reticle, the laser, and the controller mesh use TranslucentSortPriority.\n\x09 *  The controller touch point mesh uses TranslucentSortPriority+1, this makes sure that\n\x09 *  the touch point doesn't z-fight with the controller mesh.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/SkyworthVRMotionControllerComponent.h" },
		{ "ToolTip", "TranslucentSortPriority to use when rendering.\nThe reticle, the laser, and the controller mesh use TranslucentSortPriority.\nThe controller touch point mesh uses TranslucentSortPriority+1, this makes sure that\nthe touch point doesn't z-fight with the controller mesh." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TranslucentSortPriority = { "TranslucentSortPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRMotionControllerComponent, TranslucentSortPriority), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TranslucentSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TranslucentSortPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TriggerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IdleMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TouchpadMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_AppMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_SystemMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerTouchPointMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ControllerBatteryMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryTextureParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryUnknownTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryFullTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryAlmostFullTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryMediumTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryLowTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryCriticalLowTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_BatteryChargingTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_EnterRadiusCoeff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_ExitRadiusCoeff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_LaserVisualComponentTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_PointerInputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_PointerInputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_RequireInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_IsLockedToHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::NewProp_TranslucentSortPriority,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USkyworthVRPointer_NoRegister, (int32)VTABLE_OFFSET(USkyworthVRMotionControllerComponent, ISkyworthVRPointer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthVRMotionControllerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::ClassParams = {
		&USkyworthVRMotionControllerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRMotionControllerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRMotionControllerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRMotionControllerComponent, 1054144923);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRMotionControllerComponent>()
	{
		return USkyworthVRMotionControllerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRMotionControllerComponent(Z_Construct_UClass_USkyworthVRMotionControllerComponent, &USkyworthVRMotionControllerComponent::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRMotionControllerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRMotionControllerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
