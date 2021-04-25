// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthHMD/Public/SkyworthHMDRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthHMDRuntimeSettings() {}
// Cross Module References
	SKYWORTHHMD_API UClass* Z_Construct_UClass_USkyworthHMDRuntimeSettings_NoRegister();
	SKYWORTHHMD_API UClass* Z_Construct_UClass_USkyworthHMDRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SkyworthHMD();
// End Cross Module References
	void USkyworthHMDRuntimeSettings::StaticRegisterNativesUSkyworthHMDRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_USkyworthHMDRuntimeSettings_NoRegister()
	{
		return USkyworthHMDRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSystemSplash_MetaData[];
#endif
		static void NewProp_bEnableSystemSplash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSystemSplash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHomeKey_MetaData[];
#endif
		static void NewProp_bEnableHomeKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHomeKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthHMD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the OculusVR plugin.\n*/" },
		{ "IncludePath", "SkyworthHMDRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/SkyworthHMDRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the OculusVR plugin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableSystemSplash_MetaData[] = {
		{ "Category", "SplashScreen" },
		{ "DisplayName", "Use System Splash" },
		{ "ModuleRelativePath", "Public/SkyworthHMDRuntimeSettings.h" },
		{ "ToolTip", "If you want to use system splash, Please enable it!" },
	};
#endif
	void Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableSystemSplash_SetBit(void* Obj)
	{
		((USkyworthHMDRuntimeSettings*)Obj)->bEnableSystemSplash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableSystemSplash = { "bEnableSystemSplash", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkyworthHMDRuntimeSettings), &Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableSystemSplash_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableSystemSplash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableSystemSplash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableHomeKey_MetaData[] = {
		{ "Category", "Mobile" },
		{ "DisplayName", "Enable HomeKey" },
		{ "ModuleRelativePath", "Public/SkyworthHMDRuntimeSettings.h" },
		{ "ToolTip", "If you enable it, The application will back to launcher when you press the Home key." },
	};
#endif
	void Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableHomeKey_SetBit(void* Obj)
	{
		((USkyworthHMDRuntimeSettings*)Obj)->bEnableHomeKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableHomeKey = { "bEnableHomeKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkyworthHMDRuntimeSettings), &Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableHomeKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableHomeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableHomeKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableSystemSplash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::NewProp_bEnableHomeKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthHMDRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::ClassParams = {
		&USkyworthHMDRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthHMDRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthHMDRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthHMDRuntimeSettings, 2789022626);
	template<> SKYWORTHHMD_API UClass* StaticClass<USkyworthHMDRuntimeSettings>()
	{
		return USkyworthHMDRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthHMDRuntimeSettings(Z_Construct_UClass_USkyworthHMDRuntimeSettings, &USkyworthHMDRuntimeSettings::StaticClass, TEXT("/Script/SkyworthHMD"), TEXT("USkyworthHMDRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthHMDRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
