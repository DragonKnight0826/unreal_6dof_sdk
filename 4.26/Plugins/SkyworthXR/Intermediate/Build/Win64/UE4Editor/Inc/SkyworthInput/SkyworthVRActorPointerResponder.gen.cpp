// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Classes/SkyworthVRActorPointerResponder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRActorPointerResponder() {}
// Cross Module References
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRActorPointerResponder_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRActorPointerResponder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISkyworthVRActorPointerResponder::execOnPointerReleased)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerReleased_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRActorPointerResponder::execOnPointerPressed)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerPressed_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRActorPointerResponder::execOnPointerClick)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerClick_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRActorPointerResponder::execOnPointerComponentChanged)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PreviousComponent);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerComponentChanged_Implementation(Z_Param_PreviousComponent,Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRActorPointerResponder::execOnPointerHover)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerHover_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRActorPointerResponder::execOnPointerExit)
	{
		P_GET_OBJECT(AActor,Z_Param_PreviousActor);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerExit_Implementation(Z_Param_PreviousActor,Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkyworthVRActorPointerResponder::execOnPointerEnter)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_OBJECT(USkyworthVRPointerInputComponent,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerEnter_Implementation(Z_Param_Out_HitResult,Z_Param_Source);
		P_NATIVE_END;
	}
	void ISkyworthVRActorPointerResponder::OnPointerClick(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerClick instead.");
	}
	void ISkyworthVRActorPointerResponder::OnPointerComponentChanged(UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerComponentChanged instead.");
	}
	void ISkyworthVRActorPointerResponder::OnPointerEnter(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerEnter instead.");
	}
	void ISkyworthVRActorPointerResponder::OnPointerExit(AActor* PreviousActor, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerExit instead.");
	}
	void ISkyworthVRActorPointerResponder::OnPointerHover(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerHover instead.");
	}
	void ISkyworthVRActorPointerResponder::OnPointerPressed(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerPressed instead.");
	}
	void ISkyworthVRActorPointerResponder::OnPointerReleased(FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPointerReleased instead.");
	}
	void USkyworthVRActorPointerResponder::StaticRegisterNativesUSkyworthVRActorPointerResponder()
	{
		UClass* Class = USkyworthVRActorPointerResponder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPointerClick", &ISkyworthVRActorPointerResponder::execOnPointerClick },
			{ "OnPointerComponentChanged", &ISkyworthVRActorPointerResponder::execOnPointerComponentChanged },
			{ "OnPointerEnter", &ISkyworthVRActorPointerResponder::execOnPointerEnter },
			{ "OnPointerExit", &ISkyworthVRActorPointerResponder::execOnPointerExit },
			{ "OnPointerHover", &ISkyworthVRActorPointerResponder::execOnPointerHover },
			{ "OnPointerPressed", &ISkyworthVRActorPointerResponder::execOnPointerPressed },
			{ "OnPointerReleased", &ISkyworthVRActorPointerResponder::execOnPointerReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerClick_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerClick_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRActorPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRActorPointerResponder, nullptr, "OnPointerClick", nullptr, nullptr, sizeof(SkyworthVRActorPointerResponder_eventOnPointerClick_Parms), Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_PreviousComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_PreviousComponent = { "PreviousComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerComponentChanged_Parms, PreviousComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_PreviousComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_PreviousComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerComponentChanged_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerComponentChanged_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_PreviousComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRActorPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRActorPointerResponder, nullptr, "OnPointerComponentChanged", nullptr, nullptr, sizeof(SkyworthVRActorPointerResponder_eventOnPointerComponentChanged_Parms), Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerEnter_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerEnter_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRActorPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRActorPointerResponder, nullptr, "OnPointerEnter", nullptr, nullptr, sizeof(SkyworthVRActorPointerResponder_eventOnPointerEnter_Parms), Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_PreviousActor = { "PreviousActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerExit_Parms, PreviousActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerExit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerExit_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_PreviousActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRActorPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRActorPointerResponder, nullptr, "OnPointerExit", nullptr, nullptr, sizeof(SkyworthVRActorPointerResponder_eventOnPointerExit_Parms), Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerHover_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerHover_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRActorPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRActorPointerResponder, nullptr, "OnPointerHover", nullptr, nullptr, sizeof(SkyworthVRActorPointerResponder_eventOnPointerHover_Parms), Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerPressed_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerPressed_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRActorPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRActorPointerResponder, nullptr, "OnPointerPressed", nullptr, nullptr, sizeof(SkyworthVRActorPointerResponder_eventOnPointerPressed_Parms), Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerReleased_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyworthVRActorPointerResponder_eventOnPointerReleased_Parms, Source), Z_Construct_UClass_USkyworthVRPointerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointerResponder" },
		{ "ModuleRelativePath", "Classes/SkyworthVRActorPointerResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyworthVRActorPointerResponder, nullptr, "OnPointerReleased", nullptr, nullptr, sizeof(SkyworthVRActorPointerResponder_eventOnPointerReleased_Parms), Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkyworthVRActorPointerResponder_NoRegister()
	{
		return USkyworthVRActorPointerResponder::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerClick, "OnPointerClick" }, // 2473229739
		{ &Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerComponentChanged, "OnPointerComponentChanged" }, // 3959648307
		{ &Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerEnter, "OnPointerEnter" }, // 1988367691
		{ &Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerExit, "OnPointerExit" }, // 909881468
		{ &Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerHover, "OnPointerHover" }, // 1842086142
		{ &Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerPressed, "OnPointerPressed" }, // 3754427016
		{ &Z_Construct_UFunction_USkyworthVRActorPointerResponder_OnPointerReleased, "OnPointerReleased" }, // 607357603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SkyworthVRActorPointerResponder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISkyworthVRActorPointerResponder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics::ClassParams = {
		&USkyworthVRActorPointerResponder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRActorPointerResponder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRActorPointerResponder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRActorPointerResponder, 4216587475);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRActorPointerResponder>()
	{
		return USkyworthVRActorPointerResponder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRActorPointerResponder(Z_Construct_UClass_USkyworthVRActorPointerResponder, &USkyworthVRActorPointerResponder::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRActorPointerResponder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRActorPointerResponder);
	static FName NAME_USkyworthVRActorPointerResponder_OnPointerClick = FName(TEXT("OnPointerClick"));
	void ISkyworthVRActorPointerResponder::Execute_OnPointerClick(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRActorPointerResponder::StaticClass()));
		SkyworthVRActorPointerResponder_eventOnPointerClick_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRActorPointerResponder_OnPointerClick);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRActorPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRActorPointerResponder::StaticClass())))
		{
			I->OnPointerClick_Implementation(HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRActorPointerResponder_OnPointerComponentChanged = FName(TEXT("OnPointerComponentChanged"));
	void ISkyworthVRActorPointerResponder::Execute_OnPointerComponentChanged(UObject* O, UPrimitiveComponent* PreviousComponent, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRActorPointerResponder::StaticClass()));
		SkyworthVRActorPointerResponder_eventOnPointerComponentChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRActorPointerResponder_OnPointerComponentChanged);
		if (Func)
		{
			Parms.PreviousComponent=PreviousComponent;
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRActorPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRActorPointerResponder::StaticClass())))
		{
			I->OnPointerComponentChanged_Implementation(PreviousComponent,HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRActorPointerResponder_OnPointerEnter = FName(TEXT("OnPointerEnter"));
	void ISkyworthVRActorPointerResponder::Execute_OnPointerEnter(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRActorPointerResponder::StaticClass()));
		SkyworthVRActorPointerResponder_eventOnPointerEnter_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRActorPointerResponder_OnPointerEnter);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRActorPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRActorPointerResponder::StaticClass())))
		{
			I->OnPointerEnter_Implementation(HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRActorPointerResponder_OnPointerExit = FName(TEXT("OnPointerExit"));
	void ISkyworthVRActorPointerResponder::Execute_OnPointerExit(UObject* O, AActor* PreviousActor, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRActorPointerResponder::StaticClass()));
		SkyworthVRActorPointerResponder_eventOnPointerExit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRActorPointerResponder_OnPointerExit);
		if (Func)
		{
			Parms.PreviousActor=PreviousActor;
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRActorPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRActorPointerResponder::StaticClass())))
		{
			I->OnPointerExit_Implementation(PreviousActor,HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRActorPointerResponder_OnPointerHover = FName(TEXT("OnPointerHover"));
	void ISkyworthVRActorPointerResponder::Execute_OnPointerHover(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRActorPointerResponder::StaticClass()));
		SkyworthVRActorPointerResponder_eventOnPointerHover_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRActorPointerResponder_OnPointerHover);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRActorPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRActorPointerResponder::StaticClass())))
		{
			I->OnPointerHover_Implementation(HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRActorPointerResponder_OnPointerPressed = FName(TEXT("OnPointerPressed"));
	void ISkyworthVRActorPointerResponder::Execute_OnPointerPressed(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRActorPointerResponder::StaticClass()));
		SkyworthVRActorPointerResponder_eventOnPointerPressed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRActorPointerResponder_OnPointerPressed);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRActorPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRActorPointerResponder::StaticClass())))
		{
			I->OnPointerPressed_Implementation(HitResult,Source);
		}
	}
	static FName NAME_USkyworthVRActorPointerResponder_OnPointerReleased = FName(TEXT("OnPointerReleased"));
	void ISkyworthVRActorPointerResponder::Execute_OnPointerReleased(UObject* O, FHitResult const& HitResult, USkyworthVRPointerInputComponent* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkyworthVRActorPointerResponder::StaticClass()));
		SkyworthVRActorPointerResponder_eventOnPointerReleased_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkyworthVRActorPointerResponder_OnPointerReleased);
		if (Func)
		{
			Parms.HitResult=HitResult;
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkyworthVRActorPointerResponder*)(O->GetNativeInterfaceAddress(USkyworthVRActorPointerResponder::StaticClass())))
		{
			I->OnPointerReleased_Implementation(HitResult,Source);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
