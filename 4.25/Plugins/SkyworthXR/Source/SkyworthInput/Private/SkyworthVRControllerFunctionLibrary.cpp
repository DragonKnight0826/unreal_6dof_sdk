// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkyworthVRControllerFunctionLibrary.h"
#include "SkyworthInput.h"
//#include "GoogleVRControllerPrivate.h"
#include "InputCoreTypes.h"
using namespace SkyworthInput;

USkyworthVRControllerFunctionLibrary::USkyworthVRControllerFunctionLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
}

FSkyworthInput* GetGoogleVRController()
{
	TArray<IMotionController*> MotionControllers = IModularFeatures::Get().GetModularFeatureImplementations<IMotionController>( IMotionController::GetModularFeatureName() );
	for( auto MotionController : MotionControllers )
	{
		if (MotionController != nullptr && MotionController->GetMotionControllerDeviceTypeName() == "SkyworthInput")
		{
			return static_cast<FSkyworthInput*>(MotionController);
		}
	}

	return nullptr;
}

ESkyworthVRControllerAPIStatus USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerAPIStatus()
{
//#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
//	FSkyworthInput* GVRController = GetGoogleVRController();
//	if(GVRController != nullptr)
//	{
//		return (ESkyworthVRControllerAPIStatus) GVRController->GetApiStatus();
//	}
//#endif
	return ESkyworthVRControllerAPIStatus::OK;
}

ESkyworthVRControllerState USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerState(EControllerHand Hand)
{
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetControllerState(Hand);
	}

	return ESkyworthVRControllerState::Disconnected;
}

ESkyworthVRControllerHandedness USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerHandedness()
{
	ESkyworthVRControllerHandedness HandednessPrefsEnum = ESkyworthVRControllerHandedness::Unknown;
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		int HandednessPrefsInt = GVRController->GetGVRControllerHandedness();
		if (HandednessPrefsInt == 0)
		{
			HandednessPrefsEnum = ESkyworthVRControllerHandedness::RightHanded;
		}
		else if (HandednessPrefsInt == 1)
		{
			HandednessPrefsEnum = ESkyworthVRControllerHandedness::LeftHanded;
		}
	}
	return HandednessPrefsEnum;
}

FVector USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerRawAccel(EControllerHand Hand)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	/*FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		gvr::ControllerState* ControllerState = GVRController->GetCachedControllerState(Hand);
		if (ControllerState)
		{
			gvr_vec3f ControllerAccel = ControllerState->GetAccel();
			return FVector(ControllerAccel.x, ControllerAccel.y, ControllerAccel.z);
		}
	}*/
#endif

	return FVector::ZeroVector;
}

FVector USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerRawGyro(EControllerHand Hand)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	/*FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		gvr::ControllerState* ControllerState = GVRController->GetCachedControllerState(Hand);
		if (ControllerState)
		{
			gvr_vec3f ControllerGyro = ControllerState->GetGyro();
			return FVector(ControllerGyro.x, ControllerGyro.y, ControllerGyro.z);
		}
	}*/
#endif

	return FVector::ZeroVector;
}

FRotator USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerOrientation(EControllerHand Hand)
{
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		FRotator orientation;
		FVector position;
		GVRController->GetControllerOrientationAndPosition(0, Hand, orientation, position, GVRController->GetWorldToMetersScale());
		return orientation;
	}
	return FRotator::ZeroRotator;
}


USkyworthVRControllerEventManager* USkyworthVRControllerFunctionLibrary::GetSkyworthVRControllerEventManager()
{
	return USkyworthVRControllerEventManager::GetInstance();
}

bool USkyworthVRControllerFunctionLibrary::IsArmModelEnabled()
{
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		GVRController->GetUseArmModel();
	}

	return false;
}

void USkyworthVRControllerFunctionLibrary::SetArmModelEnabled(bool bArmModelEnabled)
{
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		GVRController->SetUseArmModel(bArmModelEnabled);
	}
}

FVector USkyworthVRControllerFunctionLibrary::GetArmModelPointerPositionOffset()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		const gvr_arm_model::Vector3& Position = GVRController->GetArmModelController().GetPointerPositionOffset();
		return GVRController->ConvertGvrVectorToUnreal(Position.x(), Position.y(), Position.z(), GVRController->GetWorldToMetersScale());
	}
#endif

	return FVector::ZeroVector;
}

