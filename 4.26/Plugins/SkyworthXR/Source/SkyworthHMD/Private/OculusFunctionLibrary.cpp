// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SkyworthFunctionLibrary.h"
#include "OculusHMDPrivate.h"
#include "OculusHMD.h"
#include "Logging/MessageLog.h"

#define LOCTEXT_NAMESPACE "SkyworthFunctionLibrary"

//-------------------------------------------------------------------------------------------------
// UOculusFunctionLibrary
//-------------------------------------------------------------------------------------------------

USkyworthFunctionLibrary::USkyworthFunctionLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

SkyworthHMD::FSkyworthHMD* USkyworthFunctionLibrary::GetOculusHMD()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	if (GEngine && GEngine->XRSystem.IsValid())
	{
		if (GEngine->XRSystem->GetSystemName() == SkyworthHMD::FSkyworthHMD::OculusSystemName)
		{
			return static_cast<SkyworthHMD::FSkyworthHMD*>(GEngine->XRSystem.Get());
		}
	}
#endif
	return nullptr;
}

void USkyworthFunctionLibrary::GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD && OculusHMD->IsHeadTrackingAllowed())
	{
		FQuat HeadOrientation = FQuat::Identity;
		FVector HeadPosition = FVector::ZeroVector;

		OculusHMD->GetCurrentPose(OculusHMD->HMDDeviceId, HeadOrientation, HeadPosition);

		DeviceRotation = HeadOrientation.Rotator();
		DevicePosition = HeadPosition;
		NeckPosition = OculusHMD->GetNeckPosition(HeadOrientation, HeadPosition);
	}
	else
#endif // #if OCULUS_HMD_SUPPORTED_PLATFORMS
	{
		DeviceRotation = FRotator::ZeroRotator;
		DevicePosition = FVector::ZeroVector;
		NeckPosition = FVector::ZeroVector;
	}
}

void USkyworthFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, EOrientPositionSelector::Type Options)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		if ((Options == EOrientPositionSelector::Orientation) || (Options == EOrientPositionSelector::OrientationAndPosition))
		{
			OculusHMD->SetBaseRotation(Rotation);
		}
		if ((Options == EOrientPositionSelector::Position) || (Options == EOrientPositionSelector::OrientationAndPosition))
		{
			OculusHMD->SetBaseOffsetInMeters(BaseOffsetInMeters);
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void USkyworthFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		OutRotation = OculusHMD->GetBaseRotation();
		OutBaseOffsetInMeters = OculusHMD->GetBaseOffsetInMeters();
	}
	else
	{
		OutRotation = FRotator::ZeroRotator;
		OutBaseOffsetInMeters = FVector::ZeroVector;
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void USkyworthFunctionLibrary::GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, FSTrackedDeviceType DeviceType)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr && OculusHMD->IsHMDActive())
	{
		ovrpPoseStatef state;
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodePoseState3(ovrpStep_Render, OVRP_CURRENT_FRAMEINDEX, SkyworthHMD::ToOvrpNode(DeviceType), &state)))
		{
			AngularAcceleration = SkyworthHMD::ToFVector(state.AngularAcceleration);
			LinearAcceleration = SkyworthHMD::ToFVector(state.Acceleration);
			AngularVelocity = SkyworthHMD::ToFVector(state.AngularVelocity);
			LinearVelocity = SkyworthHMD::ToFVector(state.Velocity);
			TimeInSeconds = state.Time;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

bool USkyworthFunctionLibrary::IsDeviceTracked(FSTrackedDeviceType DeviceType)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr && OculusHMD->IsHMDActive())
	{
		ovrpBool Present;
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodePresent2(SkyworthHMD::ToOvrpNode(DeviceType), &Present)))
		{
			return Present != ovrpBool_False;
		}
		else
		{
			return false;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return false;
}

