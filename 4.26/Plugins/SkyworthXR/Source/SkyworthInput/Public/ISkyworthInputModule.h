// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "IInputDeviceModule.h"

//#define SKYWORTHCONTROLLER_SUPPORTED_ANDROID_PLATFORMS (PLATFORM_ANDROID)
//#define SKYWORTHCONTROLLER_SUPPORTED_EDITOR_PLATFORMS (PLATFORM_WINDOWS || PLATFORM_MAC)
//#define SKYWORTHCONTROLLER_SUPPORTED_EMULATOR_PLATFORMS (WITH_EDITOR && SKYWORTHCONTROLLER_SUPPORTED_EDITOR_PLATFORMS)
//#define SKYWORTHCONTROLLER_SUPPORTED_INSTANT_PREVIEW_PLATFORMS (WITH_EDITOR && SKYWORTHCONTROLLER_SUPPORTED_EDITOR_PLATFORMS)
//#define SKYWORTHCONTROLLER_SUPPORTED_PLATFORMS (SKYWORTHCONTROLLER_SUPPORTED_ANDROID_PLATFORMS || SKYWORTHCONTROLLER_SUPPORTED_EMULATOR_PLATFORMS ||SKYWORTHCONTROLLER_SUPPORTED_INSTANT_PREVIEW_PLATFORMS)
#define OCULUS_INPUT_SUPPORTED_PLATFORMS (PLATFORM_WINDOWS && WINVER > 0x0502) || (PLATFORM_ANDROID_ARM || PLATFORM_ANDROID_ARM64)
#define GOOGLEVRCONTROLLER_SUPPORTED_PLATFORMS 1
#define GOOGLEVRCONTROLLER_SUPPORTED_INSTANT_PREVIEW_PLATFORMS 0
#define GOOGLEVRCONTROLLER_SUPPORTED_ANDROID_PLATFORMS (PLATFORM_ANDROID)
#define GOOGLEVRCONTROLLER_SUPPORTED_EDITOR_PLATFORMS (PLATFORM_WINDOWS || PLATFORM_MAC)
#define GOOGLEVRCONTROLLER_SUPPORTED_EMULATOR_PLATFORMS 0
/**
 * The public interface to this module.  In most cases, this interface is only public to sibling modules 
 * within this plugin.
 */
class ISkyworthInputModule : public IInputDeviceModule
{

public:

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline ISkyworthInputModule& Get()
	{
		return FModuleManager::LoadModuleChecked< ISkyworthInputModule >( "SkyworthInput" );
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "SkyworthInput" );
	}
	/**
	 * Gets the number of Touch controllers that are active, so that games that require them can check to make sure they're present
	 *
	 * @return The number of Touch controllers that are active (but not necessarily tracked)
	 */
	virtual uint32 GetNumberOfTouchControllers() const = 0;
};
