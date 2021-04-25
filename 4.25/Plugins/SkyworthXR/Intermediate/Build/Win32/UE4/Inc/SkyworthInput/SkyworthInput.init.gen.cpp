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
void EmptyLinkFunctionForGeneratedCodeSkyworthInput_init() {}
	SKYWORTHINPUT_API UFunction* Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRControllerRecenterDelegate__DelegateSignature();
	SKYWORTHINPUT_API UFunction* Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRControllerStateChangeDelegate__DelegateSignature();
	SKYWORTHINPUT_API UFunction* Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRInputDelegate__DelegateSignature();
	SKYWORTHINPUT_API UFunction* Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRInputExitActorDelegate__DelegateSignature();
	SKYWORTHINPUT_API UFunction* Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRInputExitComponentDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SkyworthInput()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRControllerRecenterDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRControllerStateChangeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRInputDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRInputExitActorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyworthInput_SkyworthVRInputExitComponentDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SkyworthInput",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x11DFE6BD,
				0x59FB7BDF,
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
