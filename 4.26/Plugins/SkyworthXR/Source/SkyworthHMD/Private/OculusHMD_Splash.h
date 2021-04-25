// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "OculusHMDPrivate.h"
#include "IXRLoadingScreen.h"

#if OCULUS_HMD_SUPPORTED_PLATFORMS
#include "OculusHMD_GameFrame.h"
#include "OculusHMD_Layer.h"
#include "TickableObjectRenderThread.h"
#include "SkyworthHMDTypes.h"

namespace SkyworthHMD
{

class FOculusHMD;

//-------------------------------------------------------------------------------------------------
// FSplashLayer
//-------------------------------------------------------------------------------------------------

struct FSplashLayer
{
	FSkyworthSplashDesc Desc;
	FLayerPtr Layer;

public:
	FSplashLayer(const FSkyworthSplashDesc& InDesc) : Desc(InDesc) {}
	FSplashLayer(const FSplashLayer& InSplashLayer) : Desc(InSplashLayer.Desc), Layer(InSplashLayer.Layer) {}
};


//-------------------------------------------------------------------------------------------------
// FSplash
//-------------------------------------------------------------------------------------------------

class FSplash : public IXRLoadingScreen, public TSharedFromThis<FSplash>
{
protected:
	class FTicker : public FTickableObjectRenderThread, public TSharedFromThis<FTicker>
	{
	public:
		FTicker(FSplash* InSplash) : FTickableObjectRenderThread(false, true), pSplash(InSplash) {}

		virtual void Tick(float DeltaTime) override { pSplash->Tick_RenderThread(DeltaTime); }
		virtual TStatId GetStatId() const override  { RETURN_QUICK_DECLARE_CYCLE_STAT(FSplash, STATGROUP_Tickables); }
		virtual bool IsTickable() const override { return true; }
	
	protected:
		FSplash* pSplash;
	};

public:
	FSplash(FSkyworthHMD* InPlugin);
	virtual ~FSplash();

	void Tick_RenderThread(float DeltaTime);

	void Startup();
	void LoadSettings();
	void ReleaseResources_RHIThread();
	void PreShutdown();
	void Shutdown();

	void OnPreLoadMap(const FString&);

	// Called from FOculusHMD
	void UpdateLoadingScreen_GameThread();

	// Internal extended API
	int AddSplash(const FSkyworthSplashDesc&);
	bool GetSplash(unsigned index, FSkyworthSplashDesc& OutDesc);
	void StopTicker();
	void StartTicker();

	// The standard IXRLoadingScreen interface
	virtual void ShowLoadingScreen() override;
	virtual void HideLoadingScreen() override;
	virtual void ClearSplashes() override;
	virtual void AddSplash(const FSplashDesc& Splash) override;
	virtual bool IsShown() const override { return bIsShown; }

protected:
	void DoShow();
	void DoHide();
	void UnloadTextures();
	void LoadTexture(FSplashLayer& InSplashLayer);
	void UnloadTexture(FSplashLayer& InSplashLayer);

	void RenderFrame_RenderThread(FRHICommandListImmediate& RHICmdList);
	IStereoLayers::FLayerDesc StereoLayerDescFromOculusSplashDesc(FSkyworthSplashDesc OculusDesc);

protected:
	FSkyworthHMD* OculusHMD;
	FCustomPresent* CustomPresent;
	TSharedPtr<FTicker> Ticker;
	int32 FramesOutstanding;
	FCriticalSection RenderThreadLock;
	FSettingsPtr Settings;
	FGameFramePtr Frame;
	TArray<FSplashLayer> SplashLayers;
	uint32 NextLayerId;
	FLayerPtr BlackLayer;
	FLayerPtr UELayer;
	TArray<TTuple<FLayerPtr, FQuat>> Layers_RenderThread_DeltaRotation;
	TArray<FLayerPtr> Layers_RenderThread_Input;
	TArray<FLayerPtr> Layers_RenderThread;
	TArray<FLayerPtr> Layers_RHIThread;

	// All these flags are only modified from the Game thread
	bool bInitialized;
	bool bIsShown;
	bool bNeedSplashUpdate;
	bool bShouldShowSplash;

	float SystemDisplayInterval;
	double LastTimeInSeconds;
	FDelegateHandle LoadLevelDelegate;
};

typedef TSharedPtr<FSplash> FSplashPtr;


} // namespace OculusHMD

#endif // OCULUS_HMD_SUPPORTED_PLATFORMS