void USkyworthFunctionLibrary::SetCPUAndGPULevels(int CPULevel, int GPULevel)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr && OculusHMD->IsHMDActive())
	{
		OculusHMD->SetCPUAndGPULevel(CPULevel, GPULevel);
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void USkyworthFunctionLibrary::SetReorientHMDOnControllerRecenter(bool recenterMode)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr && OculusHMD->IsHMDActive())
	{
		ovrpBool ovrpBoolRecenter = recenterMode ? ovrpBool_True : ovrpBool_False;
		FSkyworthHMDModule::GetPluginWrapper().SetReorientHMDOnControllerRecenter(ovrpBoolRecenter);
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

bool USkyworthFunctionLibrary::GetUserProfile(FSHmdUserProfile& Profile)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		SkyworthHMD::FSkyworthHMD::UserProfile Data;
		if (OculusHMD->GetUserProfile(Data))
		{
			Profile.Name = "";
			Profile.Gender = "Unknown";
			Profile.PlayerHeight = 0.0f;
			Profile.EyeHeight = Data.EyeHeight;
			Profile.IPD = Data.IPD;
			Profile.NeckToEyeDistance = FVector2D(Data.EyeDepth, 0.0f);
			return true;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return false;
}

void USkyworthFunctionLibrary::SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, EOrientPositionSelector::Type Options)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		if (Options == EOrientPositionSelector::Orientation || Options == EOrientPositionSelector::OrientationAndPosition)
		{
			OculusHMD->SetBaseRotation(BaseRot);
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void USkyworthFunctionLibrary::GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		OutRot = OculusHMD->GetBaseRotation();
		OutPosOffset = FVector::ZeroVector;
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void USkyworthFunctionLibrary::AddLoadingSplashScreen(class UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		SkyworthHMD::FSplash* Splash = OculusHMD->GetSplash();
		if (Splash)
		{
			if (bClearBeforeAdd)
			{
				Splash->ClearSplashes();
			}

			FSkyworthSplashDesc Desc;
			Desc.LoadingTexture = Texture;
			Desc.QuadSizeInMeters = SizeInMeters;
			Desc.TransformInMeters = FTransform(Rotation, TranslationInMeters);
			Desc.DeltaRotation = FQuat(DeltaRotation);
			Splash->AddSplash(Desc);
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void USkyworthFunctionLibrary::ClearLoadingSplashScreens()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		SkyworthHMD::FSplash* Splash = OculusHMD->GetSplash();
		if (Splash)
		{
			Splash->ClearSplashes();
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

void USkyworthFunctionLibrary::ShowLoadingSplashScreen()
{
	FText Message = LOCTEXT("ShowLoadingSplashScreen",
		"UOculusFunctionLibrary::ShowLoadingSplashScreen has been deprecated and no longer functions as before.  Use the generic UStereoLayerFunctionLibrary::ShowSplashScreen instead");
	UE_LOG(LogHMD, Error, TEXT("%s"), *(Message.ToString()));
	FMessageLog("PIE").Error(Message);
}

void USkyworthFunctionLibrary::HideLoadingSplashScreen(bool bClear)
{
	FText Message = LOCTEXT("HideLoadingSplashScreenDeprecated",
		"UOculusFunctionLibrary::HideLoadingSplashScreen has been deprecated and no longer functions as before.  Use the generic UStereoLayerFunctionLibrary::HideSplashScreen instead");
	UE_LOG(LogHMD, Error, TEXT("%s"), *(Message.ToString()));
	FMessageLog("PIE").Error(Message);
}

void USkyworthFunctionLibrary::EnableAutoLoadingSplashScreen(bool bAutoShowEnabled)
{
	FText Message = LOCTEXT("EnableAutoLoadingSplashScreenDeprecated",
		"UOculusFunctionLibrary::EnableAutoLoadingSplashScreen has been deprecated and no longer functions as before.  Use the generic UStereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen instead");
	UE_LOG(LogHMD, Error, TEXT("%s"), *(Message.ToString()));
	FMessageLog("PIE").Error(Message);
}

bool USkyworthFunctionLibrary::IsAutoLoadingSplashScreenEnabled()
{
	FText Message = LOCTEXT("IsAutoLoadingSplashScreenEnabledDeprecated",
		"UOculusFunctionLibrary::IsAutoLoadingSplashScreenEnabled has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead.");
	UE_LOG(LogHMD, Error, TEXT("%s"), *(Message.ToString()));
	FMessageLog("PIE").Error(Message);

	return false;
}

void USkyworthFunctionLibrary::ShowLoadingIcon(class UTexture2D* Texture)
{
	FText Message = LOCTEXT("IsAutoLoadingSplashScreenEnabledDeprecated",
		"UOculusFunctionLibrary::ShowLoadingIcon has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead.");
	UE_LOG(LogHMD, Error, TEXT("%s"), *(Message.ToString()));
	FMessageLog("PIE").Error(Message);
}

void USkyworthFunctionLibrary::HideLoadingIcon()
{
	FText Message = LOCTEXT("HideLoadingIconDeprecated",
		"UOculusFunctionLibrary::HideLoadingIcon has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead.");
	UE_LOG(LogHMD, Error, TEXT("%s"), *(Message.ToString()));
	FMessageLog("PIE").Error(Message);
}

bool USkyworthFunctionLibrary::IsLoadingIconEnabled()
{
	FText Message = LOCTEXT("IsLoadingIconEnabledDeprecated",
		"UOculusFunctionLibrary::IsLoadingIconEnabled has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead.");
	UE_LOG(LogHMD, Error, TEXT("%s"), *(Message.ToString()));
	FMessageLog("PIE").Error(Message);
	return false;
}


void USkyworthFunctionLibrary::SetLoadingSplashParams(FString TexturePath, FVector DistanceInMeters, FVector2D SizeInMeters, FVector RotationAxis, float RotationDeltaInDeg)
{
	FText Message = LOCTEXT("SetLoadingSplashParamsDeprecated",
		"UOculusFunctionLibrary::SetLoadingSplashParams has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead.");
	UE_LOG(LogHMD, Error, TEXT("%s"), *(Message.ToString()));
	FMessageLog("PIE").Error(Message);
}

void USkyworthFunctionLibrary::GetLoadingSplashParams(FString& TexturePath, FVector& DistanceInMeters, FVector2D& SizeInMeters, FVector& RotationAxis, float& RotationDeltaInDeg)
{
	FText Message = LOCTEXT("GetLoadingSplashParamsDeprecated",
		"UOculusFunctionLibrary::GetLoadingSplashParams has been deprecated and no longer functions as before. Please use the generic UStereoLayerFunctionLibrary instead.");
	UE_LOG(LogHMD, Error, TEXT("%s"), *(Message.ToString()));
	FMessageLog("PIE").Error(Message);
}

bool USkyworthFunctionLibrary::HasInputFocus()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	const SkyworthHMD::FSkyworthHMD* const OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr && OculusHMD->IsHMDActive())
	{
		ovrpBool HasFocus;
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetAppHasInputFocus(&HasFocus)))
		{
			return HasFocus != ovrpBool_False;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return false;
}

bool USkyworthFunctionLibrary::HasSystemOverlayPresent()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	const SkyworthHMD::FSkyworthHMD* const OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr && OculusHMD->IsHMDActive())
	{
		ovrpBool HasFocus;
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetAppHasInputFocus(&HasFocus)))
		{
			return HasFocus == ovrpBool_False;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return false;
}

