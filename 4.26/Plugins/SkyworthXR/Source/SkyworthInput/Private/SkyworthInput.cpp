// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SkyworthInput.h"

#if OCULUS_INPUT_SUPPORTED_PLATFORMS
#include "OculusHMD.h"
//#include "SkyworthMRFunctionLibrary.h"
#include "Misc/CoreDelegates.h"
#include "Features/IModularFeatures.h"
#include "Misc/ConfigCacheIni.h"


#define OVR_DEBUG_LOGGING 1

#define LOCTEXT_NAMESPACE "SkyworthInput"

namespace SkyworthInput
{

const FKey FSkyworthKey::SkyworthTouch_Left_Thumbstick("SkyworthTouch_Left_Thumbstick");
const FKey FSkyworthKey::SkyworthTouch_Left_Trigger("SkyworthTouch_Left_Trigger");
const FKey FSkyworthKey::SkyworthTouch_Left_FaceButton1("SkyworthTouch_Left_FaceButton1");
const FKey FSkyworthKey::SkyworthTouch_Left_FaceButton2("SkyworthTouch_Left_FaceButton2");
const FKey FSkyworthKey::SkyworthTouch_Left_IndexPointing("SkyworthTouch_Left_IndexPointing");
const FKey FSkyworthKey::SkyworthTouch_Left_ThumbUp("SkyworthTouch_Left_ThumbUp");

const FKey FSkyworthKey::SkyworthTouch_Right_Thumbstick("SkyworthTouch_Right_Thumbstick");
const FKey FSkyworthKey::SkyworthTouch_Right_Trigger("SkyworthTouch_Right_Trigger");
const FKey FSkyworthKey::SkyworthTouch_Right_FaceButton1("SkyworthTouch_Right_FaceButton1");
const FKey FSkyworthKey::SkyworthTouch_Right_FaceButton2("SkyworthTouch_Right_FaceButton2");
const FKey FSkyworthKey::SkyworthTouch_Right_IndexPointing("SkyworthTouch_Right_IndexPointing");
const FKey FSkyworthKey::SkyworthTouch_Right_ThumbUp("SkyworthTouch_Right_ThumbUp");

const FKey FSkyworthKey::SkyworthRemote_DPad_Down("SkyworthRemote_DPad_Down");
const FKey FSkyworthKey::SkyworthRemote_DPad_Up("SkyworthRemote_DPad_Up");
const FKey FSkyworthKey::SkyworthRemote_DPad_Left("SkyworthRemote_DPad_Left");
const FKey FSkyworthKey::SkyworthRemote_DPad_Right("SkyworthRemote_DPad_Right");
const FKey FSkyworthKey::SkyworthRemote_Enter("SkyworthRemote_Enter");
const FKey FSkyworthKey::SkyworthRemote_Back("SkyworthRemote_Back");
const FKey FSkyworthKey::SkyworthRemote_VolumeUp("SkyworthRemote_VolumeUp");
const FKey FSkyworthKey::SkyworthRemote_VolumeDown("SkyworthRemote_VolumeDown");
const FKey FSkyworthKey::SkyworthRemote_Home("SkyworthRemote_Home");

const FKey FSkyworthKey::SkyworthTouchpad_Touchpad("SkyworthTouchpad_Touchpad");
const FKey FSkyworthKey::SkyworthTouchpad_Touchpad_X("SkyworthTouchpad_Touchpad_X");
const FKey FSkyworthKey::SkyworthTouchpad_Touchpad_Y("SkyworthTouchpad_Touchpad_Y");
const FKey FSkyworthKey::SkyworthTouchpad_Back("SkyworthTouchpad_Back");

const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Left_Thumbstick("SkyworthTouch_Left_Thumbstick");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Left_Trigger("SkyworthTouch_Left_Trigger");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Left_FaceButton1("SkyworthTouch_Left_FaceButton1");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Left_FaceButton2("SkyworthTouch_Left_FaceButton2");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Left_IndexPointing("SkyworthTouch_Left_IndexPointing");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Left_ThumbUp("SkyworthTouch_Left_ThumbUp");

const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Right_Thumbstick("SkyworthTouch_Right_Thumbstick");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Right_Trigger("SkyworthTouch_Right_Trigger");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Right_FaceButton1("SkyworthTouch_Right_FaceButton1");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Right_FaceButton2("SkyworthTouch_Right_FaceButton2");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Right_IndexPointing("SkyworthTouch_Right_IndexPointing");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouch_Right_ThumbUp("SkyworthTouch_Right_ThumbUp");

const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthRemote_DPad_Down("SkyworthRemote_DPad_Down");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthRemote_DPad_Up("SkyworthRemote_DPad_Up");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthRemote_DPad_Left("SkyworthRemote_DPad_Left");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthRemote_DPad_Right("SkyworthRemote_DPad_Right");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthRemote_Enter("SkyworthRemote_Enter");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthRemote_Back("SkyworthRemote_Back");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthRemote_VolumeUp("SkyworthRemote_VolumeUp");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthRemote_VolumeDown("SkyworthRemote_VolumeDown");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthRemote_Home("SkyworthRemote_Home");

const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouchpad_Touchpad("SkyworthTouchpad_Touchpad");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouchpad_Touchpad_X("SkyworthTouchpad_Touchpad_X");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouchpad_Touchpad_Y("SkyworthTouchpad_Touchpad_Y");
const FSkyworthKeyNames::Type FSkyworthKeyNames::SkyworthTouchpad_Back("SkyworthTouchpad_Back");

/** Threshold for treating trigger pulls as button presses, from 0.0 to 1.0 */
float FSkyworthInput::TriggerThreshold = 0.8f;

/** Are Remote keys mapped to gamepad or not. */
bool FSkyworthInput::bRemoteKeysMappedToGamepad = true;
bool FSkyworthInput::bGoKeysMappedToTouch = false;

float FSkyworthInput::InitialButtonRepeatDelay = 0.2f;
float FSkyworthInput::ButtonRepeatDelay = 0.1f;

//extern ENGINE_API class UWorldProxy GWorld;

FSkyworthInput::FSkyworthInput( const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler )
	: OVRPluginHandle(nullptr)
	, MessageHandler( InMessageHandler )
	, ControllerPairs()
	, bUseArmModel(true)
{
	// take care of backward compatibility of Remote with Gamepad 
	if (bRemoteKeysMappedToGamepad)
	{
		Remote.MapKeysToGamepad();
	}

	OVRPluginHandle = FSkyworthHMDModule::GetOVRPluginHandle();

	FSkyworthTouchControllerPair& ControllerPair = *new(ControllerPairs) FSkyworthTouchControllerPair();

	// @todo: Unreal controller index should be assigned to us by the engine to ensure we don't contest with other devices
	ControllerPair.UnrealControllerIndex = 0; //???? NextUnrealControllerIndex++;

	IModularFeatures::Get().RegisterModularFeature( GetModularFeatureName(), this );

	LocalTrackingSpaceRecenterCount = 0;

	UE_LOG(LogOcInput, Log, TEXT("SkyworthInput is initialized"));
}


FSkyworthInput::~FSkyworthInput()
{
	IModularFeatures::Get().UnregisterModularFeature( GetModularFeatureName(), this );

	if (OVRPluginHandle)
	{
		FPlatformProcess::FreeDllHandle(OVRPluginHandle);
		OVRPluginHandle = nullptr;
	}
}

void FSkyworthInput::PreInit()
{
	// Load the config, even if we failed to initialize a controller
	LoadConfig();

	// Register the FKeys
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Left_Thumbstick, LOCTEXT("SkyworthTouch_Left_Thumbstick", "Skyworth Touch (L) Thumbstick CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::Deprecated));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Left_FaceButton1, LOCTEXT("SkyworthTouch_Left_FaceButton1", "Skyworth Touch (L) X Button CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::Deprecated));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Left_Trigger, LOCTEXT("SkyworthTouch_Left_Trigger", "Skyworth Touch (L) Trigger CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::Deprecated));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Left_FaceButton2, LOCTEXT("SkyworthTouch_Left_FaceButton2", "Skyworth Touch (L) Y Button CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::Deprecated));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Left_IndexPointing, LOCTEXT("SkyworthTouch_Left_IndexPointing", "Skyworth Touch (L) Pointing CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::NotBlueprintBindableKey, "SkyworthTouch"));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Left_ThumbUp, LOCTEXT("SkyworthTouch_Left_ThumbUp", "Skyworth Touch (L) Thumb Up CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::NotBlueprintBindableKey, "SkyworthTouch"));

	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Right_Thumbstick, LOCTEXT("SkyworthTouch_Right_Thumbstick", "Skyworth Touch (R) Thumbstick CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::NotBlueprintBindableKey));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Right_FaceButton1, LOCTEXT("SkyworthTouch_Right_FaceButton1", "Skyworth Touch (R) A Button CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::NotBlueprintBindableKey));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Right_Trigger, LOCTEXT("SkyworthTouch_Right_Trigger", "Skyworth Touch (R) Trigger CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::NotBlueprintBindableKey));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Right_FaceButton2, LOCTEXT("SkyworthTouch_Right_FaceButton2", "Skyworth Touch (R) B Button CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::NotBlueprintBindableKey));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Right_IndexPointing, LOCTEXT("SkyworthTouch_Right_IndexPointing", "Skyworth Touch (R) Pointing CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::NotBlueprintBindableKey, "SkyworthTouch"));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouch_Right_ThumbUp, LOCTEXT("SkyworthTouch_Right_ThumbUp", "Skyworth Touch (R) Thumb Up CapTouch"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::NotBlueprintBindableKey, "SkyworthTouch"));

	EKeys::AddMenuCategoryDisplayInfo("SkyworthRemote", LOCTEXT("SkyworthRemoteSubCategory", "Skyworth Remote"), TEXT("GraphEditor.PadEvent_16x"));

	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthRemote_DPad_Up, LOCTEXT("SkyworthRemote_DPad_Up", "Skyworth Remote D-pad Up"), FKeyDetails::GamepadKey, "SkyworthRemote"));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthRemote_DPad_Down, LOCTEXT("SkyworthRemote_DPad_Down", "Skyworth Remote D-pad Down"), FKeyDetails::GamepadKey, "SkyworthRemote"));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthRemote_DPad_Left, LOCTEXT("SkyworthRemote_DPad_Left", "Skyworth Remote D-pad Left"), FKeyDetails::GamepadKey, "SkyworthRemote"));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthRemote_DPad_Right, LOCTEXT("SkyworthRemote_DPad_Right", "Skyworth Remote D-pad Right"), FKeyDetails::GamepadKey, "SkyworthRemote"));

	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthRemote_Enter, LOCTEXT("SkyworthRemote_Enter", "Skyworth Remote Enter"), FKeyDetails::GamepadKey, "SkyworthRemote"));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthRemote_Back, LOCTEXT("SkyworthRemote_Back", "Skyworth Remote Back"), FKeyDetails::GamepadKey, "SkyworthRemote"));

	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthRemote_VolumeUp, LOCTEXT("SkyworthRemote_VolumeUp", "Skyworth Remote Volume Up"), FKeyDetails::GamepadKey, "SkyworthRemote"));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthRemote_VolumeDown, LOCTEXT("SkyworthRemote_VolumeDown", "Skyworth Remote Volume Down"), FKeyDetails::GamepadKey, "SkyworthRemote"));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthRemote_Home, LOCTEXT("SkyworthRemote_Home", "Skyworth Remote Home"), FKeyDetails::GamepadKey, "SkyworthRemote"));

	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouchpad_Touchpad, LOCTEXT("SkyworthTouchpad_Touchpad", "Skyworth Touchpad Button"), FKeyDetails::GamepadKey | FKeyDetails::Deprecated));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouchpad_Touchpad_X, LOCTEXT("SkyworthTouchpad_Touchpad_X", "Skyworth Touchpad X-Axis"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::Deprecated));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouchpad_Touchpad_Y, LOCTEXT("SkyworthTouchpad_Touchpad_Y", "Skyworth Touchpad Y-Axis"), FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::Deprecated));
	EKeys::AddKey(FKeyDetails(FSkyworthKey::SkyworthTouchpad_Back, LOCTEXT("SkyworthTouchpad_Back", "Skyworth Touchpad Back"), FKeyDetails::GamepadKey | FKeyDetails::Deprecated));

	UE_LOG(LogOcInput, Log, TEXT("SkyworthInput pre-init called"));
}

