// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Classes/SkyworthVRLaserVisual.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRLaserVisual() {}
// Cross Module References
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRLaserVisual_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRLaserVisual();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
// End Cross Module References
	void USkyworthVRLaserVisual::StaticRegisterNativesUSkyworthVRLaserVisual()
	{
	}
	UClass* Z_Construct_UClass_USkyworthVRLaserVisual_NoRegister()
	{
		return USkyworthVRLaserVisual::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRLaserVisual_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRLaserVisual_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserVisual_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* IGoogleVRLaserVisual is an interface for visual representation used with UGoogleVRLaserVisualComponent.\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SkyworthVRLaserVisual.h" },
		{ "ModuleRelativePath", "Classes/SkyworthVRLaserVisual.h" },
		{ "ToolTip", "IGoogleVRLaserVisual is an interface for visual representation used with UGoogleVRLaserVisualComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRLaserVisual_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthVRLaserVisual>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRLaserVisual_Statics::ClassParams = {
		&USkyworthVRLaserVisual::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserVisual_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserVisual_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRLaserVisual()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRLaserVisual_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRLaserVisual, 4077334658);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRLaserVisual>()
	{
		return USkyworthVRLaserVisual::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRLaserVisual(Z_Construct_UClass_USkyworthVRLaserVisual, &USkyworthVRLaserVisual::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRLaserVisual"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRLaserVisual);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