void USkyworthFunctionLibrary::GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization)
{
	IsGPUAvailable = false;
	GPUUtilization = 0.0f;

#if OCULUS_HMD_SUPPORTED_PLATFORMS
	const SkyworthHMD::FSkyworthHMD* const OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		ovrpBool GPUAvailable;
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetGPUUtilSupported(&GPUAvailable)))
		{
			IsGPUAvailable = (GPUAvailable != ovrpBool_False);
			FSkyworthHMDModule::GetPluginWrapper().GetGPUUtilLevel(&GPUUtilization);
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

float USkyworthFunctionLibrary::GetGPUFrameTime()
{
	float frameTime = 0;
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	const SkyworthHMD::FSkyworthHMD* const OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetGPUFrameTime(&frameTime)))
		{
			return frameTime;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return 0.0f;
}

void USkyworthFunctionLibrary::SetFixedFoveatedRenderingLevel(FSFixedFoveatedRenderingLevel level)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		OculusHMD->SetFixedFoveatedRenderingLevel(level);
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
}

FSFixedFoveatedRenderingLevel USkyworthFunctionLibrary::GetFixedFoveatedRenderingLevel()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		ovrpTiledMultiResLevel Lvl;
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetTiledMultiResLevel(&Lvl)))
		{
			return (FSFixedFoveatedRenderingLevel)Lvl;
		}
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return FSFixedFoveatedRenderingLevel::FFR_Off;
}

FString USkyworthFunctionLibrary::GetDeviceName()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		const char* NameString;
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetSystemProductName2(&NameString)) && NameString)
		{
			return FString(NameString);
		}
	}
#endif
	return FString();
}