void FSkyworthInput::LoadConfig()
{
	const TCHAR* SkyworthTouchSettings = TEXT("SkyworthTouch.Settings");
	float ConfigThreshold = TriggerThreshold;
	if (GConfig->GetFloat(SkyworthTouchSettings, TEXT("TriggerThreshold"), ConfigThreshold, GEngineIni))
	{
		TriggerThreshold = ConfigThreshold;
	}

	bool bConfigGoKeysMappedToTouch;
	if (GConfig->GetBool(SkyworthTouchSettings, TEXT("bGoKeysMappedToTouch"), bConfigGoKeysMappedToTouch, GEngineIni))
	{
		bGoKeysMappedToTouch = bConfigGoKeysMappedToTouch;
	}

	const TCHAR* SkyworthRemoteSettings = TEXT("SkyworthRemote.Settings");
	bool bConfigRemoteKeysMappedToGamepad;
	if (GConfig->GetBool(SkyworthRemoteSettings, TEXT("bRemoteKeysMappedToGamepad"), bConfigRemoteKeysMappedToGamepad, GEngineIni))
	{
		bRemoteKeysMappedToGamepad = bConfigRemoteKeysMappedToGamepad;
	}

	GConfig->GetFloat(TEXT("/Script/Engine.InputSettings"), TEXT("InitialButtonRepeatDelay"), InitialButtonRepeatDelay, GInputIni);
	GConfig->GetFloat(TEXT("/Script/Engine.InputSettings"), TEXT("ButtonRepeatDelay"), ButtonRepeatDelay, GInputIni);
}
bool FSkyworthInput::GetUseArmModel() const
{
	return bUseArmModel;
}

void FSkyworthInput::SetUseArmModel(bool bNewUseArmModel)
{
	bUseArmModel = bNewUseArmModel;
}
int32 FSkyworthInput::GetControllerStateIndex(EControllerHand Hand) const
{
	switch (Hand)
	{
	case EControllerHand::Left:
		return 0;
	case EControllerHand::Right:
	case EControllerHand::AnyHand:
		return 1;
	default:
		return -1;
	}
}
ESkyworthVRControllerState FSkyworthInput::GetControllerState(EControllerHand Hand) const
{
	if (Hand == EControllerHand::AnyHand)
		Hand = EControllerHand::Right;
	int32 ControllerIndex = GetControllerStateIndex(Hand);
	if (ControllerIndex >= 0)
	{
		ETrackingStatus sttatues = GetControllerTrackingStatus(0, Hand);
		//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("xxxxxGetControllerTrackingStatus[%d] sttatues:%d"), Hand, sttatues);
		return sttatues != ETrackingStatus::NotTracked ? ESkyworthVRControllerState::Connected : ESkyworthVRControllerState::Disconnected;
	}
	return ESkyworthVRControllerState::Disconnected;
}
int FSkyworthInput::GetGVRControllerHandedness() const
{
	return 0;
}
float  FSkyworthInput::GetWorldToMetersScale() const
{
	SkyworthHMD::FSkyworthHMD* SkyworthHMD = static_cast<SkyworthHMD::FSkyworthHMD*>(GEngine->XRSystem->GetHMDDevice());
	// Default value, assume Unreal units are in centimeters
	return SkyworthHMD->GetWorldToMetersScale();
}
gvr_arm_model::Controller& FSkyworthInput::GetArmModelController()
{
	return ArmModelController;
}

FVector FSkyworthInput::ConvertGvrVectorToUnreal(float x, float y, float z, float WorldToMetersScale) const
{
	FVector Result;

	// Gvr: Negative Z is Forward, UE: Positive X is Forward.
	Result.X = -z * WorldToMetersScale;
	// Gvr: Positive X is Right, UE: Positive Y is Right.
	Result.Y = x * WorldToMetersScale;
	// Gvr: Positive Y is Up, UE: Positive Z is Up
	Result.Z = y * WorldToMetersScale;
	return Result;
}
FQuat FSkyworthInput::ConvertGvrQuaternionToUnreal(float w, float x, float y, float z) const
{
	FQuat Result = FQuat(-z, x, y, -w);
	return Result;
}
bool FSkyworthInput::GetBatteryCharging(EControllerHand Hand)
{
	/*ovrpControllerState4 OvrpControllerState;
	if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetControllerState4((ovrpController)(ovrpController_LTrackedRemote | ovrpController_RTrackedRemote | ovrpController_Touch), &OvrpControllerState)))
	{
		int32 ControllerIndex = GetControllerStateIndex(Hand);
	}*/

	return false;
}
ESkyworthVRControllerBatteryLevel FSkyworthInput::GetBatteryLevel(EControllerHand Hand)
{
	ovrpControllerState4 OvrpControllerState;
	if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetControllerState4((ovrpController)(ovrpController_LTrackedRemote | ovrpController_RTrackedRemote | ovrpController_Touch), &OvrpControllerState)))
	{
		int32 ControllerIndex = GetControllerStateIndex(Hand);
		bool bIsLeft = (Hand == EControllerHand::Left);
		bool bIsMobileController = bIsLeft ? (OvrpControllerState.ConnectedControllerTypes & ovrpController_LTrackedRemote) != 0 : (OvrpControllerState.ConnectedControllerTypes & ovrpController_RTrackedRemote) != 0;
		bool bIsTouchController = bIsLeft ? (OvrpControllerState.ConnectedControllerTypes & ovrpController_LTouch) != 0 : (OvrpControllerState.ConnectedControllerTypes & ovrpController_RTouch) != 0;
		bool bIsCurrentlyTracked = bIsMobileController || bIsTouchController;
		if (bIsCurrentlyTracked)
		{
			float battery = OvrpControllerState.batteryPercent[ControllerIndex];
			if (battery >= 20 * 4)
			{
				return ESkyworthVRControllerBatteryLevel::Full;
			}
			else if (battery > 20 * 3)
			{
				return ESkyworthVRControllerBatteryLevel::AlmostFull;
			}
			else if (battery >= 20 * 2)
			{
				return ESkyworthVRControllerBatteryLevel::Medium;
			}
			else if (battery >= 20)
			{
				return ESkyworthVRControllerBatteryLevel::Low;
			}
			else
			{
				return ESkyworthVRControllerBatteryLevel::CriticalLow;
			}
		}
		
	}

	return ESkyworthVRControllerBatteryLevel::Unknown;
}
void FSkyworthInput::Tick( float DeltaTime )
{
	// Nothing to do when ticking, for now.  SendControllerEvents() handles everything.
	PollController(DeltaTime);
}

