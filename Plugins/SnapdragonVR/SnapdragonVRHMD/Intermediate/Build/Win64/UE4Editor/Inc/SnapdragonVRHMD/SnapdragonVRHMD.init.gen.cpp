// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapdragonVRHMD_init() {}
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature();
	SNAPDRAGONVRHMD_API UFunction* Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SnapdragonVRHMD()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSdkServiceDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRThermalDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRModeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SnapdragonVRHMD_SnapdragonVRSensorDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SnapdragonVRHMD",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x58DAD584,
				0x1B09193F,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
