// Copyright Epic Games, Inc. All Rights Reserved.

#include "OculusHMDPrivate.h"
#include "RHICommandList.h"
#include "RenderingThread.h"

namespace SkyworthHMD
{

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
	if (GRenderingThread && !GIsRenderingThreadSuspended.Load(EMemoryOrder::Relaxed))
	{
		return FPlatformTLS::GetCurrentThreadId() == GRenderingThread->GetThreadID();
	}
	else
	{
		return InGameThread();
	}
}


bool InRHIThread()
{
	if (GRenderingThread && !GIsRenderingThreadSuspended.Load(EMemoryOrder::Relaxed))
	{
		if (GRHIThreadId)
		{
			if (FPlatformTLS::GetCurrentThreadId() == GRHIThreadId)
			{
				return true;
			}
			
			if (FPlatformTLS::GetCurrentThreadId() == GRenderingThread->GetThreadID())
			{
				return GetImmediateCommandList_ForRenderCommand().Bypass();
			}

			return false;
		}
		else
		{
			return FPlatformTLS::GetCurrentThreadId() == GRenderingThread->GetThreadID();
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