void FSkyworthInput::PollController(float DeltaTime)
{
	ovrpNode Node;
	// Update the handedness. This could be changed in UserSettings at anytime so we poll for it.
	int GvrHandedness = GetGVRControllerHandedness();
	if (GvrHandedness == 0)
	{
		ArmModelController.SetHandedness(gvr_arm_model::Controller::Right);
		Node = ovrpNode_HandRight;

	}
	else if (GvrHandedness == 1)
	{
		ArmModelController.SetHandedness(gvr_arm_model::Controller::Left);
		Node = ovrpNode_HandLeft;
	}
	else
	{
		ArmModelController.SetHandedness(gvr_arm_model::Controller::Unknown);
		Node = ovrpNode_HandRight;
	}

	ovrpPoseStatef InPoseState;
	SkyworthHMD::FPose OutPose;
	ovrpBool bResult;
	//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetNodePoseState3 start"));
	bool bIsOritationValid = OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodeOrientationTracked2(Node, &bResult)) && bResult;
	/*if (preIsOritationValid != bIsOritationValid) 
	{
		if (bIsOritationValid)
		{
			UE_LOG(LogOcInput, Log, TEXT("xxxxxController Connected"));
			MuitiDelagateWithOneParam.Broadcast(FString("Controller Connected"));
		}
		else
		{
			UE_LOG(LogOcInput, Log, TEXT("xxxxxController DisConnected"));
			MuitiDelagateWithOneParam.Broadcast(FString("Controller DisConnected"));
		}
	}
	preIsOritationValid = bIsOritationValid;*/
	if (bIsOritationValid)
	{
		ovrpResult result1 = FSkyworthHMDModule::GetPluginWrapper().GetNodePoseState3(ovrpStep_Render, OVRP_CURRENT_FRAMEINDEX, Node, &InPoseState);

		// In a future google api hopefully we will have a better way to detect 3dof controllers, and we might want to avoid doing this work for 6dof controllers (where it will not be used).
		if (bUseArmModel)
		{

			bool recentered = true;

			gvr_arm_model::Controller::UpdateData UpdateData;

			//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetNodePoseState3(%f,%f,%f,%f)"), InPoseState.Pose.Orientation.x, InPoseState.Pose.Orientation.y, InPoseState.Pose.Orientation.z, InPoseState.Pose.Orientation.w);
			UpdateData.orientation = gvr_arm_model::Quaternion(InPoseState.Pose.Orientation.w, InPoseState.Pose.Orientation.x, InPoseState.Pose.Orientation.y, InPoseState.Pose.Orientation.z);

			UpdateData.connected = GetControllerState(EControllerHand::AnyHand) == ESkyworthVRControllerState::Connected;//ControllerState->GetConnectionState() == gvr::ControllerConnectionState::GVR_CONTROLLER_CONNECTED;

			// Get head direction and position of the HMD, used for FollowGaze options
			if (GEngine->XRSystem.IsValid())
			{
				FQuat HmdOrientation;
				FVector HmdPosition;
				GEngine->XRSystem->GetCurrentPose(IXRTrackingSystem::HMDDeviceId, HmdOrientation, HmdPosition);
				FVector HmdDirection = HmdOrientation * FVector::ForwardVector;

				const float WorldToMetersScale = GetWorldToMetersScale();

				// Gvr: Negative Z is Forward, UE: Positive X is Forward.
				UpdateData.headDirection.z(-HmdDirection.X);
				UpdateData.headPosition.z(-HmdPosition.X / WorldToMetersScale);
				// Gvr: Positive X is Right, UE: Positive Y is Right.
				UpdateData.headDirection.x(HmdDirection.Y);
				UpdateData.headPosition.x(HmdPosition.Y / WorldToMetersScale);
				// Gvr: Positive Y is Up, UE: Positive Z is Up
				UpdateData.headDirection.y(HmdDirection.Z);
				UpdateData.headPosition.y(HmdPosition.Z / WorldToMetersScale);


			}

			// Get delta time
			UpdateData.deltaTimeSeconds = DeltaTime;

			// Update the arm model
			ArmModelController.Update(UpdateData, recentered);
		}
	}
}
void FSkyworthInput::SendControllerEvents()
{
	const double CurrentTime = FPlatformTime::Seconds();
	const float AnalogButtonPressThreshold = TriggerThreshold;

	if(ISkyworthHMDModule::IsAvailable() && FSkyworthHMDModule::GetPluginWrapper().GetInitialized() && FApp::HasVRFocus())
	{
		if (MessageHandler.IsValid() && GEngine->XRSystem->GetHMDDevice())
		{
			SkyworthHMD::FSkyworthHMD* SkyworthHMD = static_cast<SkyworthHMD::FSkyworthHMD*>(GEngine->XRSystem->GetHMDDevice());
			SkyworthHMD->StartGameFrame_GameThread();

			ovrpControllerState4 OvrpControllerState;
			
			if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetControllerState4(ovrpController_Remote, &OvrpControllerState)) &&
				(OvrpControllerState.ConnectedControllerTypes & ovrpController_Remote))
			{
				for (int32 ButtonIndex = 0; ButtonIndex < (int32)ESkyworthRemoteControllerButton::TotalButtonCount; ++ButtonIndex)
				{
					FSkyworthButtonState& ButtonState = Remote.Buttons[ButtonIndex];
					check(!ButtonState.Key.IsNone()); // is button's name initialized?

					// Determine if the button is pressed down
					bool bButtonPressed = false;
					switch ((ESkyworthRemoteControllerButton)ButtonIndex)
					{
					case ESkyworthRemoteControllerButton::DPad_Up:
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_Up) != 0;
						break;

					case ESkyworthRemoteControllerButton::DPad_Down:
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_Down) != 0;
						break;

					case ESkyworthRemoteControllerButton::DPad_Left:
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_Left) != 0;
						break;

					case ESkyworthRemoteControllerButton::DPad_Right:
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_Right) != 0;
						break;

					case ESkyworthRemoteControllerButton::Enter:
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_Start) != 0;
						break;

					case ESkyworthRemoteControllerButton::Back:
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_Back) != 0;
						break;

					case ESkyworthRemoteControllerButton::VolumeUp:
						#ifdef SUPPORT_INTERNAL_BUTTONS
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_VolUp) != 0;
						#endif
						break;

					case ESkyworthRemoteControllerButton::VolumeDown:
						#ifdef SUPPORT_INTERNAL_BUTTONS
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_VolDown) != 0;
						#endif
						break;

					case ESkyworthRemoteControllerButton::Home:
						#ifdef SUPPORT_INTERNAL_BUTTONS
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_Home) != 0;
						#endif
						break;

					default:
						check(0); // unhandled button, shouldn't happen
						break;
					}

					// Update button state
					if (bButtonPressed != ButtonState.bIsPressed)
					{
						ButtonState.bIsPressed = bButtonPressed;
						if (ButtonState.bIsPressed)
						{
							OnControllerButtonPressed(ButtonState, 0, false);

							// Set the timer for the first repeat
							ButtonState.NextRepeatTime = CurrentTime + ButtonRepeatDelay;
						}
						else
						{
							OnControllerButtonReleased(ButtonState, 0, false);
						}
					}

					// Apply key repeat, if its time for that
					if (ButtonState.bIsPressed && ButtonState.NextRepeatTime <= CurrentTime)
					{
						OnControllerButtonPressed(ButtonState, 0, true);

						// Set the timer for the next repeat
						ButtonState.NextRepeatTime = CurrentTime + ButtonRepeatDelay;
					}
				}
			}
			//UE_LOG(LogOcInput,Log,TEXT("OvrpControllerState.ConnectedControllerTypes:0x%x,OvrpControllerState.Buttons:0x%x"), OvrpControllerState.ConnectedControllerTypes, OvrpControllerState.Buttons);
			if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetControllerState4(ovrpController_Touchpad, &OvrpControllerState)) &&
				(OvrpControllerState.ConnectedControllerTypes & ovrpController_Touchpad))
			{
				ovrpVector2f ThumbstickValue = OvrpControllerState.Touchpad[0];

				if (ThumbstickValue.x != Touchpad.TouchpadPosition.X)
				{
					Touchpad.TouchpadPosition.X = ThumbstickValue.x;
					MessageHandler->OnControllerAnalog(FSkyworthKeyNames::SkyworthTouchpad_Touchpad_X, 0, Touchpad.TouchpadPosition.X);
				}

				if (ThumbstickValue.y != Touchpad.TouchpadPosition.Y)
				{
					Touchpad.TouchpadPosition.Y = ThumbstickValue.y;
					// we need to negate Y value to match XBox controllers
					MessageHandler->OnControllerAnalog(FSkyworthKeyNames::SkyworthTouchpad_Touchpad_Y, 0, Touchpad.TouchpadPosition.Y);
				}

				for (int32 ButtonIndex = 0; ButtonIndex < (int32)ESkyworthTouchpadButton::TotalButtonCount; ++ButtonIndex)
				{
					FSkyworthButtonState& ButtonState = Touchpad.Buttons[ButtonIndex];
					check(!ButtonState.Key.IsNone()); // is button's name initialized?

					bool bButtonPressed = false;
					switch ((ESkyworthTouchpadButton)ButtonIndex)
					{
					case ESkyworthTouchpadButton::Back:
						bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_Back) != 0;
						break;

					case ESkyworthTouchpadButton::Touchpad:
						bButtonPressed = (OvrpControllerState.Touches & ovrpTouch_LTouchpad) != 0;
						break;

					default:
						check(0); // unhandled button, shouldn't happen
						break;
					}

					// Update button state
					if (bButtonPressed != ButtonState.bIsPressed)
					{
						ButtonState.bIsPressed = bButtonPressed;
						if (ButtonState.bIsPressed)
						{
							OnControllerButtonPressed(ButtonState, 0, false);

							// Set the timer for the first repeat
							ButtonState.NextRepeatTime = CurrentTime + ButtonRepeatDelay;
						}
						else
						{
							OnControllerButtonReleased(ButtonState, 0, false);
						}
					}

					// Apply key repeat, if its time for that
					if (ButtonState.bIsPressed && ButtonState.NextRepeatTime <= CurrentTime)
					{
						OnControllerButtonPressed(ButtonState, 0, true);

						// Set the timer for the next repeat
						ButtonState.NextRepeatTime = CurrentTime + ButtonRepeatDelay;
					}
				}
			}

			if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetControllerState4((ovrpController)(ovrpController_LTrackedRemote | ovrpController_RTrackedRemote | ovrpController_Touch), &OvrpControllerState)))
			{
				//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: ButtonState = 0x%X"), OvrpControllerState.Buttons);
				//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: Touches = 0x%X"), OvrpControllerState.Touches);

				// If using touch controllers (Quest) use the local tracking space recentering as a signal for recenter
				if ((OvrpControllerState.ConnectedControllerTypes & ovrpController_LTouch) != 0 || (OvrpControllerState.ConnectedControllerTypes & ovrpController_RTouch) != 0)
				{
					int recenterCount = 0;
					if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetLocalTrackingSpaceRecenterCount(&recenterCount)))
					{
						if (LocalTrackingSpaceRecenterCount != recenterCount)
						{
							FCoreDelegates::VRControllerRecentered.Broadcast();
							LocalTrackingSpaceRecenterCount = recenterCount;
						}
					}
				}
				
				for (FSkyworthTouchControllerPair& ControllerPair : ControllerPairs)
				{
					for( int32 HandIndex = 0; HandIndex < UE_ARRAY_COUNT( ControllerPair.ControllerStates ); ++HandIndex )
					{
						FSkyworthTouchControllerState& State = ControllerPair.ControllerStates[ HandIndex ];

						bool bIsLeft = (HandIndex == (int32)EControllerHand::Left);

						bool bIsMobileController = bIsLeft ? (OvrpControllerState.ConnectedControllerTypes & ovrpController_LTrackedRemote) != 0 : (OvrpControllerState.ConnectedControllerTypes & ovrpController_RTrackedRemote) != 0;
						bool bIsTouchController = bIsLeft ? (OvrpControllerState.ConnectedControllerTypes & ovrpController_LTouch) != 0 : (OvrpControllerState.ConnectedControllerTypes & ovrpController_RTouch) != 0;
						bool bIsCurrentlyTracked = bIsMobileController || bIsTouchController;

						//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: HandIndex[%d] bIsCurrentlyTracked[%d]"), int(HandIndex), bIsCurrentlyTracked);
						if (bIsCurrentlyTracked)
						{
							ovrpNode OvrpNode = (HandIndex == (int32)EControllerHand::Left) ? ovrpNode_HandLeft : ovrpNode_HandRight;

							State.bIsConnected = true;
							ovrpBool bResult = true;
							State.bIsPositionTracked = OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodePositionTracked2(OvrpNode, &bResult)) && bResult;
							State.bIsPositionValid = OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodePositionValid(OvrpNode, &bResult)) && bResult;
							//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: xxxxbIsPositionTracked[%d] = %d,%d"), int(HandIndex), bResult, State.bIsPositionValid);
							State.bIsOrientationTracked = OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodeOrientationTracked2(OvrpNode, &bResult)) && bResult;
							State.bIsOrientationValid = OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodeOrientationValid(OvrpNode, &bResult)) && bResult;
							//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: bIsPositionTracked[%d] = %d"), int(HandIndex), State.bIsPositionTracked);
							//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: bIsPositionValid[%d] = %d"), int(HandIndex), State.bIsPositionValid);
							//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: bIsOrientationTracked[%d] = %d"), int(HandIndex), State.bIsOrientationTracked);
							//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: bIsOrientationValid[%d] = %d"), int(HandIndex), State.bIsOrientationValid);

							const float OvrTriggerAxis = OvrpControllerState.IndexTrigger[HandIndex];
							const float OvrGripAxis = OvrpControllerState.HandTrigger[HandIndex];

							//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: IndexTrigger[%d] = %f"), int(HandIndex), OvrTriggerAxis);
							//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: HandTrigger[%d] = %f"), int(HandIndex), OvrGripAxis);
							//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: ThumbStick[%d] = { %f, %f }"), int(HandIndex), OvrpControllerState.Thumbstick[HandIndex].x, OvrpControllerState.Thumbstick[HandIndex].y );

							if (bIsMobileController)
							{
								if (OvrpControllerState.RecenterCount[HandIndex] != State.RecenterCount)
								{
									State.RecenterCount = OvrpControllerState.RecenterCount[HandIndex];
									FCoreDelegates::VRControllerRecentered.Broadcast();
								}
							}
							
							if (OvrTriggerAxis != State.TriggerAxis)
							{
								State.TriggerAxis = OvrTriggerAxis;
								MessageHandler->OnControllerAnalog(bIsLeft ? EKeys::OculusTouch_Left_Trigger_Axis.GetFName() : EKeys::OculusTouch_Right_Trigger_Axis.GetFName(), ControllerPair.UnrealControllerIndex, State.TriggerAxis);
							}

							if (OvrGripAxis != State.GripAxis)
							{
								State.GripAxis = OvrGripAxis;
								MessageHandler->OnControllerAnalog(bIsLeft ? EKeys::OculusTouch_Left_Grip_Axis.GetFName() : EKeys::OculusTouch_Right_Grip_Axis.GetFName(), ControllerPair.UnrealControllerIndex, State.GripAxis);
							}

							ovrpVector2f ThumbstickValue = OvrpControllerState.Thumbstick[HandIndex];
							ovrpVector2f TouchpadValue = OvrpControllerState.Touchpad[HandIndex];

							if (ThumbstickValue.x != State.ThumbstickAxes.X)
							{
								State.ThumbstickAxes.X = ThumbstickValue.x;
								MessageHandler->OnControllerAnalog(bIsLeft ? EKeys::OculusTouch_Left_Thumbstick_X.GetFName() : EKeys::OculusTouch_Right_Thumbstick_X.GetFName(), ControllerPair.UnrealControllerIndex, State.ThumbstickAxes.X);
								/*if (bGoKeysMappedToTouch)
								{
									MessageHandler->OnControllerAnalog(bIsLeft ? EKeys::OculusGo_Left_Trackpad_X.GetFName() : EKeys::OculusGo_Right_Trackpad_X.GetFName(), ControllerPair.UnrealControllerIndex, State.ThumbstickAxes.Y);
								}*/
							}

							if (ThumbstickValue.y != State.ThumbstickAxes.Y)
							{
								State.ThumbstickAxes.Y = ThumbstickValue.y;
								MessageHandler->OnControllerAnalog(bIsLeft ? EKeys::OculusTouch_Left_Thumbstick_Y.GetFName() : EKeys::OculusTouch_Right_Thumbstick_Y.GetFName(), ControllerPair.UnrealControllerIndex, State.ThumbstickAxes.Y);
								/*if (bGoKeysMappedToTouch)
								{
									MessageHandler->OnControllerAnalog(bIsLeft ? EKeys::OculusGo_Left_Trackpad_Y.GetFName() : EKeys::OculusGo_Right_Trackpad_Y.GetFName(), ControllerPair.UnrealControllerIndex, State.ThumbstickAxes.Y);
								}*/
							}

							if (TouchpadValue.x != State.TouchpadAxes.X)
							{
								State.TouchpadAxes.X = TouchpadValue.x;
								//MessageHandler->OnControllerAnalog(bIsLeft ? EKeys::OculusGo_Left_Trackpad_X.GetFName() : EKeys::OculusGo_Right_Trackpad_X.GetFName(), ControllerPair.UnrealControllerIndex, State.ThumbstickAxes.X);
							}

							if (TouchpadValue.y != State.TouchpadAxes.Y)
							{
								State.TouchpadAxes.Y = TouchpadValue.y;
								//MessageHandler->OnControllerAnalog(bIsLeft ? EKeys::OculusGo_Left_Trackpad_Y.GetFName() : EKeys::OculusGo_Right_Trackpad_Y.GetFName(), ControllerPair.UnrealControllerIndex, State.ThumbstickAxes.Y);
							}

							for (int32 ButtonIndex = 0; ButtonIndex < (int32)ESkyworthTouchControllerButton::TotalButtonCount; ++ButtonIndex)
							{
								FSkyworthButtonState& ButtonState = State.Buttons[ButtonIndex];
								check(!ButtonState.Key.IsNone()); // is button's name initialized?

								// Determine if the button is pressed down
								bool bButtonPressed = false;
								switch ((ESkyworthTouchControllerButton)ButtonIndex)
								{
								case ESkyworthTouchControllerButton::Trigger:
									bButtonPressed = State.TriggerAxis >= AnalogButtonPressThreshold;
									break;

								case ESkyworthTouchControllerButton::Grip:
									bButtonPressed = State.GripAxis >= AnalogButtonPressThreshold;
									break;

								case ESkyworthTouchControllerButton::XA:
									bButtonPressed = bIsLeft ? (OvrpControllerState.Buttons & ovrpButton_X) != 0 : (OvrpControllerState.Buttons & ovrpButton_A) != 0;
									break;

								case ESkyworthTouchControllerButton::YB:
									bButtonPressed = bIsLeft ? (OvrpControllerState.Buttons & ovrpButton_Y) != 0 : (OvrpControllerState.Buttons & ovrpButton_B) != 0;
									break;

								case ESkyworthTouchControllerButton::Thumbstick:
									bButtonPressed = bIsLeft ? (OvrpControllerState.Buttons & ovrpButton_LThumb) != 0 : (OvrpControllerState.Buttons & ovrpButton_RThumb) != 0;
									break;
									
								case ESkyworthTouchControllerButton::Thumbstick_Up:
									if (bIsTouchController && State.ThumbstickAxes.Size() > 0.7f ||
										bIsMobileController && State.Buttons[(int)ESkyworthTouchControllerButton::Thumbstick].bIsPressed && State.ThumbstickAxes.Size() > 0.5f)
									{
										float Angle = FMath::Atan2(State.ThumbstickAxes.Y, State.ThumbstickAxes.X);
										bButtonPressed = Angle >= (1.0f / 8.0f) * PI && Angle <= (7.0f / 8.0f) * PI;
									}
									break;

								case ESkyworthTouchControllerButton::Thumbstick_Down:
									if (bIsTouchController && State.ThumbstickAxes.Size() > 0.7f ||
										bIsMobileController && State.Buttons[(int)ESkyworthTouchControllerButton::Thumbstick].bIsPressed && State.ThumbstickAxes.Size() > 0.5f)
									{
										float Angle = FMath::Atan2(State.ThumbstickAxes.Y, State.ThumbstickAxes.X);
										bButtonPressed = Angle >= (-7.0f / 8.0f) * PI && Angle <= (-1.0f / 8.0f) * PI;
									}
									break;

								case ESkyworthTouchControllerButton::Thumbstick_Left:
									if (bIsTouchController && State.ThumbstickAxes.Size() > 0.7f ||
										bIsMobileController && State.Buttons[(int)ESkyworthTouchControllerButton::Thumbstick].bIsPressed && State.ThumbstickAxes.Size() > 0.5f)
									{
										float Angle = FMath::Atan2(State.ThumbstickAxes.Y, State.ThumbstickAxes.X);
										bButtonPressed = Angle <= (-5.0f / 8.0f) * PI || Angle >= (5.0f / 8.0f) * PI;
									}
									break;

								case ESkyworthTouchControllerButton::Thumbstick_Right:
									if (bIsTouchController && State.ThumbstickAxes.Size() > 0.7f ||
										bIsMobileController && State.Buttons[(int)ESkyworthTouchControllerButton::Thumbstick].bIsPressed && State.ThumbstickAxes.Size() > 0.5f)
									{
										float Angle = FMath::Atan2(State.ThumbstickAxes.Y, State.ThumbstickAxes.X);
										bButtonPressed = Angle >= (-3.0f / 8.0f) * PI && Angle <= (3.0f / 8.0f) * PI;
									}
									break;

								case ESkyworthTouchControllerButton::Menu:
									bButtonPressed = bIsLeft && (OvrpControllerState.Buttons & ovrpButton_Start);
									break;

								case ESkyworthTouchControllerButton::Thumbstick_Touch:
									bButtonPressed = bIsLeft ? (OvrpControllerState.Touches & ovrpTouch_LThumb) != 0 : (OvrpControllerState.Touches & ovrpTouch_RThumb) != 0;
									break;

								case ESkyworthTouchControllerButton::Trigger_Touch:
									bButtonPressed = bIsLeft ? (OvrpControllerState.Touches & ovrpTouch_LIndexTrigger) != 0 : (OvrpControllerState.Touches & ovrpTouch_RIndexTrigger) != 0;
									break;

								case ESkyworthTouchControllerButton::XA_Touch:
									bButtonPressed = bIsLeft ? (OvrpControllerState.Touches & ovrpTouch_X) != 0 : (OvrpControllerState.Touches & ovrpTouch_A) != 0;
									break;

								case ESkyworthTouchControllerButton::YB_Touch:
									bButtonPressed = bIsLeft ? (OvrpControllerState.Touches & ovrpTouch_Y) != 0 : (OvrpControllerState.Touches & ovrpTouch_B) != 0;
									break;

								case ESkyworthTouchControllerButton::Back:
									bButtonPressed = (OvrpControllerState.Buttons & ovrpButton_Back) != 0 || (bGoKeysMappedToTouch &&
										(bIsLeft ? (OvrpControllerState.Buttons & ovrpButton_X) != 0 : (OvrpControllerState.Buttons & ovrpButton_A) != 0));
									break;

								case ESkyworthTouchControllerButton::Touchpad:
									bButtonPressed = (bIsLeft ? (OvrpControllerState.Buttons & ovrpButton_LTouchpad) != 0 : (OvrpControllerState.Buttons & ovrpButton_RTouchpad) != 0) ||
										(bGoKeysMappedToTouch && (bIsLeft ? (OvrpControllerState.Buttons & ovrpButton_LThumb) != 0 : (OvrpControllerState.Buttons & ovrpButton_RThumb) != 0));
									break;

								case ESkyworthTouchControllerButton::Touchpad_Touch:
									bButtonPressed = (bIsLeft ? (OvrpControllerState.Buttons & ovrpTouch_LTouchpad) != 0 : (OvrpControllerState.Buttons & ovrpTouch_RTouchpad) != 0) ||
										(bGoKeysMappedToTouch && (bIsLeft ? (OvrpControllerState.Touches & ovrpTouch_LThumb) != 0 : (OvrpControllerState.Touches & ovrpTouch_RThumb) != 0));
									break;
								
								default:
									check(0);
									break;
								}

								// Update button state
								if (bButtonPressed != ButtonState.bIsPressed)
								{
									ButtonState.bIsPressed = bButtonPressed;
									if (ButtonState.bIsPressed)
									{
										OnControllerButtonPressed(ButtonState, ControllerPair.UnrealControllerIndex, false);

										// Set the timer for the first repeat
										ButtonState.NextRepeatTime = CurrentTime + ButtonRepeatDelay;
									}
									else
									{
										OnControllerButtonReleased(ButtonState, ControllerPair.UnrealControllerIndex, false);
									}
								}

								// Apply key repeat, if its time for that
								if (ButtonState.bIsPressed && ButtonState.NextRepeatTime <= CurrentTime)
								{
									OnControllerButtonPressed(ButtonState, ControllerPair.UnrealControllerIndex, true);

									// Set the timer for the next repeat
									ButtonState.NextRepeatTime = CurrentTime + ButtonRepeatDelay;
								}
							}

							// Handle Capacitive States
							for (int32 CapTouchIndex = 0; CapTouchIndex < (int32)ESkyworthTouchCapacitiveAxes::TotalAxisCount; ++CapTouchIndex)
							{
								FSkyworthTouchCapacitiveState& CapState = State.CapacitiveAxes[CapTouchIndex];

								float CurrentAxisVal = 0.f;
								switch ((ESkyworthTouchCapacitiveAxes)CapTouchIndex)
								{
								case ESkyworthTouchCapacitiveAxes::XA:
								{
									const uint32 mask = (bIsLeft) ? ovrpTouch_X : ovrpTouch_A;
									CurrentAxisVal = (OvrpControllerState.Touches & mask) != 0 ? 1.f : 0.f;
									break;
								}
								case ESkyworthTouchCapacitiveAxes::YB:
								{
									const uint32 mask = (bIsLeft) ? ovrpTouch_Y : ovrpTouch_B;
									CurrentAxisVal = (OvrpControllerState.Touches & mask) != 0 ? 1.f : 0.f;
									break;
								}
								case ESkyworthTouchCapacitiveAxes::Thumbstick:
								{
									const uint32 mask = bIsMobileController ? ((bIsLeft) ? ovrpTouch_LTouchpad : ovrpTouch_RTouchpad) : ((bIsLeft) ? ovrpTouch_LThumb : ovrpTouch_RThumb);
									CurrentAxisVal = (OvrpControllerState.Touches & mask) != 0 ? 1.f : 0.f;
									break;
								}
								case ESkyworthTouchCapacitiveAxes::Trigger:
								{
									const uint32 mask = (bIsLeft) ? ovrpTouch_LIndexTrigger : ovrpTouch_RIndexTrigger;
									CurrentAxisVal = (OvrpControllerState.Touches & mask) != 0 ? 1.f : 0.f;
									break;
								}
								case ESkyworthTouchCapacitiveAxes::IndexPointing:
								{
									const uint32 mask = (bIsLeft) ? ovrpNearTouch_LIndexTrigger : ovrpNearTouch_RIndexTrigger;
									CurrentAxisVal = (OvrpControllerState.NearTouches & mask) != 0 ? 0.f : 1.f;
									break;
								}
								case ESkyworthTouchCapacitiveAxes::ThumbUp:
								{
									const uint32 mask = (bIsLeft) ? ovrpNearTouch_LThumbButtons : ovrpNearTouch_RThumbButtons;
									CurrentAxisVal = (OvrpControllerState.NearTouches & mask) != 0 ? 0.f : 1.f;
									break;
								}
								default:
									check(0);
								}
							
								if (CurrentAxisVal != CapState.State)
								{
									MessageHandler->OnControllerAnalog(CapState.Axis, ControllerPair.UnrealControllerIndex, CurrentAxisVal);

									CapState.State = CurrentAxisVal;
								}
							}
						}
						else
						{
							// Controller isn't available right now.  Zero out input state, so that if it comes back it will send fresh event deltas
							State = FSkyworthTouchControllerState((EControllerHand)HandIndex);
							//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents: Controller for the hand %d is not tracked"), int(HandIndex));
						}
					}
				}
			}
		}
	}
	//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("SendControllerEvents"));
}


