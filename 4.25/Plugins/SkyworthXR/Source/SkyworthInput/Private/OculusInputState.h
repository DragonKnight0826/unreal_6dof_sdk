// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "ISkyworthInputModule.h"

#if OCULUS_INPUT_SUPPORTED_PLATFORMS
#include "IMotionController.h"
#include "InputCoreTypes.h"
#include "GenericPlatform/GenericApplicationMessageHandler.h"

namespace SkyworthInput
{


	//-------------------------------------------------------------------------------------------------
	// Button names
	//-------------------------------------------------------------------------------------------------

	enum class ESkyworthHeadDeviceButton
	{
		Enter,
		Back,
		Home,
		VolumeUp,
		VolumeDown,

		TotalButtonCount
	};
	enum class ESkyworthTouchControllerButton
	{
		// NOTE: The Trigger and Grip digital buttons are synthetic.  Skyworth hardware doesn't support a digital press for these
		Trigger,
		Grip,

		XA,
		YB,
		Thumbstick,

		Thumbstick_Up,
		Thumbstick_Down,
		Thumbstick_Left,
		Thumbstick_Right,

		Menu,

		Thumbstick_Touch,
		Trigger_Touch,
		XA_Touch,
		YB_Touch,

		/** Skyworth Go buttons */
		/*Back,
		Touchpad,
		Touchpad_Touch,*/

		/** Total number of controller buttons */
		TotalButtonCount
	};

	enum class ESkyworthRemoteControllerButton
	{
		DPad_Up,
		DPad_Down,
		DPad_Left,
		DPad_Right,

		Trigger,
		Enter,
		Back,

		VolumeUp,
		VolumeDown,
		Home,
		Touchpad,

		/** Total number of controller buttons */
		TotalButtonCount
	};

	enum class ESkyworthTouchCapacitiveAxes
	{
		Thumbstick,
		Trigger,
		XA,
		YB,
		IndexPointing,
		ThumbUp,

		/** Total number of capacitive axes */
		TotalAxisCount
	};

	enum class ESkyworthTouchpadButton // GearVR HMT side touchpad
	{
		Touchpad,
		Back,

		/** Total number of touchpad buttons */
		TotalButtonCount
	};


	//-------------------------------------------------------------------------------------------------
	// FSkyworthKey
	//-------------------------------------------------------------------------------------------------

	struct FSkyworthKey
	{
		static const FKey SkyworthTouch_Left_Thumbstick;
		static const FKey SkyworthTouch_Left_Trigger;
		static const FKey SkyworthTouch_Left_FaceButton1; // X or A
		static const FKey SkyworthTouch_Left_FaceButton2; // Y or B
		static const FKey SkyworthTouch_Left_IndexPointing;
		static const FKey SkyworthTouch_Left_ThumbUp;

		static const FKey SkyworthTouch_Right_Thumbstick;
		static const FKey SkyworthTouch_Right_Trigger;
		static const FKey SkyworthTouch_Right_FaceButton1; // X or A
		static const FKey SkyworthTouch_Right_FaceButton2; // Y or B
		static const FKey SkyworthTouch_Right_IndexPointing;
		static const FKey SkyworthTouch_Right_ThumbUp;

		static const FKey SkyworthRemote_DPad_Up;
		static const FKey SkyworthRemote_DPad_Down;
		static const FKey SkyworthRemote_DPad_Left;
		static const FKey SkyworthRemote_DPad_Right;

		static const FKey SkyworthRemote_Enter;
		static const FKey SkyworthRemote_Back;
		static const FKey SkyworthRemote_Trigger;

		static const FKey SkyworthRemote_VolumeUp;
		static const FKey SkyworthRemote_VolumeDown;
		static const FKey SkyworthRemote_Home;

		static const FKey SkyworthTouchpad_Touchpad;
		static const FKey SkyworthTouchpad_Touchpad_X;
		static const FKey SkyworthTouchpad_Touchpad_Y;
		static const FKey SkyworthTouchpad_Back;

		static const FKey SkyworthHead_Back;
		static const FKey SkyworthHead_Enter;
		static const FKey SkyworthHead_Home;
		static const FKey SkyworthHead_VolumeUp;
		static const FKey SkyworthHead_VolumeDown;
	};


	//-------------------------------------------------------------------------------------------------
	// FSkyworthKeyNames
	//-------------------------------------------------------------------------------------------------

