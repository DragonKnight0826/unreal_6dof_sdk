// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapdragonVRHMD_init() {}
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SnapdragonVRHMD;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SnapdragonVRHMD()
	{
		if (!Z_Registration_Info_UPackage__Script_SnapdragonVRHMD.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SnapdragonVRHMD",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x55491740,
				0x9DB18B55,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SnapdragonVRHMD.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SnapdragonVRHMD.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SnapdragonVRHMD(Z_Construct_UPackage__Script_SnapdragonVRHMD, TEXT("/Script/SnapdragonVRHMD"), Z_Registration_Info_UPackage__Script_SnapdragonVRHMD, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x55491740, 0x9DB18B55));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