void FSkyworthInput::SetMessageHandler( const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler )
{
	MessageHandler = InMessageHandler;
}


bool FSkyworthInput::Exec( UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar )
{
	// No exec commands supported, for now.
	return false;
}

void FSkyworthInput::SetChannelValue( int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value )
{
	const EControllerHand Hand = ( ChannelType == FForceFeedbackChannelType::LEFT_LARGE || ChannelType == FForceFeedbackChannelType::LEFT_SMALL ) ? EControllerHand::Left : EControllerHand::Right;

	for( FSkyworthTouchControllerPair& ControllerPair : ControllerPairs )
	{
		if( ControllerPair.UnrealControllerIndex == ControllerId )
		{
			FSkyworthTouchControllerState& ControllerState = ControllerPair.ControllerStates[ (int32)Hand ];

			if (ControllerState.bPlayingHapticEffect)
			{
				continue;
			}

			// @todo: The SMALL channel controls frequency, the LARGE channel controls amplitude.  This is a bit of a weird fit.
			if( ChannelType == FForceFeedbackChannelType::LEFT_SMALL || ChannelType == FForceFeedbackChannelType::RIGHT_SMALL )
			{
				ControllerState.ForceFeedbackHapticFrequency = Value;
			}
			else
			{
				ControllerState.ForceFeedbackHapticAmplitude = Value;
			}

			UpdateForceFeedback( ControllerPair, Hand );

			break;
		}
	}
}

