// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#include "SkyworthInputModule.h"

#if OCULUS_INPUT_SUPPORTED_PLATFORMS
#include "SkyworthInput.h"
#include "OculusHMDModule.h"

#define LOCTEXT_NAMESPACE "SkyworthInput"


//-------------------------------------------------------------------------------------------------
// FOculusInputModule
//-------------------------------------------------------------------------------------------------

void FSkyworthInputModule::StartupModule()
{
	IInputDeviceModule::StartupModule();
	SkyworthInput::FSkyworthInput::PreInit();
}


TSharedPtr< class IInputDevice > FSkyworthInputModule::CreateInputDevice( const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler )
{
	if (ISkyworthHMDModule::IsAvailable())
	{
		if (FSkyworthHMDModule::Get().PreInit())
		{
			TSharedPtr< SkyworthInput::FSkyworthInput > InputDevice(new SkyworthInput::FSkyworthInput(InMessageHandler));
			SkyworthInputDevice = InputDevice;
			return InputDevice;
		}
		// else, they may just not have a oculus headset plugged in (which we have to account for - no need for a warning)
	}
	else
	{
		UE_LOG(LogOcInput, Warning, TEXT("SkyworthInput plugin enabled, but SkyworthHMD plugin is not available."));
	}
	return nullptr;		
}

uint32 FSkyworthInputModule::GetNumberOfTouchControllers() const
{
	if (SkyworthInputDevice.IsValid())
	{
		return SkyworthInputDevice.Pin()->GetNumberOfTouchControllers();
	}
	return 0;
}


#endif	// OCULUS_INPUT_SUPPORTED_PLATFORMS

IMPLEMENT_MODULE( FSkyworthInputModule, SkyworthInput )

#undef LOCTEXT_NAMESPACE