float USkyworthVRControllerFunctionLibrary::GetArmModelAddedElbowHeight()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetAddedElbowHeight();
	}
#endif

	return 0.0f;
}

void USkyworthVRControllerFunctionLibrary::SetArmModelAddedElbowHeight(float ElbowHeight)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		GVRController->GetArmModelController().SetAddedElbowHeight(ElbowHeight);
	}
#endif
}

float USkyworthVRControllerFunctionLibrary::GetArmModelAddedElbowDepth()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetAddedElbowDepth();
	}
#endif

	return 0.0f;
}

void USkyworthVRControllerFunctionLibrary::SetArmModelAddedElbowDepth(float ElbowDepth)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		GVRController->GetArmModelController().SetAddedElbowDepth(ElbowDepth);
	}
#endif
}

float USkyworthVRControllerFunctionLibrary::GetArmModelPointerTiltAngle()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetPointerTiltAngle();
	}
#endif

	return 0.0f;
}

void USkyworthVRControllerFunctionLibrary::SetArmModelPointerTiltAngle(float TiltAngle)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		GVRController->GetArmModelController().SetPointerTiltAngle(TiltAngle);
	}
#endif
}

bool USkyworthVRControllerFunctionLibrary::WillArmModelUseAccelerometer()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetUseAccelerometer();
	}
#endif

	return false;
}

void USkyworthVRControllerFunctionLibrary::SetWillArmModelUseAccelerometer(bool UseAccelerometer)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		GVRController->GetArmModelController().SetUseAccelerometer(UseAccelerometer);
	}
#endif
}

void USkyworthVRControllerFunctionLibrary::SetArmModelIsLockedToHead(bool IsLockedToHead)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if (GVRController != nullptr)
	{
		return GVRController->GetArmModelController().SetIsLockedToHead(IsLockedToHead);
	}
#endif
}

bool USkyworthVRControllerFunctionLibrary::GetArmModelIsLockedToHead()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if (GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetIsLockedToHead();
	}
#endif
	return false;
}

float USkyworthVRControllerFunctionLibrary::GetFadeDistanceFromFace()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetFadeDistanceFromFace();
	}
#endif

	return 0.0f;
}

void USkyworthVRControllerFunctionLibrary::SetFadeDistanceFromFace(float DistanceFromFace)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		GVRController->GetArmModelController().SetFadeDistanceFromFace(DistanceFromFace);
	}
#endif
}

float USkyworthVRControllerFunctionLibrary::GetTooltipMinDistanceFromFace()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetTooltipMinDistanceFromFace();
	}
#endif

	return 0.0f;
}

void USkyworthVRControllerFunctionLibrary::SetTooltipMinDistanceFromFace(float DistanceFromFace)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		GVRController->GetArmModelController().SetTooltipMinDistanceFromFace(DistanceFromFace);
	}
#endif
}

int USkyworthVRControllerFunctionLibrary::GetTooltipMaxAngleFromCamera()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetTooltipMaxAngleFromCamera();
	}
#endif

	return 0.0f;
}

void USkyworthVRControllerFunctionLibrary::SetTooltipMaxAngleFromCamera(int AngleFromCamera)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		GVRController->GetArmModelController().SetTooltipMaxAngleFromCamera(AngleFromCamera);
	}
#endif
}

float USkyworthVRControllerFunctionLibrary::GetControllerAlphaValue()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetControllerAlphaValue();
	}
#endif

	return 0.0f;
}

float USkyworthVRControllerFunctionLibrary::GetTooltipAlphaValue()
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetArmModelController().GetTooltipAlphaValue();
	}
#endif

	return 0.0f;
}

bool USkyworthVRControllerFunctionLibrary::GetBatteryCharging(EControllerHand Hand)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetBatteryCharging(Hand);
	}
#endif

	return false;
}

ESkyworthVRControllerBatteryLevel USkyworthVRControllerFunctionLibrary::GetBatteryLevel(EControllerHand Hand)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetBatteryLevel(Hand);
	}
#endif

	return ESkyworthVRControllerBatteryLevel::Unknown;
}

int64_t USkyworthVRControllerFunctionLibrary::GetLastBatteryTimestamp(EControllerHand Hand)
{
#if GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS
	/*FSkyworthInput* GVRController = GetGoogleVRController();
	if(GVRController != nullptr)
	{
		return GVRController->GetLastBatteryTimestamp(Hand);
	}*/
#endif

	return 0;
}