void FSkyworthInput::SetChannelValues( int32 ControllerId, const FForceFeedbackValues& Values )
{
	for( FSkyworthTouchControllerPair& ControllerPair : ControllerPairs )
	{
		if( ControllerPair.UnrealControllerIndex == ControllerId )
		{
			// @todo: The SMALL channel controls frequency, the LARGE channel controls amplitude.  This is a bit of a weird fit.
			FSkyworthTouchControllerState& LeftControllerState = ControllerPair.ControllerStates[ (int32)EControllerHand::Left ];
			if (!LeftControllerState.bPlayingHapticEffect)
			{
				LeftControllerState.ForceFeedbackHapticFrequency = Values.LeftSmall;
				LeftControllerState.ForceFeedbackHapticAmplitude = Values.LeftLarge;
				UpdateForceFeedback(ControllerPair, EControllerHand::Left);
			}

			FSkyworthTouchControllerState& RightControllerState = ControllerPair.ControllerStates[(int32)EControllerHand::Right];
			if (!RightControllerState.bPlayingHapticEffect)
			{
				RightControllerState.ForceFeedbackHapticFrequency = Values.RightSmall;
				RightControllerState.ForceFeedbackHapticAmplitude = Values.RightLarge;
				UpdateForceFeedback(ControllerPair, EControllerHand::Right);
			}
		}
	}
}

