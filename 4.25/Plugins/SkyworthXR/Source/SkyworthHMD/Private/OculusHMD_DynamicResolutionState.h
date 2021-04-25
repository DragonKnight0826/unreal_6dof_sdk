// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "OculusHMDPrivate.h"

#if OCULUS_HMD_SUPPORTED_PLATFORMS
#include "OculusHMD_Settings.h"
#include "DynamicResolutionState.h"

namespace SkyworthHMD
{

//-------------------------------------------------------------------------------------------------
// FDynamicResolutionState
//-------------------------------------------------------------------------------------------------

class FDynamicResolutionState : public IDynamicResolutionState
{
public:
	FDynamicResolutionState(const SkyworthHMD::FSettingsPtr InSettings);

	// ISceneViewFamilyScreenPercentage
	virtual void ResetHistory() override;
	virtual bool IsSupported() const override;
	virtual void SetupMainViewFamily(class FSceneViewFamily& ViewFamily) override;

protected:
	virtual float GetResolutionFractionApproximation() const override;
	virtual float GetResolutionFractionUpperBound() const override;
	virtual void SetEnabled(bool bEnable) override;
	virtual bool IsEnabled() const override;
	virtual void ProcessEvent(EDynamicResolutionStateEvent Event) override;

private:
	const SkyworthHMD::FSettingsPtr Settings;
	float ResolutionFraction;
	float ResolutionFractionUpperBound;
};

} // namespace OculusHMD

#endif //OCULUS_HMD_SUPPORTED_PLATFORMS
