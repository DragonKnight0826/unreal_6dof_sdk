// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyworthInput/Classes/SkyworthVRPointer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyworthVRPointer() {}
// Cross Module References
	SKYWORTHINPUT_API UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRPointerInputMode();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRPointer_NoRegister();
	SKYWORTHINPUT_API UClass* Z_Construct_UClass_USkyworthVRPointer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* ESkyworthVRPointerInputMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SkyworthInput_ESkyworthVRPointerInputMode, Z_Construct_UPackage__Script_SkyworthInput(), TEXT("ESkyworthVRPointerInputMode"));
		}
		return Singleton;
	}
	template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRPointerInputMode>()
	{
		return ESkyworthVRPointerInputMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkyworthVRPointerInputMode(ESkyworthVRPointerInputMode_StaticEnum, TEXT("/Script/SkyworthInput"), TEXT("ESkyworthVRPointerInputMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRPointerInputMode_Hash() { return 465192426U; }
	UEnum* Z_Construct_UEnum_SkyworthInput_ESkyworthVRPointerInputMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SkyworthInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkyworthVRPointerInputMode"), 0, Get_Z_Construct_UEnum_SkyworthInput_ESkyworthVRPointerInputMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkyworthVRPointerInputMode::Camera", (int64)ESkyworthVRPointerInputMode::Camera },
				{ "ESkyworthVRPointerInputMode::Direct", (int64)ESkyworthVRPointerInputMode::Direct },
				{ "ESkyworthVRPointerInputMode::HybridExperimental", (int64)ESkyworthVRPointerInputMode::HybridExperimental },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Camera.Comment", "/**\n\x09*  Sweep a sphere based on the pointer's radius from the camera through the target of the pointer.\n\x09*  This is ideal for reticles that are always rendered on top.\n\x09*  The object that is selected will always be the object that appears\n\x09*  underneath the reticle from the perspective of the camera.\n\x09*  This also prevents the reticle from appearing to \"jump\" when it starts/stops hitting an object.\n\x09*\n\x09*  Note: This will prevent the user from pointing around an object to hit something that is out of sight.\n\x09*  This isn't a problem in a typical use case.\n\x09*/" },
				{ "Camera.Name", "ESkyworthVRPointerInputMode::Camera" },
				{ "Camera.ToolTip", "Sweep a sphere based on the pointer's radius from the camera through the target of the pointer.\nThis is ideal for reticles that are always rendered on top.\nThe object that is selected will always be the object that appears\nunderneath the reticle from the perspective of the camera.\nThis also prevents the reticle from appearing to \"jump\" when it starts/stops hitting an object.\n\nNote: This will prevent the user from pointing around an object to hit something that is out of sight.\nThis isn't a problem in a typical use case." },
				{ "Direct.Comment", "/**\n\x09*  Sweep a sphere based on the pointer's radius directly from the pointer origin.\n\x09*  This is ideal for full-length laser pointers.\n\x09*/" },
				{ "Direct.Name", "ESkyworthVRPointerInputMode::Direct" },
				{ "Direct.ToolTip", "Sweep a sphere based on the pointer's radius directly from the pointer origin.\nThis is ideal for full-length laser pointers." },
				{ "HybridExperimental.Comment", "/*\n\x09*  Default method for casting ray.\n\x09*  Combines the Camera and Direct raycast modes.\n\x09*  Uses a Direct ray up until the CameraRayIntersectionDistance, and then switches to use\n\x09*  a Camera ray starting from the point where the two rays intersect.\n\x09*\n\x09*  This is the most versatile raycast mode. Like Camera mode, this prevents the reticle\n\x09*  appearing jumpy. Additionally, it still allows the user to target objects that are close\n\x09*  to them by using the laser as a visual reference.\n\x09*/" },
				{ "HybridExperimental.Name", "ESkyworthVRPointerInputMode::HybridExperimental" },
				{ "HybridExperimental.ToolTip", "*  Default method for casting ray.\n*  Combines the Camera and Direct raycast modes.\n*  Uses a Direct ray up until the CameraRayIntersectionDistance, and then switches to use\n*  a Camera ray starting from the point where the two rays intersect.\n*\n*  This is the most versatile raycast mode. Like Camera mode, this prevents the reticle\n*  appearing jumpy. Additionally, it still allows the user to target objects that are close\n*  to them by using the laser as a visual reference." },
				{ "ModuleRelativePath", "Classes/SkyworthVRPointer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SkyworthInput,
				nullptr,
				"ESkyworthVRPointerInputMode",
				"ESkyworthVRPointerInputMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USkyworthVRPointer::StaticRegisterNativesUSkyworthVRPointer()
	{
	}
	UClass* Z_Construct_UClass_USkyworthVRPointer_NoRegister()
	{
		return USkyworthVRPointer::StaticClass();
	}
	struct Z_Construct_UClass_USkyworthVRPointer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyworthVRPointer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyworthInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyworthVRPointer_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/SkyworthVRPointer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyworthVRPointer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISkyworthVRPointer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyworthVRPointer_Statics::ClassParams = {
		&USkyworthVRPointer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USkyworthVRPointer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyworthVRPointer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyworthVRPointer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyworthVRPointer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyworthVRPointer, 3173068327);
	template<> SKYWORTHINPUT_API UClass* StaticClass<USkyworthVRPointer>()
	{
		return USkyworthVRPointer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyworthVRPointer(Z_Construct_UClass_USkyworthVRPointer, &USkyworthVRPointer::StaticClass, TEXT("/Script/SkyworthInput"), TEXT("USkyworthVRPointer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyworthVRPointer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