void FSkyworthInput::UpdateForceFeedback( const FSkyworthTouchControllerPair& ControllerPair, const EControllerHand Hand )
{
	const FSkyworthTouchControllerState& ControllerState = ControllerPair.ControllerStates[ (int32)Hand ];

	if( ControllerState.bIsConnected && !ControllerState.bPlayingHapticEffect)
	{
		if(ISkyworthHMDModule::IsAvailable() && FSkyworthHMDModule::GetPluginWrapper().GetInitialized() && FApp::HasVRFocus())
		{
			ovrpControllerState4 OvrpControllerState;
			
			if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetControllerState4((ovrpController)(ovrpController_Active | ovrpController_LTrackedRemote | ovrpController_RTrackedRemote), &OvrpControllerState)) &&
				(OvrpControllerState.ConnectedControllerTypes & (ovrpController_Touch | ovrpController_LTrackedRemote | ovrpController_RTrackedRemote)))
			{
				float FreqMin, FreqMax = 0.f;
				GetHapticFrequencyRange(FreqMin, FreqMax);

				// Map the [0.0 - 1.0] range to a useful range of frequencies for the Skyworth controllers
				const float ActualFrequency = FMath::Lerp(FreqMin, FreqMax, FMath::Clamp(ControllerState.ForceFeedbackHapticFrequency, 0.0f, 1.0f));

				// Skyworth SDK wants amplitude values between 0.0 and 1.0
				const float ActualAmplitude = ControllerState.ForceFeedbackHapticAmplitude * GetHapticAmplitudeScale();

				ovrpController OvrController = ovrpController_None;
				if (OvrpControllerState.ConnectedControllerTypes & (ovrpController_Touch))
				{
					OvrController = ( Hand == EControllerHand::Left ) ? ovrpController_LTouch : ovrpController_RTouch;
				}
				else if (OvrpControllerState.ConnectedControllerTypes & (ovrpController_LTrackedRemote | ovrpController_RTrackedRemote))
				{
					OvrController = ( Hand == EControllerHand::Left ) ? ovrpController_LTrackedRemote : ovrpController_RTrackedRemote;
				}

				static float LastAmplitudeSent = -1;
				if (ActualAmplitude != LastAmplitudeSent)
				{
					FSkyworthHMDModule::GetPluginWrapper().SetControllerVibration2(OvrController, ActualFrequency, ActualAmplitude);
					LastAmplitudeSent = ActualAmplitude;
				}
			}
		}
	}
}

