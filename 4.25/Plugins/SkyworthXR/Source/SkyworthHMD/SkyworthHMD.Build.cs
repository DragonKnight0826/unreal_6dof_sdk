// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class SkyworthHMD : ModuleRules
	{
		public SkyworthHMD(ReadOnlyTargetRules Target) : base(Target)
		{
            var EngineDir = Path.GetFullPath(Target.RelativeEnginePath);
            PrivateIncludePaths.AddRange(
				new string[] {
					// Relative to Engine\Plugins\Runtime\Oculus\OculusVR\Source
					EngineDir +"/Source/Runtime/Renderer/Private",
                    EngineDir +"/Source/Runtime/OpenGLDrv/Private",
                    EngineDir +"/Source/Runtime/VulkanRHI/Private",
                    EngineDir +"/Source/Runtime/Engine/Classes/Components",
                    EngineDir +"/Source/Runtime/Engine/Classes/Kismet",
				});

			PublicIncludePathModuleNames.AddRange(
				new string[] {
					"Launch",
					"ProceduralMeshComponent",
				});			

			if (Target.Platform == UnrealTargetPlatform.Win32 || Target.Platform == UnrealTargetPlatform.Win64)
			{
				PrivateIncludePaths.Add(EngineDir +"/Source/Runtime/VulkanRHI/Private/Windows");
			}
			else
			{
				PrivateIncludePaths.Add(EngineDir +"/Source/Runtime/VulkanRHI/Private/" + Target.Platform);
			}

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"InputCore",
					"RHI",
					"RenderCore",
					"Renderer",
					"Slate",
					"SlateCore",
					"ImageWrapper",
					"MediaAssets",
					"Analytics",
					"OpenGLDrv",
					"VulkanRHI",
					"SVRPlugin",
					"ProceduralMeshComponent",
					"Projects",
				});

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"HeadMountedDisplay",
				});

			if (Target.bBuildEditor == true)
			{
				PrivateDependencyModuleNames.Add("UnrealEd");
			}

			AddEngineThirdPartyPrivateStaticDependencies(Target, "OpenGL");

            if (Target.Platform == UnrealTargetPlatform.Win32 || Target.Platform == UnrealTargetPlatform.Win64)
            {
                // D3D
                //{
                //    PrivateDependencyModuleNames.AddRange(
                //        new string[]
                //        {
                //            "D3D11RHI",
                //            "D3D12RHI",
                //        });

                //    PrivateIncludePaths.AddRange(
                //        new string[]
                //        {
                //            //"OculusMR/Public",
                //            EngineDir +"/Source/Runtime/Windows/D3D11RHI/Private",
                //            EngineDir +"/Source/Runtime/Windows/D3D11RHI/Private/Windows",
                //            EngineDir +"/Source/Runtime/D3D12RHI/Private",
                //            EngineDir +"/Source/Runtime/D3D12RHI/Private/Windows",
                //        });

                //    AddEngineThirdPartyPrivateStaticDependencies(Target, "DX11");
                //    AddEngineThirdPartyPrivateStaticDependencies(Target, "DX12");
                //    AddEngineThirdPartyPrivateStaticDependencies(Target, "NVAPI");
                //    AddEngineThirdPartyPrivateStaticDependencies(Target, "DX11Audio");
                //    AddEngineThirdPartyPrivateStaticDependencies(Target, "DirectSound");
                //    AddEngineThirdPartyPrivateStaticDependencies(Target, "NVAftermath");
                //    AddEngineThirdPartyPrivateStaticDependencies(Target, "IntelMetricsDiscovery");
                //}

                // Vulkan
                {
                    AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
                }

                // OVRPlugin
                {
                    //PublicDelayLoadDLLs.Add("OVRPlugin.dll");
                    //RuntimeDependencies.Add("$(EngineDir)/Binaries/ThirdParty/Oculus/OVRPlugin/OVRPlugin/" + Target.Platform.ToString() + "/OVRPlugin.dll");
                }
            }
            else if (Target.Platform == UnrealTargetPlatform.Android)
			{
				// We are not currently supporting Mixed Reality on Android, but we need to include IOculusMRModule.h for OCULUS_MR_SUPPORTED_PLATFORMS definition
				/*PrivateIncludePaths.AddRange(
						new string[]
						{
							"OculusMR/Public"
						});*/

				// Vulkan
				{
					AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
				}

				// AndroidPlugin
				{
					string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
					AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "SkyworthMobile_APL.xml"));
				}
			}
		}
	}
}
