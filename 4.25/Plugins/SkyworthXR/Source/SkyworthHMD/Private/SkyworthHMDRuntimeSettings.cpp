// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SkyworthHMDRuntimeSettings.h"

//////////////////////////////////////////////////////////////////////////
// UOculusHMDRuntimeSettings

#include "OculusHMD_Settings.h"

USkyworthHMDRuntimeSettings::USkyworthHMDRuntimeSettings(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
, bEnableSystemSplash(true)
, bEnableHomeKey(true)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	// FSettings is the sole source of truth for Oculus default settings
	SkyworthHMD::FSettings DefaultSettings; 
	bSupportsDash = DefaultSettings.Flags.bSupportsDash;
	bCompositesDepth = DefaultSettings.Flags.bCompositeDepth;
	bHQDistortion = DefaultSettings.Flags.bHQDistortion;
	bChromaCorrection = DefaultSettings.Flags.bChromaAbCorrectionEnabled;
	FFRLevel = DefaultSettings.FFRLevel;
	CPULevel = DefaultSettings.CPULevel;
	GPULevel = DefaultSettings.GPULevel;
	PixelDensityMin = DefaultSettings.PixelDensityMin;
	PixelDensityMax = DefaultSettings.PixelDensityMax;
	bRecenterHMDWithController = DefaultSettings.Flags.bRecenterHMDWithController;

#else
	// Some set of reasonable defaults, since blueprints are still available on non-Oculus platforms.
	bSupportsDash = false;
	bCompositesDepth = false;
	bHQDistortion = false;
	bChromaCorrection = false;
	FFRLevel = FSFixedFoveatedRenderingLevel::EFixedFoveatedRenderingLevel_Off;
	CPULevel = 2;
	GPULevel = 3;
	PixelDensityMin = 0.5f;
	PixelDensityMax = 1.0f;
	bRecenterHMDWithController = true;
#endif

	LoadFromIni();
}

void USkyworthHMDRuntimeSettings::LoadFromIni()
{
	const TCHAR* SkyworthSettings = TEXT("Skyworth.Settings");
	bool v;
	float f;
	FVector vec;

	if (GConfig->GetFloat(SkyworthSettings, TEXT("PixelDensityMax"), f, GEngineIni))
	{
		check(!FMath::IsNaN(f));
		PixelDensityMax = f;
	}
	if (GConfig->GetFloat(SkyworthSettings, TEXT("PixelDensityMin"), f, GEngineIni))
	{
		check(!FMath::IsNaN(f));
		PixelDensityMin = f;
	}
	if (GConfig->GetBool(SkyworthSettings, TEXT("bHQDistortion"), v, GEngineIni))
	{
		bHQDistortion = v;
	}
	if (GConfig->GetBool(SkyworthSettings, TEXT("bCompositeDepth"), v, GEngineIni))
	{
		bCompositesDepth = v;
	}
	if (GConfig->GetBool(SkyworthSettings, TEXT("bSupportsDash"), v, GEngineIni))
	{
		bSupportsDash = v;
	}
	/*if (GConfig->GetBool(SkyworthSettings, TEXT("bEnableHomeKey"), v, GEngineIni))
	{
		UE_LOG(LogHMD,Log,TEXT("XXXXXXXXXXXXXXXXX bEnableHomeKey"));
	}*/

}