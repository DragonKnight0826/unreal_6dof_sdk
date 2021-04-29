// Copyright Epic Games, Inc. All Rights Reserved.

#include "OculusHMDPrivate.h"
#include "RHICommandList.h"
#include "RenderingThread.h"
#include "../Launch/Resources/Version.h"

namespace SkyworthHMD
{

#if ENGINE_MINOR_VERSION > 25
#define SvrThreadedRendering GIsThreadedRendering
#else
#define SvrThreadedRendering GRenderingThread
#endif
//-------------------------------------------------------------------------------------------------
// Utility functions
//-------------------------------------------------------------------------------------------------

bool InGameThread()
{
	if (GIsGameThreadIdInitialized)
	{
		return FPlatformTLS::GetCurrentThreadId() == GGameThreadId;
	}
	else
	{
		return true;
	}
}


bool InRenderThread()
{
	if (SvrThreadedRendering && !GIsRenderingThreadSuspended.Load(EMemoryOrder::Relaxed))
	{
#if ENGINE_MINOR_VERSION > 25
		return IsInActualRenderingThread();
#else
		return FPlatformTLS::GetCurrentThreadId() == GRenderingThread->GetThreadID();
#endif
	}
	else
	{
		return InGameThread();
	}
}


bool InRHIThread()
{
	if (SvrThreadedRendering && !GIsRenderingThreadSuspended.Load(EMemoryOrder::Relaxed))
	{
#if ENGINE_MINOR_VERSION > 25
		if (IsRHIThreadRunning())
#else
		if (GRHIThreadId)
#endif
		{
#if ENGINE_MINOR_VERSION > 25
			if (IsInRHIThread())
#else
			if (FPlatformTLS::GetCurrentThreadId() == GRHIThreadId)
#endif
			{
				return true;
			}
#if ENGINE_MINOR_VERSION > 25
			if (IsInActualRenderingThread())
#else
			if (FPlatformTLS::GetCurrentThreadId() == GRenderingThread->GetThreadID())
#endif
			{
				return GetImmediateCommandList_ForRenderCommand().Bypass();
			}

			return false;
		}
		else
		{
#if ENGINE_MINOR_VERSION > 25
			return IsInActualRenderingThread();
#else
				return FPlatformTLS::GetCurrentThreadId() == GRenderingThread->GetThreadID();
#endif
		}
	}
	else
	{
		return InGameThread();
	}
}

bool ConvertPose_Internal(const FPose& InPose, FPose& OutPose, const FQuat BaseOrientation, const FVector BaseOffset, float WorldToMetersScale)
{
	
	// apply base orientation correction
	OutPose.Orientation = BaseOrientation.Inverse() * InPose.Orientation;
	//UE_LOG(LogHMD, Log, TEXT("InPose.Orientation(%f,%f,%f,%f),OutPose.Orientation(%f,%f,%f,%f)"),
		//InPose.Orientation.X, InPose.Orientation.Y, InPose.Orientation.Z, InPose.Orientation.W,
		//OutPose.Orientation.X, OutPose.Orientation.Y, OutPose.Orientation.Z, OutPose.Orientation.W);
	OutPose.Orientation.Normalize();

	// correct position according to BaseOrientation and BaseOffset.
	OutPose.Position = (InPose.Position - BaseOffset) * WorldToMetersScale;
	OutPose.Position = BaseOrientation.Inverse().RotateVector(OutPose.Position);

	return true;
}

bool ConvertPose_Internal(const ovrpPosef& InPose, FPose& OutPose, const FQuat BaseOrientation, const FVector BaseOffset, float WorldToMetersScale)
{
	//UE_LOG(LogHMD, Log, TEXT("InPose.Orientation xxx(%f,%f,%f,%f)"), InPose.Orientation.x, InPose.Orientation.y, InPose.Orientation.z, InPose.Orientation.w);
	return ConvertPose_Internal(FPose(ToFQuat(InPose.Orientation), ToFVector(InPose.Position)), OutPose, BaseOrientation, BaseOffset, WorldToMetersScale);
}

#if OCULUS_HMD_SUPPORTED_PLATFORMS
bool IsOculusServiceRunning()
{
#if PLATFORM_WINDOWS
	HANDLE hEvent = ::OpenEventW(SYNCHRONIZE, 0 /*FALSE*/, L"OculusHMDConnected");

	if (!hEvent)
	{
		return false;
	}

	::CloseHandle(hEvent);
#endif

	return true;
}


bool IsOculusHMDConnected()
{
#if PLATFORM_WINDOWS
	HANDLE hEvent = ::OpenEventW(SYNCHRONIZE, 0 /*FALSE*/, L"OculusHMDConnected");

	if (!hEvent)
	{
		return false;
	}

	uint32 dwWait = ::WaitForSingleObject(hEvent, 0);

	::CloseHandle(hEvent);

	if (WAIT_OBJECT_0 != dwWait)
	{
		return false;
	}
#endif

	return true;
}
#endif // OCULUS_HMD_SUPPORTED_PLATFORMS

} // namespace OculusHMD
