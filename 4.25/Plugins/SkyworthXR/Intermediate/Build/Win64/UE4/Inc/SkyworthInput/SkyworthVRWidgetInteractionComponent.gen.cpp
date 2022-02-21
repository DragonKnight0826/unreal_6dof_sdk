// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Classes/SkyworthVRWidgetInteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRWidgetInteractionComponent() {}
// Cross Module References
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRWidgetInteractionComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
// End Cross Module References
	void USkyworthVRWidgetInteractionComponent::StaticRegisterNativesUSkyworthVRWidgetInteractionComponent()
	{
	}
	UClass* Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_NoRegister()
	{
		return USkyworthVRWidgetInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetInteractionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SkyworthInput" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SkyworthVRWidgetInteractionComponent.h" },
		{ "ModuleRelativePath", "Classes/SkyworthVRWidgetInteractionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthVRWidgetInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_Statics::ClassParams = {
		&USkyworthVRWidgetInteractionComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRWidgetInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRWidgetInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRWidgetInteractionComponent, 2206188816);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRWidgetInteractionComponent>()
	{
		return USkyworthVRWidgetInteractionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRWidgetInteractionComponent(Z_Construct_UClass_USkyworthVRWidgetInteractionComponent, &USkyworthVRWidgetInteractionComponent::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRWidgetInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRWidgetInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
