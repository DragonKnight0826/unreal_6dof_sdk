// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnapdragonVRController/Classes/SnapdragonVRControllerEventManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapdragonVRControllerEventManager() {}
// Cross Module References
	SNAPDRAGONVRCONTROLLER_API UEnum* Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState();
	UPackage* Z_Construct_UPackage__Script_SnapdragonVRController();
	SNAPDRAGONVRCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	SNAPDRAGONVRCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature();
	SNAPDRAGONVRCONTROLLER_API UClass* Z_Construct_UClass_USnapdragonVRControllerEventManager_NoRegister();
	SNAPDRAGONVRCONTROLLER_API UClass* Z_Construct_UClass_USnapdragonVRControllerEventManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapdragonVRControllerState;
	static UEnum* ESnapdragonVRControllerState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRControllerState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapdragonVRControllerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState, Z_Construct_UPackage__Script_SnapdragonVRController(), TEXT("ESnapdragonVRControllerState"));
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRControllerState.OuterSingleton;
	}
	template<> SNAPDRAGONVRCONTROLLER_API UEnum* StaticEnum<ESnapdragonVRControllerState>()
	{
		return ESnapdragonVRControllerState_StaticEnum();
	}
	struct Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState_Statics::Enumerators[] = {
		{ "ESnapdragonVRControllerState::Disconnected", (int64)ESnapdragonVRControllerState::Disconnected },
		{ "ESnapdragonVRControllerState::Connected", (int64)ESnapdragonVRControllerState::Connected },
		{ "ESnapdragonVRControllerState::Connecting", (int64)ESnapdragonVRControllerState::Connecting },
		{ "ESnapdragonVRControllerState::Error", (int64)ESnapdragonVRControllerState::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Connected.Name", "ESnapdragonVRControllerState::Connected" },
		{ "Connecting.Name", "ESnapdragonVRControllerState::Connecting" },
		{ "Disconnected.Name", "ESnapdragonVRControllerState::Disconnected" },
		{ "Error.Name", "ESnapdragonVRControllerState::Error" },
		{ "ModuleRelativePath", "Classes/SnapdragonVRControllerEventManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRController,
		nullptr,
		"ESnapdragonVRControllerState",
		"ESnapdragonVRControllerState",
		Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState()
	{
		if (!Z_Registration_Info_UEnum_ESnapdragonVRControllerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapdragonVRControllerState.InnerSingleton, Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapdragonVRControllerState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics
	{
		struct _Script_SnapdragonVRController_eventSnapdragonVRControllerRecenterDelegate_Parms
		{
			int32 ControllerIndex;
			EControllerHand Hand;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRController_eventSnapdragonVRControllerRecenterDelegate_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRController_eventSnapdragonVRControllerRecenterDelegate_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2206298931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRControllerEventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRController, nullptr, "SnapdragonVRControllerRecenterDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::_Script_SnapdragonVRController_eventSnapdragonVRControllerRecenterDelegate_Parms), Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_SnapdragonVRController_eventSnapdragonVRControllerStateChangeDelegate_Parms
		{
			int32 ControllerIndex;
			EControllerHand hand;
			ESnapdragonVRControllerState NewControllerState;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_hand;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewControllerState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewControllerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRController_eventSnapdragonVRControllerStateChangeDelegate_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_hand = { "hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRController_eventSnapdragonVRControllerStateChangeDelegate_Parms, hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2206298931
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_NewControllerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_NewControllerState = { "NewControllerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SnapdragonVRController_eventSnapdragonVRControllerStateChangeDelegate_Parms, NewControllerState), Z_Construct_UEnum_SnapdragonVRController_ESnapdragonVRControllerState, METADATA_PARAMS(nullptr, 0) }; // 600780504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_NewControllerState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::NewProp_NewControllerState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRControllerEventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SnapdragonVRController, nullptr, "SnapdragonVRControllerStateChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::_Script_SnapdragonVRController_eventSnapdragonVRControllerStateChangeDelegate_Parms), Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USnapdragonVRControllerEventManager::StaticRegisterNativesUSnapdragonVRControllerEventManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapdragonVRControllerEventManager);
	UClass* Z_Construct_UClass_USnapdragonVRControllerEventManager_NoRegister()
	{
		return USnapdragonVRControllerEventManager::StaticClass();
	}
	struct Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerRecenteredDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerRecenteredDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerStateChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerStateChangedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SnapdragonVRController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnapdragonVRControllerEventManager.h" },
		{ "ModuleRelativePath", "Classes/SnapdragonVRControllerEventManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerRecenteredDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRControllerEventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerRecenteredDelegate = { "OnControllerRecenteredDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapdragonVRControllerEventManager, OnControllerRecenteredDelegate), Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerRecenteredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerRecenteredDelegate_MetaData)) }; // 2481727156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerStateChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SnapdragonVRControllerEventManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerStateChangedDelegate = { "OnControllerStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapdragonVRControllerEventManager, OnControllerStateChangedDelegate), Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerStateChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerStateChangedDelegate_MetaData)) }; // 3557016705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerRecenteredDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::NewProp_OnControllerStateChangedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapdragonVRControllerEventManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::ClassParams = {
		&USnapdragonVRControllerEventManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapdragonVRControllerEventManager()
	{
		if (!Z_Registration_Info_UClass_USnapdragonVRControllerEventManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapdragonVRControllerEventManager.OuterSingleton, Z_Construct_UClass_USnapdragonVRControllerEventManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapdragonVRControllerEventManager.OuterSingleton;
	}
	template<> SNAPDRAGONVRCONTROLLER_API UClass* StaticClass<USnapdragonVRControllerEventManager>()
	{
		return USnapdragonVRControllerEventManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapdragonVRControllerEventManager);
	struct Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRController_Classes_SnapdragonVRControllerEventManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRController_Classes_SnapdragonVRControllerEventManager_h_Statics::EnumInfo[] = {
		{ ESnapdragonVRControllerState_StaticEnum, TEXT("ESnapdragonVRControllerState"), &Z_Registration_Info_UEnum_ESnapdragonVRControllerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 600780504U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRController_Classes_SnapdragonVRControllerEventManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapdragonVRControllerEventManager, USnapdragonVRControllerEventManager::StaticClass, TEXT("USnapdragonVRControllerEventManager"), &Z_Registration_Info_UClass_USnapdragonVRControllerEventManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapdragonVRControllerEventManager), 2831243814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRController_Classes_SnapdragonVRControllerEventManager_h_1592965939(TEXT("/Script/SnapdragonVRController"),
		Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRController_Classes_SnapdragonVRControllerEventManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRController_Classes_SnapdragonVRControllerEventManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRController_Classes_SnapdragonVRControllerEventManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Android_Plugins_SnapdragonVR_SnapdragonVRHMD_Source_SnapdragonVRController_Classes_SnapdragonVRControllerEventManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