	struct FSkyworthKeyNames
	{
		typedef FName Type;

		static const FName SkyworthTouch_Left_Thumbstick;
		static const FName SkyworthTouch_Left_Trigger;
		static const FName SkyworthTouch_Left_FaceButton1; // X or A
		static const FName SkyworthTouch_Left_FaceButton2; // Y or B
		static const FName SkyworthTouch_Left_IndexPointing;
		static const FName SkyworthTouch_Left_ThumbUp;

		static const FName SkyworthTouch_Right_Thumbstick;
		static const FName SkyworthTouch_Right_Trigger;
		static const FName SkyworthTouch_Right_FaceButton1; // X or A
		static const FName SkyworthTouch_Right_FaceButton2; // Y or B
		static const FName SkyworthTouch_Right_IndexPointing;
		static const FName SkyworthTouch_Right_ThumbUp;

		static const FName SkyworthRemote_DPad_Up;
		static const FName SkyworthRemote_DPad_Down;
		static const FName SkyworthRemote_DPad_Left;
		static const FName SkyworthRemote_DPad_Right;

		static const FName SkyworthRemote_Enter;
		static const FName SkyworthRemote_Back;
		static const FName SkyworthRemote_Trigger;


		static const FName SkyworthRemote_VolumeUp;
		static const FName SkyworthRemote_VolumeDown;
		static const FName SkyworthRemote_Home;

		static const FName SkyworthTouchpad_Touchpad;
		static const FName SkyworthTouchpad_Touchpad_X;
		static const FName SkyworthTouchpad_Touchpad_Y;
		static const FName SkyworthTouchpad_Back;

		static const FName SkyworthHead_Enter;
		static const FName SkyworthHead_Back;
		static const FName SkyworthHead_Home;
		static const FName SkyworthHead_VolumeUp;
		static const FName SkyworthHead_VolumeDown;
	};


	//-------------------------------------------------------------------------------------------------
	// FSkyworthButtonState -  Digital button state
	//-------------------------------------------------------------------------------------------------

	struct FSkyworthButtonState
	{
		/** The Unreal button this maps to.  Different depending on whether this is the Left or Right hand controller */
		FName Key;

		/** The Unreal button this maps to.  Different depending on whether this is the Left or Right hand controller */
		FName EmulatedKey;

		/** Whether we're pressed or not.  While pressed, we will generate repeat presses on a timer */
		bool bIsPressed;

		/** Next time a repeat event should be generated for each button */
		double NextRepeatTime;


		/** Default constructor that just sets sensible defaults */
		FSkyworthButtonState()
			: Key(NAME_None),
			EmulatedKey(NAME_None),
			bIsPressed(false),
			NextRepeatTime(0.0)
		{
		}
	};


	//-------------------------------------------------------------------------------------------------
	// FSkyworthTouchCapacitiveState - Capacitive Axis State
	//-------------------------------------------------------------------------------------------------

	struct FSkyworthTouchCapacitiveState
	{
		/** The axis that this button state maps to */
		FName Axis;

		/** How close the finger is to this button, from 0.f to 1.f */
		float State;

		FSkyworthTouchCapacitiveState()
			: Axis(NAME_None)
			, State(0.f)
		{
		}
	};


	//-------------------------------------------------------------------------------------------------
	// FSkyworthTouchControllerState - Input state for an Skyworth motion controller
	//-------------------------------------------------------------------------------------------------

	struct FSkyworthTouchControllerState
	{
		/** True if the device is connected, otherwise false */
		bool bIsConnected;

		/** True if position is being tracked, otherwise false */
		bool bIsPositionTracked;

		/** True if position is valid (tracked or estimated), otherwise false */
		bool bIsPositionValid;

		/** True if orientation is being tracked, otherwise false */
		bool bIsOrientationTracked;

		/** True if orientation is valid (tracked or estimated), otherwise false */
		bool bIsOrientationValid;

		/** Analog trigger */
		float TriggerAxis;

		/** Grip trigger */
		float GripAxis;

		/** Thumbstick */
		FVector2D ThumbstickAxes;

		/** Thumbstick */
		FVector2D TouchpadAxes;

		/** Button states */
		FSkyworthButtonState Buttons[(int32)ESkyworthTouchControllerButton::TotalButtonCount];

