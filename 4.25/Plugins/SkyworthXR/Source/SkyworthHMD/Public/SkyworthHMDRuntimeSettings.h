// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkyworthHMDTypes.h"
#include "SkyworthFunctionLibrary.h"
#include "SkyworthHMDRuntimeSettings.generated.h"

/**
* Implements the settings for the OculusVR plugin.
*/
UCLASS(config = Engine, defaultconfig)
class SKYWORTHHMD_API USkyworthHMDRuntimeSettings : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	/** Whether the Splash screen is enabled. */
	//UPROPERTY(config, EditAnywhere, Category = SplashScreen)
	bool bAutoEnabled;

	/** An array of splash screen descriptors listing textures to show and their positions. */
	//UPROPERTY(config, EditAnywhere, Category = SplashScreen)
	TArray<FSkyworthSplashDesc> SplashDescs;

	/** Whether Dash is supported by the app, which will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!) */
	//UPROPERTY(config, EditAnywhere, Category = PC)
	bool bSupportsDash;

	/** Whether the app's depth buffer is shared with the Rift Compositor, for layer (including Dash) compositing, PTW, and potentially more. */
	//UPROPERTY(config, EditAnywhere, Category = PC)
	bool bCompositesDepth;

	/** Computes mipmaps for the eye buffers every frame, for a higher quality distortion */
	//UPROPERTY(config, EditAnywhere, Category = PC)
	bool bHQDistortion;

	/** Minimum allowed pixel density. */
	//UPROPERTY(config, EditAnywhere, Category = PC)
	float PixelDensityMin;

	/** Maximum allowed pixel density. */
	//UPROPERTY(config, EditAnywhere, Category = PC)
	float PixelDensityMax;

	/** Default CPU level controlling CPU frequency on the mobile device */
	//UPROPERTY(config, EditAnywhere, Category = Mobile)
	int CPULevel;

	/** Default GPU level controlling GPU frequency on the mobile device */
	//UPROPERTY(config, EditAnywhere, Category = Mobile)
	int GPULevel;

	/** Default Fixed Foveated Rendering level for Oculus Go and Quest */
	//UPROPERTY(config, EditAnywhere, Category = Mobile)
	FSFixedFoveatedRenderingLevel FFRLevel;

	/** Compensates in the compositor for chromatic aberration, at a higher GPU cost but without the color fringes on the sides of the lenses */
	//UPROPERTY(config, EditAnywhere, Category = Mobile)
	bool bChromaCorrection;

	/** Recenters the HMD too when the controller recenter button is pressed on Go and GearVR */
	//UPROPERTY(config, EditAnywhere, Category = Mobile)
	bool bRecenterHMDWithController;
	/** Recenters the HMD too when the controller recenter button is pressed on Go and GearVR */
	UPROPERTY(config, EditAnywhere, Category = SplashScreen, Meta = (DisplayName = "Use System Splash", ToolTip = "If you want to use system splash, Please enable it!"))
	bool bEnableSystemSplash;

	UPROPERTY(config, EditAnywhere, Category = Mobile, Meta = (DisplayName = "Enable HomeKey", ToolTip = "If you enable it, The application will back to launcher when you press the Home key."))
	bool bEnableHomeKey;
private:
	void LoadFromIni();

};