bool FSkyworthInput::OnControllerButtonPressed(const FSkyworthButtonState& ButtonState, int32 ControllerId, bool IsRepeat)
{
	UE_LOG(LogOcInput, Log, TEXT("OnControllerButtonPressed:%s"), *ButtonState.Key.ToString());
	bool result = MessageHandler->OnControllerButtonPressed(ButtonState.Key, ControllerId, IsRepeat);

	if (!ButtonState.EmulatedKey.IsNone())
	{
		MessageHandler->OnControllerButtonPressed(ButtonState.EmulatedKey, ControllerId, IsRepeat);
	}

	return result;
}

bool FSkyworthInput::OnControllerButtonReleased(const FSkyworthButtonState& ButtonState, int32 ControllerId, bool IsRepeat)
{
	UE_LOG(LogOcInput, Log, TEXT("OnControllerButtonReleased:%s"), *ButtonState.Key.ToString());
	bool result = MessageHandler->OnControllerButtonReleased(ButtonState.Key, ControllerId, IsRepeat);

	if (!ButtonState.EmulatedKey.IsNone())
	{
		MessageHandler->OnControllerButtonReleased(ButtonState.EmulatedKey, ControllerId, IsRepeat);
	}

	return result;
}

FName FSkyworthInput::GetMotionControllerDeviceTypeName() const
{
	const static FName DefaultName(TEXT("SkyworthInput"));
	return DefaultName;
}

bool FSkyworthInput::GetControllerOrientationAndPosition( const int32 ControllerIndex, const EControllerHand DeviceHand, FRotator& OutOrientation, FVector& OutPosition, float WorldToMetersScale) const
{
	//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetControllerOrientationAndPosition ControllerIndex(%d) DeviceHand(%d)"), ControllerIndex, DeviceHand);
	// Don't do renderthread pose update if MRC is active due to controller jitter issues with SceneCaptures
	if (IsInGameThread() /*|| !USkyworthMRFunctionLibrary::IsMrcActive()*/)
	{
		//ovrpNode Node = DeviceHand == EControllerHand::Left ? ovrpNode_HandLeft : ovrpNode_HandRight;
		ovrpNode Node = ovrpNode_HandRight;
		//UE_CLOG(OVR_DEBUG_LOGGING,LogOcInput,Log,TEXT("GetControllerOrientationAndPosition1"));
		//for (const FSkyworthTouchControllerPair& ControllerPair : ControllerPairs)
		//{
		//	if (ControllerPair.UnrealControllerIndex == ControllerIndex)
		//	{
		//		if ((DeviceHand == EControllerHand::Left) || (DeviceHand == EControllerHand::Right))
		//		{
		//			//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetControllerOrientationAndPosition2"));
		//			if (ISkyworthHMDModule::IsAvailable() && FSkyworthHMDModule::GetPluginWrapper().GetInitialized())
		//			{
		//				//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetControllerOrientationAndPosition3"));
		//				SkyworthHMD::FSkyworthHMD* SkyworthHMD = static_cast<SkyworthHMD::FSkyworthHMD*>(GEngine->XRSystem->GetHMDDevice());
		//				ovrpNode Node = DeviceHand == EControllerHand::Left ? ovrpNode_HandLeft : ovrpNode_HandRight;

		//				ovrpBool bResult = true;
		//				bool bIsPositionValid = OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodePositionValid(Node, &bResult)) && bResult;
		//				ovrpResult result = FSkyworthHMDModule::GetPluginWrapper().GetNodeOrientationValid(Node, &bResult);
		//				//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetNodeOrientationValid[%d] result(%d)(%d)"), Node, result, bResult);
		//				bool bIsOrientationValid = OVRP_SUCCESS(result) && bResult;
		//				//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetControllerOrientationAndPosition3 bIsPositionValid(%d),bIsOrientationValid(%d)"), bIsPositionValid, bIsOrientationValid);
		//				if (bIsPositionValid || bIsOrientationValid)
		//				{
		//					SkyworthHMD::FSettings* Settings;
		//					SkyworthHMD::FGameFrame* CurrentFrame;

		//					if (IsInGameThread())
		//					{
		//						Settings = SkyworthHMD->GetSettings();
		//						CurrentFrame = SkyworthHMD->GetNextFrameToRender();
		//					}
		//					else
		//					{
		//						Settings = SkyworthHMD->GetSettings_RenderThread();
		//						CurrentFrame = SkyworthHMD->GetFrame_RenderThread();
		//					}

		//					if (Settings)
		//					{
		//						ovrpPoseStatef InPoseState;
		//						SkyworthHMD::FPose OutPose;
		//						//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetNodePoseState3 start"));
		//						ovrpResult result1 = FSkyworthHMDModule::GetPluginWrapper().GetNodePoseState3(ovrpStep_Render, CurrentFrame ? CurrentFrame->FrameNumber : OVRP_CURRENT_FRAMEINDEX, Node, &InPoseState);
		//						//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetNodePoseState3 result(%d)"), result1);
		//						if (OVRP_SUCCESS(result1) &&
		//							SkyworthHMD->ConvertPose_Internal(InPoseState.Pose, OutPose, Settings, WorldToMetersScale))
		//						{
		//							if (bIsPositionValid)
		//							{
		//								OutPosition = OutPose.Position;
		//							}
		//							//UE_LOG(LogOcInput, Log, TEXT("xxxOutOrientation bIsOrientationValid(%d)"), bIsOrientationValid);
		//							if (bIsOrientationValid)
		//							{
		//								OutOrientation = OutPose.Orientation.Rotator();
		//								//UE_LOG(LogOcInput,Log,TEXT("xxxOutOrientation(%f,%f,%f)"), OutOrientation.Pitch, OutOrientation.Yaw, OutOrientation.Roll);
		//							}

		//							return true;
		//						}
		//					}
		//				}
		//			}
		//		}

		//		break;
		//	}
		//}


		ovrpBool bResult = true;
		bool bIsPositionValid = OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodePositionValid(Node, &bResult)) && bResult;
		bool bIsOrientationValid = OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetNodeOrientationValid(Node, &bResult)) && bResult;
		OutPosition = FVector::ZeroVector;
		OutOrientation = FRotator::ZeroRotator;

		const gvr_arm_model::Vector3& ControllerPosition = ArmModelController.GetControllerPosition();
		const gvr_arm_model::Quaternion& ControllerRotation = ArmModelController.GetControllerRotation();
		FVector Position = ConvertGvrVectorToUnreal(ControllerPosition.x(), ControllerPosition.y(), ControllerPosition.z(), WorldToMetersScale);
		FQuat Orientation = ConvertGvrQuaternionToUnreal(ControllerRotation.w(), ControllerRotation.x(), ControllerRotation.y(), ControllerRotation.z());
		FQuat BaseOrientation;
		BaseOrientation = GEngine->XRSystem->GetBaseOrientation();
		OutOrientation = (BaseOrientation * Orientation).Rotator();
		OutPosition = BaseOrientation.RotateVector(Position);
		//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetControllerOrientationAndPosition ControllerIndex(%d) DeviceHand(%d)"), ControllerIndex, DeviceHand);
		return true;
	}

	return false;
}

ETrackingStatus FSkyworthInput::GetControllerTrackingStatus(const int32 ControllerIndex, const EControllerHand DeviceHand) const
{
	//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetControllerTrackingStatus ControllerIndex=%d,DeviceHand=%d"), ControllerIndex, DeviceHand);
	ETrackingStatus TrackingStatus = ETrackingStatus::NotTracked;
	if (DeviceHand == EControllerHand::Right)
	{
		return ETrackingStatus::Tracked;
	}
	if (DeviceHand != EControllerHand::Left && DeviceHand != EControllerHand::Right)
	{
		return TrackingStatus;
	}

	for( const FSkyworthTouchControllerPair& ControllerPair : ControllerPairs )
	{
		//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetControllerTrackingStatus UnrealControllerIndex=%d,%d"), ControllerPair.UnrealControllerIndex, ControllerIndex);
		if( ControllerPair.UnrealControllerIndex == ControllerIndex )
		{
			const FSkyworthTouchControllerState& ControllerState = ControllerPair.ControllerStates[ (int32)DeviceHand ];

			//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("GetControllerTrackingStatus[%d] PositionTracked %d,%d"), DeviceHand,ControllerState.bIsPositionTracked, ControllerState.bIsOrientationTracked);
			//UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("xxGetControllerTrackingStatus[%d] PositionValid %d,%d"), DeviceHand, ControllerState.bIsPositionValid, ControllerState.bIsOrientationValid);
			if( ControllerState.bIsPositionTracked && ControllerState.bIsOrientationTracked )
			{
				TrackingStatus = ETrackingStatus::Tracked;
			}
			else if( ControllerState.bIsPositionValid && ControllerState.bIsOrientationValid )
			{
				TrackingStatus = ETrackingStatus::InertialOnly;
			}

			break;
		}
	}

	return TrackingStatus;
}

