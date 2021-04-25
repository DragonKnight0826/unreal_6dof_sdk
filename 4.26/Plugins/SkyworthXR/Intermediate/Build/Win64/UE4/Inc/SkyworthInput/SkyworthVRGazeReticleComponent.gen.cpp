// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Classes/SkyworthVRGazeReticleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRGazeReticleComponent() {}
// Cross Module References
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRGazeReticleComponent_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRGazeReticleComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRPointer_NoRegister();
// End Cross Module References
	void USkyworthVRGazeReticleComponent::StaticRegisterNativesUSkyworthVRGazeReticleComponent()
	{
	}
	UClass* Z_Construct_UClass_USkyworthVRGazeReticleComponent_NoRegister()
	{
		return USkyworthVRGazeReticleComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleDistanceMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleDistanceMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleDistanceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleDistanceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleInnerAngleMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleInnerAngleMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleOuterAngleMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleOuterAngleMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleGrowAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleGrowAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleGrowSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReticleGrowSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequireInputComponent_MetaData[];
#endif
		static void NewProp_RequireInputComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequireInputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SkyworthInput" },
		{ "Comment", "/**\n * SkyworthVRGazeReticleComponent is a customizable reticle used to interact with\n * actors and widgets by looking at them. Intended for use with Skyworth Cardboard appliations.\n *\n * This class integrates with SkyworthVRPointerInputComponent so that the reticle can easily be used to interact with\n * Actors and widgets.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SkyworthVRGazeReticleComponent.h" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "SkyworthVRGazeReticleComponent is a customizable reticle used to interact with\nactors and widgets by looking at them. Intended for use with Skyworth Cardboard appliations.\n\nThis class integrates with SkyworthVRPointerInputComponent so that the reticle can easily be used to interact with\nActors and widgets." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Mesh used for the reticle. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "Mesh used for the reticle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRGazeReticleComponent, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Material used for the reticle. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "Material used for the reticle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRGazeReticleComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMin_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Minimum distance of the reticle (in meters). */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "Minimum distance of the reticle (in meters)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMin = { "ReticleDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRGazeReticleComponent, ReticleDistanceMin), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMax_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Maximum distance of the reticle (in meters). */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "Maximum distance of the reticle (in meters)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMax = { "ReticleDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRGazeReticleComponent, ReticleDistanceMax), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleSize_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** A float to adjust the size of this reticle. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "A float to adjust the size of this reticle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleSize = { "ReticleSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRGazeReticleComponent, ReticleSize), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleInnerAngleMin_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Minimum inner angle of the reticle (in degrees). */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "Minimum inner angle of the reticle (in degrees)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleInnerAngleMin = { "ReticleInnerAngleMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRGazeReticleComponent, ReticleInnerAngleMin), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleInnerAngleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleInnerAngleMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleOuterAngleMin_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Minimum outer angle of the reticle (in degrees). */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "Minimum outer angle of the reticle (in degrees)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleOuterAngleMin = { "ReticleOuterAngleMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRGazeReticleComponent, ReticleOuterAngleMin), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleOuterAngleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleOuterAngleMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowAngle_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Angle at which to expand the reticle when intersecting with an object (in degrees). */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "Angle at which to expand the reticle when intersecting with an object (in degrees)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowAngle = { "ReticleGrowAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRGazeReticleComponent, ReticleGrowAngle), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowSpeed_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Growth speed multiplier for the reticle when it is expanding & contracting. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "Growth speed multiplier for the reticle when it is expanding & contracting." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowSpeed = { "ReticleGrowSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyworthVRGazeReticleComponent, ReticleGrowSpeed), METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_RequireInputComponent_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If true, then a SkyworthVRInputComponent will automatically be created if one doesn't already exist. */" },
		{ "ModuleRelativePath", "Classes/SkyworthVRGazeReticleComponent.h" },
		{ "ToolTip", "If true, then a SkyworthVRInputComponent will automatically be created if one doesn't already exist." },
	};
#endif
	void Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_RequireInputComponent_SetBit(void* Obj)
	{
		((USkyworthVRGazeReticleComponent*)Obj)->RequireInputComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_RequireInputComponent = { "RequireInputComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkyworthVRGazeReticleComponent), &Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_RequireInputComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_RequireInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_RequireInputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleDistanceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleInnerAngleMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleOuterAngleMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_ReticleGrowSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::NewProp_RequireInputComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USkyworthVRPointer_NoRegister, (int32)VTABLE_OFFSET(USkyworthVRGazeReticleComponent, ISkyworthVRPointer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyworthVRGazeReticleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::ClassParams = {
		&USkyworthVRGazeReticleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRGazeReticleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRGazeReticleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRGazeReticleComponent, 1721416240);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRGazeReticleComponent>()
	{
		return USkyworthVRGazeReticleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRGazeReticleComponent(Z_Construct_UClass_USkyworthVRGazeReticleComponent, &USkyworthVRGazeReticleComponent::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRGazeReticleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRGazeReticleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
