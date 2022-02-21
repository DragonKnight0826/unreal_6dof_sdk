// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Classes/SkyworthVRComponentPointerResponder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRComponentPointerResponder() {}
// Cross Module References
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRComponentPointerResponder_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRComponentPointerResponder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISkyworthVRComponentPointerResponder::execOnPointerReleased)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerReleased_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRComponentPointerResponder::execOnPointerPressed)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerPressed_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRComponentPointerResponder::execOnPointerClick)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerClick_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRComponentPointerResponder::execOnPointerHover)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerHover_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRComponentPointerResponder::execOnPointerExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PreviousComponent);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerExit_Implementation(Z_Param_PreviousComponent,Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRComponentPointerResponder::execOnPointerEnter)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerEnter_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	void ISkyworthVRComponentPointerResponder::OnPointerClick(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerClick instead.");
	}
	void ISkyworthVRComponentPointerResponder::OnPointerEnter(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerEnter instead.");
	}
	void ISkyworthVRComponentPointerResponder::OnPointerExit(UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerExit instead.");
	}
	void ISkyworthVRComponentPointerResponder::OnPointerHover(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerHover instead.");
	}
	void ISkyworthVRComponentPointerResponder::OnPointerPressed(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerPressed instead.");
	}
	void ISkyworthVRComponentPointerResponder::OnPointerReleased(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerReleased instead.");
	}
	void USkyworthVRComponentPointerResponder::StaticRegisterNativesUSkyworthVRComponentPointerResponder()
	{
		UClass* Class = USkyworthVRComponentPointerResponder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPointerClick", &ISkyworthVRComponentPointerResponder::execOnPointerClick },
			{ "OnPointerEnter", &ISkyworthVRComponentPointerResponder::execOnPointerEnter },
			{ "OnPointerExit", &ISkyworthVRComponentPointerResponder::execOnPointerExit },
			{ "OnPointerHover", &ISkyworthVRComponentPointerResponder::execOnPointerHover },
			{ "OnPointerPressed", &ISkyworthVRComponentPointerResponder::execOnPointerPressed },
			{ "OnPointerReleased", &ISkyworthVRComponentPointerResponder::execOnPointerReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerClick_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerClick_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRComponentPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRComponentPointerResponder, nullptr, "OnPointerClick", nullptr, nullptr, sizeof(SkyworthVRComponentPointerResponder_eventOnPointerClick_Parms), Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerEnter_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerEnter_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRComponentPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRComponentPointerResponder, nullptr, "OnPointerEnter", nullptr, nullptr, sizeof(SkyworthVRComponentPointerResponder_eventOnPointerEnter_Parms), Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerExit_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerExit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_PreviousComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_PreviousComponent = { "PreviousComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerExit_Parms, PreviousComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_PreviousComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_PreviousComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::NewProp_PreviousComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRComponentPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRComponentPointerResponder, nullptr, "OnPointerExit", nullptr, nullptr, sizeof(SkyworthVRComponentPointerResponder_eventOnPointerExit_Parms), Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerHover_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerHover_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRComponentPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRComponentPointerResponder, nullptr, "OnPointerHover", nullptr, nullptr, sizeof(SkyworthVRComponentPointerResponder_eventOnPointerHover_Parms), Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerPressed_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerPressed_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRComponentPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRComponentPointerResponder, nullptr, "OnPointerPressed", nullptr, nullptr, sizeof(SkyworthVRComponentPointerResponder_eventOnPointerPressed_Parms), Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerReleased_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRComponentPointerResponder_eventOnPointerReleased_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRComponentPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRComponentPointerResponder, nullptr, "OnPointerReleased", nullptr, nullptr, sizeof(SkyworthVRComponentPointerResponder_eventOnPointerReleased_Parms), Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkyworthVRComponentPointerResponder_NoRegister()
	{
		return USkyworthVRComponentPointerResponder::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerClick, "OnPointerClick" }, // 2349552397
		{ &Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerEnter, "OnPointerEnter" }, // 3550883366
		{ &Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerExit, "OnPointerExit" }, // 2292087639
		{ &Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerHover, "OnPointerHover" }, // 100643109
		{ &Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerPressed, "OnPointerPressed" }, // 2483885909
		{ &Z_Construct_UFunction_USkyworthVRComponentPointerResponder_OnPointerReleased, "OnPointerReleased" }, // 1667112239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SkyworthVRComponentPointerResponder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISkyworthVRComponentPointerResponder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics::ClassParams = {
		&USkyworthVRComponentPointerResponder::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRComponentPointerResponder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRComponentPointerResponder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRComponentPointerResponder, 685837407);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRComponentPointerResponder>()
	{
		return USkyworthVRComponentPointerResponder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRComponentPointerResponder(Z_Construct_UClass_USkyworthVRComponentPointerResponder, &USkyworthVRComponentPointerResponder::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRComponentPointerResponder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRComponentPointerResponder);
	static FName NAME_USkyworthVRComponentPointerResponder_OnPointerClick = FName(TEXT("OnPointerClick"));
	void ISkyworthVRComponentPointerResponder::Execute_OnPointerClick(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRComponentPointerResponder::StaticClass()));
		SkyworthVRComponentPointerResponder_eventOnPointerClick_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRComponentPointerResponder_OnPointerClick);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRComponentPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRComponentPointerResponder::StaticClass())))
		{
			I->OnPointerClick_Implementation(HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRComponentPointerResponder_OnPointerEnter = FName(TEXT("OnPointerEnter"));
	void ISkyworthVRComponentPointerResponder::Execute_OnPointerEnter(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRComponentPointerResponder::StaticClass()));
		SkyworthVRComponentPointerResponder_eventOnPointerEnter_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRComponentPointerResponder_OnPointerEnter);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRComponentPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRComponentPointerResponder::StaticClass())))
		{
			I->OnPointerEnter_Implementation(HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRComponentPointerResponder_OnPointerExit = FName(TEXT("OnPointerExit"));
	void ISkyworthVRComponentPointerResponder::Execute_OnPointerExit(UObject* O, UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRComponentPointerResponder::StaticClass()));
		SkyworthVRComponentPointerResponder_eventOnPointerExit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRComponentPointerResponder_OnPointerExit);
		if (Func)
		{
			Parms.PreviousComponent=PreviousComponent;
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRComponentPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRComponentPointerResponder::StaticClass())))
		{
			I->OnPointerExit_Implementation(PreviousComponent,HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRComponentPointerResponder_OnPointerHover = FName(TEXT("OnPointerHover"));
	void ISkyworthVRComponentPointerResponder::Execute_OnPointerHover(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRComponentPointerResponder::StaticClass()));
		SkyworthVRComponentPointerResponder_eventOnPointerHover_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRComponentPointerResponder_OnPointerHover);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRComponentPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRComponentPointerResponder::StaticClass())))
		{
			I->OnPointerHover_Implementation(HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRComponentPointerResponder_OnPointerPressed = FName(TEXT("OnPointerPressed"));
	void ISkyworthVRComponentPointerResponder::Execute_OnPointerPressed(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRComponentPointerResponder::StaticClass()));
		SkyworthVRComponentPointerResponder_eventOnPointerPressed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRComponentPointerResponder_OnPointerPressed);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRComponentPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRComponentPointerResponder::StaticClass())))
		{
			I->OnPointerPressed_Implementation(HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRComponentPointerResponder_OnPointerReleased = FName(TEXT("OnPointerReleased"));
	void ISkyworthVRComponentPointerResponder::Execute_OnPointerReleased(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRComponentPointerResponder::StaticClass()));
		SkyworthVRComponentPointerResponder_eventOnPointerReleased_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRComponentPointerResponder_OnPointerReleased);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRComponentPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRComponentPointerResponder::StaticClass())))
		{
			I->OnPointerReleased_Implementation(HitResult,Source);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