TArray<float> USkyworthFunctionLibrary::GetAvailableDisplayFrequencies()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		int NumberOfFrequencies;
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetSystemDisplayAvailableFrequencies(NULL, &NumberOfFrequencies)))
		{
			TArray<float> freqArray;
			freqArray.SetNum(NumberOfFrequencies);
			FSkyworthHMDModule::GetPluginWrapper().GetSystemDisplayAvailableFrequencies(freqArray.GetData(), &NumberOfFrequencies);
			return freqArray;
		}
	}
#endif
	return TArray<float>();
}

float USkyworthFunctionLibrary::GetCurrentDisplayFrequency()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		float Frequency;
		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetSystemDisplayFrequency2(&Frequency)))
		{
			return Frequency;
		}
	}
#endif
	return 0.0f;
}

void USkyworthFunctionLibrary::SetDisplayFrequency(float RequestedFrequency)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		FSkyworthHMDModule::GetPluginWrapper().SetSystemDisplayFrequency(RequestedFrequency);
	}
#endif
}

void USkyworthFunctionLibrary::EnablePositionTracking(bool bPositionTracking)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		FSkyworthHMDModule::GetPluginWrapper().SetTrackingPositionEnabled2(bPositionTracking);
	}
#endif
}


void USkyworthFunctionLibrary::EnableOrientationTracking(bool bOrientationTracking)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		FSkyworthHMDModule::GetPluginWrapper().SetTrackingOrientationEnabled2(bOrientationTracking);
	}
#endif
}

void USkyworthFunctionLibrary::SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		OculusHMD->SetColorScaleAndOffset(ColorScale, ColorOffset, bApplyToAllLayers);
	}
#endif
}

class IStereoLayers* USkyworthFunctionLibrary::GetStereoLayers()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		return OculusHMD;
	}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS
	return nullptr;
}

/** Helper that converts EBoundaryType to ovrpBoundaryType */
#if OCULUS_HMD_SUPPORTED_PLATFORMS
static ovrpBoundaryType ToOvrpBoundaryType(FSBoundaryType Source)
{
	switch (Source)
	{
	case FSBoundaryType::Boundary_PlayArea:
		return ovrpBoundary_PlayArea;

	case FSBoundaryType::Boundary_Outer:
	default:
		return ovrpBoundary_Outer;
	}
}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS

bool USkyworthFunctionLibrary::IsGuardianConfigured()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		ovrpBool boundaryConfigured;
		return OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetBoundaryConfigured2(&boundaryConfigured)) && boundaryConfigured;
	}
#endif
	return false;
}

bool USkyworthFunctionLibrary::IsGuardianDisplayed()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		ovrpBool boundaryVisible;
		return OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetBoundaryVisible2(&boundaryVisible)) && boundaryVisible;
	}
#endif
	return false;
}

TArray<FVector> USkyworthFunctionLibrary::GetGuardianPoints(FSBoundaryType BoundaryType, bool UsePawnSpace /* = false */)
{
	TArray<FVector> BoundaryPointList;
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		ovrpBoundaryType obt = ToOvrpBoundaryType(BoundaryType);
		int NumPoints = 0;

		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetBoundaryGeometry3(obt, NULL, &NumPoints)))
		{
			//allocate points
			const int BufferSize = NumPoints;
			ovrpVector3f* BoundaryPoints = new ovrpVector3f[BufferSize];

			if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetBoundaryGeometry3(obt, BoundaryPoints, &NumPoints)))
			{
				NumPoints = FMath::Min(BufferSize, NumPoints);
				check(NumPoints <= BufferSize); // For static analyzer
				BoundaryPointList.Reserve(NumPoints);

				for (int i = 0; i < NumPoints; i++)
				{
					FVector point;
					if (UsePawnSpace)
					{
						point = OculusHMD->ConvertVector_M2U(BoundaryPoints[i]);
					}
					else
					{
						point = OculusHMD->ScaleAndMovePointWithPlayer(BoundaryPoints[i]);
					}
					BoundaryPointList.Add(point);
				}
			}

			delete[] BoundaryPoints;
		}
	}
#endif
	return BoundaryPointList;
}

FVector USkyworthFunctionLibrary::GetGuardianDimensions(FSBoundaryType BoundaryType)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		ovrpBoundaryType obt = ToOvrpBoundaryType(BoundaryType);
		ovrpVector3f Dimensions;

		if (OVRP_FAILURE(FSkyworthHMDModule::GetPluginWrapper().GetBoundaryDimensions2(obt, &Dimensions)))
			return FVector::ZeroVector;

		Dimensions.z *= -1.0;
		return OculusHMD->ConvertVector_M2U(Dimensions);
	}