		/** Capacitive Touch axes */
		FSkyworthTouchCapacitiveState CapacitiveAxes[(int32)ESkyworthTouchCapacitiveAxes::TotalAxisCount];

		/** Whether or not we're playing a haptic effect.  If true, force feedback calls will be early-outed in favor of the haptic effect */
		bool bPlayingHapticEffect;

		/** Haptic frequency (zero to disable) */
		float HapticFrequency;

		/** Haptic amplitude (zero to disable) */
		float HapticAmplitude;

		/** Force feedback haptic frequency (zero to disable) */
		float ForceFeedbackHapticFrequency;

		/** Force feedback haptic amplitude (zero to disable) */
		float ForceFeedbackHapticAmplitude;

		/** Number of times that controller was recentered (for mobile controllers) */
		int RecenterCount;


		/** Explicit constructor sets up sensible defaults */
		FSkyworthTouchControllerState(const EControllerHand Hand)
			: bIsConnected(false),
			bIsPositionTracked(false),
			bIsPositionValid(false),
			bIsOrientationTracked(false),
			bIsOrientationValid(false),
			TriggerAxis(0.0f),
			GripAxis(0.0f),
			ThumbstickAxes(FVector2D::ZeroVector),
			bPlayingHapticEffect(false),
			HapticFrequency(0.0f),
			HapticAmplitude(0.0f),
			ForceFeedbackHapticFrequency(0.0f),
			ForceFeedbackHapticAmplitude(0.0f),
			RecenterCount(0)
		{
			for (FSkyworthButtonState& Button : Buttons)
			{
				Button.bIsPressed = false;
				Button.NextRepeatTime = 0.0;
			}

			Buttons[(int32)ESkyworthTouchControllerButton::Trigger].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Trigger_Click.GetFName() : EKeys::OculusTouch_Right_Trigger_Click.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::Grip].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Grip_Click.GetFName() : EKeys::OculusTouch_Right_Grip_Click.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::Thumbstick].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Thumbstick_Click.GetFName() : EKeys::OculusTouch_Right_Thumbstick_Click.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::XA].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_X_Click.GetFName() : EKeys::OculusTouch_Right_A_Click.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::YB].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Y_Click.GetFName() : EKeys::OculusTouch_Right_B_Click.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::Thumbstick_Up].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Thumbstick_Up.GetFName() : EKeys::OculusTouch_Right_Thumbstick_Up.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::Thumbstick_Down].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Thumbstick_Down.GetFName() : EKeys::OculusTouch_Right_Thumbstick_Down.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::Thumbstick_Left].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Thumbstick_Left.GetFName() : EKeys::OculusTouch_Right_Thumbstick_Left.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::Thumbstick_Right].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Thumbstick_Right.GetFName() : EKeys::OculusTouch_Right_Thumbstick_Right.GetFName();

			Buttons[(int32)ESkyworthTouchControllerButton::Menu].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Menu_Click.GetFName() : EKeys::OculusTouch_Right_System_Click.GetFName();

			Buttons[(int32)ESkyworthTouchControllerButton::Thumbstick_Touch].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Thumbstick_Touch.GetFName() : EKeys::OculusTouch_Right_Thumbstick_Touch.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::Trigger_Touch].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Trigger_Touch.GetFName() : EKeys::OculusTouch_Right_Trigger_Touch.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::XA_Touch].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_X_Touch.GetFName() : EKeys::OculusTouch_Right_A_Touch.GetFName();
			Buttons[(int32)ESkyworthTouchControllerButton::YB_Touch].Key = (Hand == EControllerHand::Left) ? EKeys::OculusTouch_Left_Y_Touch.GetFName() : EKeys::OculusTouch_Right_B_Touch.GetFName();

			//Buttons[ (int32)ESkyworthTouchControllerButton::Back ].Key = (Hand == EControllerHand::Left) ? EKeys::OculusGo_Left_Back_Click.GetFName() : EKeys::OculusGo_Right_Back_Click.GetFName();
			//Buttons[ (int32)ESkyworthTouchControllerButton::Touchpad ].Key = (Hand == EControllerHand::Left) ? EKeys::OculusGo_Left_Trackpad_Click.GetFName() : EKeys::OculusGo_Right_Trackpad_Click.GetFName();
			//Buttons[ (int32)ESkyworthTouchControllerButton::Touchpad_Touch ].Key = (Hand == EControllerHand::Left) ? EKeys::OculusGo_Left_Trackpad_Touch.GetFName() : EKeys::OculusGo_Right_Trackpad_Touch.GetFName();

			CapacitiveAxes[(int32)ESkyworthTouchCapacitiveAxes::Thumbstick].Axis = (Hand == EControllerHand::Left) ? FSkyworthKeyNames::SkyworthTouch_Left_Thumbstick : FSkyworthKeyNames::SkyworthTouch_Right_Thumbstick;
			CapacitiveAxes[(int32)ESkyworthTouchCapacitiveAxes::Trigger].Axis = (Hand == EControllerHand::Left) ? FSkyworthKeyNames::SkyworthTouch_Left_Trigger : FSkyworthKeyNames::SkyworthTouch_Right_Trigger;
			CapacitiveAxes[(int32)ESkyworthTouchCapacitiveAxes::XA].Axis = (Hand == EControllerHand::Left) ? FSkyworthKeyNames::SkyworthTouch_Left_FaceButton1 : FSkyworthKeyNames::SkyworthTouch_Right_FaceButton1;
			CapacitiveAxes[(int32)ESkyworthTouchCapacitiveAxes::YB].Axis = (Hand == EControllerHand::Left) ? FSkyworthKeyNames::SkyworthTouch_Left_FaceButton2 : FSkyworthKeyNames::SkyworthTouch_Right_FaceButton2;
			CapacitiveAxes[(int32)ESkyworthTouchCapacitiveAxes::IndexPointing].Axis = (Hand == EControllerHand::Left) ? FSkyworthKeyNames::SkyworthTouch_Left_IndexPointing : FSkyworthKeyNames::SkyworthTouch_Right_IndexPointing;
			CapacitiveAxes[(int32)ESkyworthTouchCapacitiveAxes::ThumbUp].Axis = (Hand == EControllerHand::Left) ? FSkyworthKeyNames::SkyworthTouch_Left_ThumbUp : FSkyworthKeyNames::SkyworthTouch_Right_ThumbUp;
		}

		/** Default constructor does nothing.  Don't use it.  This only exists because we cannot initialize an array of objects with no default constructor on non-C++ 11 compliant compilers (VS 2013) */
		FSkyworthTouchControllerState()
		{
		}
	};

	struct FSkyworthHeadDeviceState
	{
		FSkyworthButtonState Buttons[(int32)ESkyworthHeadDeviceButton::TotalButtonCount];
		FSkyworthHeadDeviceState() 
		{
			for (FSkyworthButtonState& Button : Buttons)
			{
				Button.bIsPressed = false;
				Button.NextRepeatTime = 0.0;
			}
			Buttons[(int32)ESkyworthHeadDeviceButton::Enter].Key = FSkyworthKeyNames::SkyworthHead_Enter;
			Buttons[(int32)ESkyworthHeadDeviceButton::Back].Key = FSkyworthKeyNames::SkyworthHead_Back;
			Buttons[(int32)ESkyworthHeadDeviceButton::Home].Key = FSkyworthKeyNames::SkyworthHead_Home;
			Buttons[(int32)ESkyworthHeadDeviceButton::VolumeUp].Key = FSkyworthKeyNames::SkyworthHead_VolumeUp;
			Buttons[(int32)ESkyworthHeadDeviceButton::VolumeDown].Key = FSkyworthKeyNames::SkyworthHead_VolumeDown;
		}
	};

	//-------------------------------------------------------------------------------------------------
	// FSkyworthRemoteControllerState
	//-------------------------------------------------------------------------------------------------

	struct FSkyworthRemoteControllerState
	{
		/** Button states */
		FSkyworthButtonState Buttons[(int32)ESkyworthRemoteControllerButton::TotalButtonCount];

		FVector2D TouchpadPosition;
		FSkyworthRemoteControllerState()
			: TouchpadPosition(FVector2D::ZeroVector)
		{
			for (FSkyworthButtonState& Button : Buttons)
			{
				Button.bIsPressed = false;
				Button.NextRepeatTime = 0.0;
			}

			Buttons[(int32)ESkyworthRemoteControllerButton::DPad_Up].Key = FSkyworthKeyNames::SkyworthRemote_DPad_Up;
			Buttons[(int32)ESkyworthRemoteControllerButton::DPad_Down].Key = FSkyworthKeyNames::SkyworthRemote_DPad_Down;
			Buttons[(int32)ESkyworthRemoteControllerButton::DPad_Left].Key = FSkyworthKeyNames::SkyworthRemote_DPad_Left;
			Buttons[(int32)ESkyworthRemoteControllerButton::DPad_Right].Key = FSkyworthKeyNames::SkyworthRemote_DPad_Right;
			Buttons[(int32)ESkyworthRemoteControllerButton::Enter].Key = FSkyworthKeyNames::SkyworthRemote_Enter;
			Buttons[(int32)ESkyworthRemoteControllerButton::Back].Key = FSkyworthKeyNames::SkyworthRemote_Back;
			Buttons[(int32)ESkyworthRemoteControllerButton::Trigger].Key = FSkyworthKeyNames::SkyworthRemote_Trigger;
			Buttons[(int32)ESkyworthRemoteControllerButton::VolumeUp].Key = FSkyworthKeyNames::SkyworthRemote_VolumeUp;
			Buttons[(int32)ESkyworthRemoteControllerButton::VolumeDown].Key = FSkyworthKeyNames::SkyworthRemote_VolumeDown;
			Buttons[(int32)ESkyworthRemoteControllerButton::Home].Key = FSkyworthKeyNames::SkyworthRemote_Home;
			Buttons[(int32)ESkyworthRemoteControllerButton::Touchpad].Key = FSkyworthKeyNames::SkyworthTouchpad_Touchpad;
		}

		void MapKeysToGamepad()
		{
			Buttons[(int32)ESkyworthRemoteControllerButton::DPad_Up].EmulatedKey = FGamepadKeyNames::DPadUp;
			Buttons[(int32)ESkyworthRemoteControllerButton::DPad_Down].EmulatedKey = FGamepadKeyNames::DPadDown;
			Buttons[(int32)ESkyworthRemoteControllerButton::DPad_Left].EmulatedKey = FGamepadKeyNames::DPadLeft;
			Buttons[(int32)ESkyworthRemoteControllerButton::DPad_Right].EmulatedKey = FGamepadKeyNames::DPadRight;
			Buttons[(int32)ESkyworthRemoteControllerButton::Enter].EmulatedKey = FGamepadKeyNames::SpecialRight;
			Buttons[(int32)ESkyworthRemoteControllerButton::Back].EmulatedKey = FGamepadKeyNames::SpecialLeft;
		}
	};


	//-------------------------------------------------------------------------------------------------
	// FSkyworthTouchControllerPair - A pair of wireless motion controllers, one for either hand
	//-------------------------------------------------------------------------------------------------

	struct FSkyworthTouchControllerPair
	{
		/** The Unreal controller index assigned to this pair */
		int32 UnrealControllerIndex;

		/** Current device state for either hand */
		FSkyworthTouchControllerState ControllerStates[2];

		/** Default constructor that sets up sensible defaults */
		FSkyworthTouchControllerPair()
			: UnrealControllerIndex(INDEX_NONE),
			ControllerStates()
		{
			ControllerStates[(int32)EControllerHand::Left] = FSkyworthTouchControllerState(EControllerHand::Left);
			ControllerStates[(int32)EControllerHand::Right] = FSkyworthTouchControllerState(EControllerHand::Right);
		}
	};

	//-------------------------------------------------------------------------------------------------
	// FSkyworthTouchpadState
	//-------------------------------------------------------------------------------------------------
	struct FSkyworthTouchpadState
	{
		/** Button states */
		FSkyworthButtonState Buttons[(int32)ESkyworthTouchpadButton::TotalButtonCount];

		/** Touchpad state */
		FVector2D TouchpadPosition;

		FSkyworthTouchpadState()
			: TouchpadPosition(FVector2D::ZeroVector)
		{
			for (FSkyworthButtonState& Button : Buttons)
			{
				Button.bIsPressed = false;
				Button.NextRepeatTime = 0.0;
			}

			Buttons[(int32)ESkyworthTouchpadButton::Touchpad].Key = FSkyworthKeyNames::SkyworthTouchpad_Touchpad;
			Buttons[(int32)ESkyworthTouchpadButton::Back].Key = FSkyworthKeyNames::SkyworthTouchpad_Back;
		}
	};

} // namespace SkyworthInput

#endif	// OCULUS_INPUT_SUPPORTED_PLATFORMS

