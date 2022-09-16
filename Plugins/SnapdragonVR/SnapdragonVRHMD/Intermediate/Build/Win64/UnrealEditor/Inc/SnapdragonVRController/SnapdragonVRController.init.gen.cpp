// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapdragonVRController_init() {}
	SNAPDRAGONVRCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature();
	SNAPDRAGONVRCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SnapdragonVRController;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SnapdragonVRController()
	{
		if (!Z_Registration_Info_UPackage__Script_SnapdragonVRController.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerRecenterDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRController_SnapdragonVRControllerStateChangeDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SnapdragonVRController",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC53F8E37,
				0x80E8F383,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SnapdragonVRController.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SnapdragonVRController.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SnapdragonVRController(Z_Construct_UPackage__Script_SnapdragonVRController, TEXT("/Script/SnapdragonVRController"), Z_Registration_Info_UPackage__Script_SnapdragonVRController, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC53F8E37, 0x80E8F383));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
