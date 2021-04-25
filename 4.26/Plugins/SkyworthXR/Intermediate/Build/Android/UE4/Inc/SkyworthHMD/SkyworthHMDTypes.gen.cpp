// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthHMD/Public/SkyworthHMDTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthHMDTypes() {}
// Cross Module References
	SKYWORTHHMD_API UScriptStruct* Z_Construct_UScriptStruct_FSkyworthSplashDesc();
	UPackage* Z_Construct_UPackage__Script_SkyworthHMD();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References
class UScriptStruct* FSkyworthSplashDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SKYWORTHHMD_API uint32 Get_Z_Construct_UScriptStruct_FSkyworthSplashDesc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyworthSplashDesc, Z_Construct_UPackage__Script_SkyworthHMD(), TEXT("SkyworthSplashDesc"), sizeof(FSkyworthSplashDesc), Get_Z_Construct_UScriptStruct_FSkyworthSplashDesc_Hash());
	}
	return Singleton;
}
template<> SKYWORTHHMD_API UScriptStruct* StaticStruct<FSkyworthSplashDesc>()
{
	return FSkyworthSplashDesc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkyworthSplashDesc(FSkyworthSplashDesc::StaticStruct, TEXT("/Script/SkyworthHMD"), TEXT("SkyworthSplashDesc"), false, nullptr, nullptr);
static struct FScriptStruct_SkyworthHMD_StaticRegisterNativesFSkyworthSplashDesc
{
	FScriptStruct_SkyworthHMD_StaticRegisterNativesFSkyworthSplashDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkyworthSplashDesc")),new UScriptStruct::TCppStructOps<FSkyworthSplashDesc>);
	}
} ScriptStruct_SkyworthHMD_StaticRegisterNativesFSkyworthSplashDesc;
	struct Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TexturePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformInMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformInMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadSizeInMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadSizeInMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyworthHMDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyworthSplashDesc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TexturePath_MetaData[] = {
		{ "AllowedClasses", "Texture" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SkyworthHMDTypes.h" },
		{ "ToolTip", "Texture to display" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkyworthSplashDesc, TexturePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TexturePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TransformInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SkyworthHMDTypes.h" },
		{ "ToolTip", "transform of center of quad (meters)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TransformInMeters = { "TransformInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkyworthSplashDesc, TransformInMeters), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TransformInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TransformInMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SkyworthHMDTypes.h" },
		{ "ToolTip", "Dimensions in meters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_QuadSizeInMeters = { "QuadSizeInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkyworthSplashDesc, QuadSizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_DeltaRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SkyworthHMDTypes.h" },
		{ "ToolTip", "A delta rotation that will be added each rendering frame (half rate of full vsync)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkyworthSplashDesc, DeltaRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_DeltaRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_DeltaRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SkyworthHMDTypes.h" },
		{ "ToolTip", "Texture offset amount from the top left corner." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureOffset = { "TextureOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkyworthSplashDesc, TextureOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SkyworthHMDTypes.h" },
		{ "ToolTip", "Texture scale." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkyworthSplashDesc, TextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SkyworthHMDTypes.h" },
		{ "ToolTip", "Whether the splash layer uses it's alpha channel." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((FSkyworthSplashDesc*)Obj)->bNoAlphaChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkyworthSplashDesc), &Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TexturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TransformInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_QuadSizeInMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_DeltaRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_TextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::NewProp_bNoAlphaChannel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthHMD,
		nullptr,
		&NewStructOps,
		"SkyworthSplashDesc",
		sizeof(FSkyworthSplashDesc),
		alignof(FSkyworthSplashDesc),
		Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyworthSplashDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkyworthSplashDesc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkyworthSplashDesc"), sizeof(FSkyworthSplashDesc), Get_Z_Construct_UScriptStruct_FSkyworthSplashDesc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkyworthSplashDesc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkyworthSplashDesc_Hash() { return 1639403129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
