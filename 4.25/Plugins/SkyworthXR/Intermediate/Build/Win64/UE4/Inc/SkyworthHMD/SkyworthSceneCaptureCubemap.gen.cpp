// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthHMD/Private/SkyworthSceneCaptureCubemap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthSceneCaptureCubemap() {}
// Cross Module References
	SKYWORTHHMD_API UClass* Z_Construct_UClass_USkyworthSceneCaptureCubemap_NoRegister();
	SKYWORTHHMD_API UClass* Z_Construct_UClass_USkyworthSceneCaptureCubemap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SkyworthHMD();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void USkyworthSceneCaptureCubemap::StaticRegisterNativesUSkyworthSceneCaptureCubemap()
	{
	}
	UClass* Z_Construct_UClass_USkyworthSceneCaptureCubemap_NoRegister()
	{
		return USkyworthSceneCaptureCubemap::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CaptureComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthHMD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkyworthSceneCaptureCubemap.h" },
		{ "ModuleRelativePath", "Private/SkyworthSceneCaptureCubemap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SkyworthSceneCaptureCubemap.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::NewProp_CaptureComponents = { "CaptureComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthSceneCaptureCubemap, CaptureComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::NewProp_CaptureComponents_Inner = { "CaptureComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::NewProp_CaptureComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::NewProp_CaptureComponents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthSceneCaptureCubemap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::ClassParams = {
		&USkyworthSceneCaptureCubemap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthSceneCaptureCubemap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthSceneCaptureCubemap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthSceneCaptureCubemap, 3227437002);
	template<> SKYWORTHHMD_API UClass* StaticClass<USkyworthSceneCaptureCubemap>()
	{
		return USkyworthSceneCaptureCubemap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthSceneCaptureCubemap(Z_Construct_UClass_USkyworthSceneCaptureCubemap, &USkyworthSceneCaptureCubemap::StaticClass, TEXT("/Script/SkyworthHMD"), TEXT("USkyworthSceneCaptureCubemap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthSceneCaptureCubemap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
