// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Private/SkyworthVRLaserPlaneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRLaserPlaneComponent() {}
// Cross Module References
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRLaserPlaneComponent_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRLaserPlaneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
// End Cross Module References
	void USkyworthVRLaserPlaneComponent::StaticRegisterNativesUSkyworthVRLaserPlaneComponent()
	{
	}
	UClass* Z_Construct_UClass_USkyworthVRLaserPlaneComponent_NoRegister()
	{
		return USkyworthVRLaserPlaneComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserCorrectionParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LaserCorrectionParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserPlaneLengthParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LaserPlaneLengthParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SkyworthInput" },
		{ "Comment", "/**\n * UGoogleVRLaserPlaneComponent is a helper class used to render the targeting laser.\n * It maintains a dynamic material instance used to customize the visual appearance of\n * the targeting laser, and overrides CalcBounds() to place it's bounding sphere around\n * the rendered geometry.  The extrusion/billboarding happens in the vertex shader on\n * the mesh material.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SkyworthVRLaserPlaneComponent.h" },
		{ "ModuleRelativePath", "Private/SkyworthVRLaserPlaneComponent.h" },
		{ "ToolTip", "UGoogleVRLaserPlaneComponent is a helper class used to render the targeting laser.\nIt maintains a dynamic material instance used to customize the visual appearance of\nthe targeting laser, and overrides CalcBounds() to place it's bounding sphere around\nthe rendered geometry.  The extrusion/billboarding happens in the vertex shader on\nthe mesh material." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserCorrectionParameterName_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Material parameter name for controlling laser correction. */" },
		{ "ModuleRelativePath", "Private/SkyworthVRLaserPlaneComponent.h" },
		{ "ToolTip", "Material parameter name for controlling laser correction." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserCorrectionParameterName = { "LaserCorrectionParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRLaserPlaneComponent, LaserCorrectionParameterName), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserCorrectionParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserCorrectionParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserPlaneLengthParameterName_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Material parameter name for controlling laser length. */" },
		{ "ModuleRelativePath", "Private/SkyworthVRLaserPlaneComponent.h" },
		{ "ToolTip", "Material parameter name for controlling laser length." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserPlaneLengthParameterName = { "LaserPlaneLengthParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRLaserPlaneComponent, LaserPlaneLengthParameterName), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserPlaneLengthParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserPlaneLengthParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserCorrectionParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::NewProp_LaserPlaneLengthParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthVRLaserPlaneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::ClassParams = {
		&USkyworthVRLaserPlaneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRLaserPlaneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRLaserPlaneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRLaserPlaneComponent, 3134019742);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRLaserPlaneComponent>()
	{
		return USkyworthVRLaserPlaneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRLaserPlaneComponent(Z_Construct_UClass_USkyworthVRLaserPlaneComponent, &USkyworthVRLaserPlaneComponent::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRLaserPlaneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRLaserPlaneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