void FSkyworthInput::SetHapticFeedbackValues(int32 ControllerId, int32 Hand, const FHapticFeedbackValues& Values)
{
	for (FSkyworthTouchControllerPair& ControllerPair : ControllerPairs)
	{
		if (ControllerPair.UnrealControllerIndex == ControllerId)
		{
			FSkyworthTouchControllerState& ControllerState = ControllerPair.ControllerStates[Hand];
			if (ControllerState.bIsConnected)
			{
				if(ISkyworthHMDModule::IsAvailable() && FSkyworthHMDModule::GetPluginWrapper().GetInitialized() && FApp::HasVRFocus())
				{
					static bool pulledHapticsDesc = false;
					if (!pulledHapticsDesc)
					{
						// Buffered haptics is currently only supported on Touch
						FSkyworthHMDModule::GetPluginWrapper().GetControllerHapticsDesc2(ovrpController_RTouch, &OvrpHapticsDesc);
						pulledHapticsDesc = true;
					}

					ovrpControllerState4 OvrpControllerState;
					
					ovrpController ControllerTypes = (ovrpController)(ovrpController_Active | ovrpController_LTrackedRemote | ovrpController_RTrackedRemote);

#ifdef USE_ANDROID_INPUT
					ControllerTypes = (ovrpController)(ControllerTypes | ovrpController_Touch);
#endif

					if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetControllerState4(ControllerTypes, &OvrpControllerState)) &&
						(OvrpControllerState.ConnectedControllerTypes & (ovrpController_Touch | ovrpController_LTrackedRemote | ovrpController_RTrackedRemote)))
					{
						// Buffered haptics is currently only supported on Touch
						FHapticFeedbackBuffer* HapticBuffer = Values.HapticBuffer;
						if ( (OvrpControllerState.ConnectedControllerTypes & (ovrpController_Touch)) &&
							HapticBuffer && HapticBuffer->SamplingRate == OvrpHapticsDesc.SampleRateHz)
						{
							const ovrpController OvrpController = (EControllerHand(Hand) == EControllerHand::Left) ? ovrpController_LTouch : ovrpController_RTouch;

							ovrpHapticsState OvrpHapticsState;
							if (OVRP_SUCCESS(FSkyworthHMDModule::GetPluginWrapper().GetControllerHapticsState2(OvrpController, &OvrpHapticsState)))
							{
								float appFrameRate = 90.f;
								FSkyworthHMDModule::GetPluginWrapper().GetAppFramerate2(&appFrameRate);

								int wanttosend = (int)ceil((float)OvrpHapticsDesc.SampleRateHz / appFrameRate) + 1;
								wanttosend = FMath::Min(wanttosend, OvrpHapticsDesc.MaximumBufferSamplesCount);
								wanttosend = FMath::Max(wanttosend, OvrpHapticsDesc.MinimumBufferSamplesCount);

								if (OvrpHapticsState.SamplesQueued < OvrpHapticsDesc.MinimumSafeSamplesQueued + wanttosend) //trying to minimize latency
								{
									wanttosend = (OvrpHapticsDesc.MinimumSafeSamplesQueued + wanttosend - OvrpHapticsState.SamplesQueued);
									void *bufferToFree = NULL;
									ovrpHapticsBuffer OvrpHapticsBuffer;
									OvrpHapticsBuffer.SamplesCount = FMath::Min(wanttosend, HapticBuffer->BufferLength - HapticBuffer->SamplesSent);

									if (OvrpHapticsBuffer.SamplesCount == 0 && OvrpHapticsState.SamplesQueued == 0)
									{
										HapticBuffer->bFinishedPlaying = true;
										ControllerState.bPlayingHapticEffect = false;
									}
									else
									{
										if (OvrpHapticsDesc.SampleSizeInBytes == 1)
										{
											uint8* samples = (uint8*)FMemory::Malloc(OvrpHapticsBuffer.SamplesCount * sizeof(*samples));
											for (int i = 0; i < OvrpHapticsBuffer.SamplesCount; i++)
											{
												samples[i] = static_cast<uint8>(HapticBuffer->RawData[HapticBuffer->CurrentPtr + i] * HapticBuffer->ScaleFactor);
											}
											OvrpHapticsBuffer.Samples = bufferToFree = samples;
										}
										else if (OvrpHapticsDesc.SampleSizeInBytes == 2)
										{
											uint16* samples = (uint16*)FMemory::Malloc(OvrpHapticsBuffer.SamplesCount * sizeof(*samples));
											for (int i = 0; i < OvrpHapticsBuffer.SamplesCount; i++)
											{
												const uint32 DataIndex = HapticBuffer->CurrentPtr + (i * 2);
												const uint16* const RawData = reinterpret_cast<uint16*>(&HapticBuffer->RawData[DataIndex]);
												samples[i] = static_cast<uint16>(*RawData * HapticBuffer->ScaleFactor);
											}
											OvrpHapticsBuffer.Samples = bufferToFree = samples;
										}
										else if (OvrpHapticsDesc.SampleSizeInBytes == 4)
										{
											uint32* samples = (uint32*)FMemory::Malloc(OvrpHapticsBuffer.SamplesCount * sizeof(*samples));
											for (int i = 0; i < OvrpHapticsBuffer.SamplesCount; i++)
											{
												const uint32 DataIndex = HapticBuffer->CurrentPtr + (i * 4);
												const uint32* const RawData = reinterpret_cast<uint32*>(&HapticBuffer->RawData[DataIndex]);
												samples[i] = static_cast<uint32>(*RawData * HapticBuffer->ScaleFactor);
											}
											OvrpHapticsBuffer.Samples = bufferToFree = samples;
										}

										FSkyworthHMDModule::GetPluginWrapper().SetControllerHaptics2(OvrpController, OvrpHapticsBuffer);

										if (bufferToFree)
										{
											FMemory::Free(bufferToFree);
										}

										HapticBuffer->CurrentPtr += (OvrpHapticsBuffer.SamplesCount * OvrpHapticsDesc.SampleSizeInBytes);
										HapticBuffer->SamplesSent += OvrpHapticsBuffer.SamplesCount;

										ControllerState.bPlayingHapticEffect = true;
									}
								}
							}
						} 
						else
						{
							// Buffered haptics is currently only supported on Touch
							if ( (OvrpControllerState.ConnectedControllerTypes & (ovrpController_Touch)) && (HapticBuffer) )
							{
								UE_CLOG(OVR_DEBUG_LOGGING, LogOcInput, Log, TEXT("Haptic Buffer not sampled at the correct frequency : %d vs %d"), OvrpHapticsDesc.SampleRateHz, HapticBuffer->SamplingRate);
							}
							float FreqMin, FreqMax = 0.f;
							GetHapticFrequencyRange(FreqMin, FreqMax);

							const float InitialFreq = (Values.Frequency > 0.0f) ? Values.Frequency : 1.0f;
							const float Frequency = FMath::Lerp(FreqMin, FreqMax, FMath::Clamp(InitialFreq, 0.f, 1.f));

							const float Amplitude = Values.Amplitude * GetHapticAmplitudeScale();

							if (ControllerState.HapticAmplitude != Amplitude || ControllerState.HapticFrequency != Frequency)
							{
								ControllerState.HapticAmplitude = Amplitude;
								ControllerState.HapticFrequency = Frequency;

								ovrpController OvrController = ovrpController_None;
								if (OvrpControllerState.ConnectedControllerTypes & (ovrpController_Touch))
								{
									OvrController = (EControllerHand(Hand) == EControllerHand::Left) ? ovrpController_LTouch : ovrpController_RTouch;
								}
								else if (OvrpControllerState.ConnectedControllerTypes & (ovrpController_LTrackedRemote | ovrpController_RTrackedRemote))
								{
									OvrController = (EControllerHand(Hand) == EControllerHand::Left) ? ovrpController_LTrackedRemote : ovrpController_RTrackedRemote;
								}

								FSkyworthHMDModule::GetPluginWrapper().SetControllerVibration2(OvrController, Frequency, Amplitude);

								ControllerState.bPlayingHapticEffect = (Amplitude != 0.f) && (Frequency != 0.f);
							}
						}
					}
				}
			}

			break;
		}
	}
}

void FSkyworthInput::GetHapticFrequencyRange(float& MinFrequency, float& MaxFrequency) const
{
	MinFrequency = 0.f;
	MaxFrequency = 1.f;
}

float FSkyworthInput::GetHapticAmplitudeScale() const
{
	return 1.f;
}

uint32 FSkyworthInput::GetNumberOfTouchControllers() const
{
	uint32 RetVal = 0;

	for (FSkyworthTouchControllerPair Pair : ControllerPairs)
	{
		RetVal += (Pair.ControllerStates[0].bIsConnected ? 1 : 0);
		RetVal += (Pair.ControllerStates[1].bIsConnected ? 1 : 0);
	}

	return RetVal;
}

} // namespace SkyworthInput

#undef LOCTEXT_NAMESPACE
#endif	 // OCULUS_INPUT_SUPPORTED_PLATFORMS