#endif
	return FVector::ZeroVector;
}

FTransform USkyworthFunctionLibrary::GetPlayAreaTransform()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		int NumPoints = 4;
		ovrpVector3f BoundaryPoints[4];

		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetBoundaryGeometry3(ovrpBoundary_PlayArea, BoundaryPoints, &NumPoints)))
		{	
			FVector ConvertedPoints[4];

			for (int i = 0; i < NumPoints; i++)
			{
				ConvertedPoints[i] = OculusHMD->ScaleAndMovePointWithPlayer(BoundaryPoints[i]);
			}

			float metersScale = OculusHMD->GetWorldToMetersScale();

			FVector Edge = ConvertedPoints[1] - ConvertedPoints[0];
			float Angle = FMath::Acos((Edge).GetSafeNormal() | FVector::RightVector);
			FQuat Rotation(FVector::UpVector, Edge.X < 0 ? Angle : -Angle);
			
			FVector Position = (ConvertedPoints[0] + ConvertedPoints[1] + ConvertedPoints[2] + ConvertedPoints[3]) / 4;
			FVector Scale(FVector::Distance(ConvertedPoints[3], ConvertedPoints[0]) / metersScale, FVector::Distance(ConvertedPoints[1], ConvertedPoints[0]) / metersScale, 1.0);

			return FTransform(Rotation, Position, Scale);
		}
	}
#endif
	return FTransform();
}

FSGuardianTestResult USkyworthFunctionLibrary::GetPointGuardianIntersection(const FVector Point, FSBoundaryType BoundaryType)
{
	FSGuardianTestResult InteractionInfo;
	memset(&InteractionInfo, 0, sizeof(FSGuardianTestResult));

#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		ovrpVector3f OvrpPoint = OculusHMD->WorldLocationToOculusPoint(Point);
		ovrpBoundaryType OvrpBoundaryType = ToOvrpBoundaryType(BoundaryType);
		ovrpBoundaryTestResult InteractionResult;

		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().TestBoundaryPoint2(OvrpPoint, OvrpBoundaryType, &InteractionResult)))
		{
			InteractionInfo.IsTriggering = (InteractionResult.IsTriggering != 0);
			InteractionInfo.ClosestDistance = OculusHMD->ConvertFloat_M2U(InteractionResult.ClosestDistance);
			InteractionInfo.ClosestPoint = OculusHMD->ScaleAndMovePointWithPlayer(InteractionResult.ClosestPoint);
			InteractionInfo.ClosestPointNormal = OculusHMD->ConvertVector_M2U(InteractionResult.ClosestPointNormal);
			InteractionInfo.DeviceType = FSTrackedDeviceType::None;
		}
	}
#endif

	return InteractionInfo;
}

FSGuardianTestResult USkyworthFunctionLibrary::GetNodeGuardianIntersection(FSTrackedDeviceType DeviceType, FSBoundaryType BoundaryType)
{
	FSGuardianTestResult InteractionInfo;
	memset(&InteractionInfo, 0, sizeof(FSGuardianTestResult));

#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		ovrpNode OvrpNode = SkyworthHMD::ToOvrpNode(DeviceType);
		ovrpBoundaryType OvrpBoundaryType = ToOvrpBoundaryType(BoundaryType);
		ovrpBoundaryTestResult TestResult;

		if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().TestBoundaryNode2(OvrpNode, ovrpBoundary_PlayArea, &TestResult)) && TestResult.IsTriggering)
		{
			InteractionInfo.IsTriggering = true;
			InteractionInfo.DeviceType = SkyworthHMD::ToETrackedDeviceType(OvrpNode);
			InteractionInfo.ClosestDistance = OculusHMD->ConvertFloat_M2U(TestResult.ClosestDistance);
			InteractionInfo.ClosestPoint = OculusHMD->ScaleAndMovePointWithPlayer(TestResult.ClosestPoint);
			InteractionInfo.ClosestPointNormal = OculusHMD->ConvertVector_M2U(TestResult.ClosestPointNormal);
		}
	}
#endif

	return InteractionInfo;
}

void USkyworthFunctionLibrary::SetGuardianVisibility(bool GuardianVisible)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	SkyworthHMD::FSkyworthHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		FSkyworthHMDModule::GetPluginWrapper().SetBoundaryVisible2(GuardianVisible);
	}
#endif
}

#undef LOCTEXT_NAMESPACE