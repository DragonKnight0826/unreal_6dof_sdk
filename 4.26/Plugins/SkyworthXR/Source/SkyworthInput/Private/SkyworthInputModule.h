// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "ISkyworthInputModule.h"
#include "IInputDevice.h"
#include "Templates/SharedPointer.h"

#define LOCTEXT_NAMESPACE "SkyworthInput"


//-------------------------------------------------------------------------------------------------
// FOculusInputModule
//-------------------------------------------------------------------------------------------------

#if OCULUS_INPUT_SUPPORTED_PLATFORMS

namespace SkyworthInput
{
	class FSkyworthInput;
}

class FSkyworthInputModule : public ISkyworthInputModule
{
	TWeakPtr<SkyworthInput::FSkyworthInput> SkyworthInputDevice;

	// IInputDeviceModule overrides
	virtual void StartupModule() override;
	virtual TSharedPtr< class IInputDevice > CreateInputDevice( const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler ) override;

	// IOculusInputModule overrides
	virtual uint32 GetNumberOfTouchControllers() const override;
};

#else	//	GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS

class FSkyworthInputModule : public FDefaultModuleImpl
{
	virtual uint32 GetNumberOfTouchControllers() const
	{
		return 0;
	};
};

#endif	// GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS


#undef LOCTEXT_NAMESPACE
