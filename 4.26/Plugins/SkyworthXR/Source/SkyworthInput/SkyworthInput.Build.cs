using System;
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class SkyworthInput : ModuleRules
	{
		public SkyworthInput(ReadOnlyTargetRules Target) : base(Target)
		{
			var EngineDir = Path.GetFullPath(Target.RelativeEnginePath);
			PrivateIncludePathModuleNames.AddRange(
				new string[]
				{
					"InputDevice",			// For IInputDevice.h
					"HeadMountedDisplay",	// For IMotionController.h
					"ImageWrapper"
				});

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"ApplicationCore",
					"Engine",
					"InputCore",
                    "InputDevice",
                    "HeadMountedDisplay",
                    "UMG",
                    "Slate",
                    "SlateCore",
                    "SkyworthHMD",
                    "SVRPlugin",
				});

			PrivateIncludePaths.AddRange(
				new string[] {
					// Relative to Engine\Plugins\Runtime\Oculus\OculusVR\Source
					"SkyworthHMD/Private",
					EngineDir+"/Source/Runtime/Renderer/Private",
					EngineDir+"/Source/Runtime/Engine/Classes/Components",
				});


            if (Target.Platform == UnrealTargetPlatform.Android)
            {
                PrivateDependencyModuleNames.AddRange(
                    new string[]
                    {
                        "Launch",
                        "AndroidRuntimeSettings",
                    }
                    );
            }

            if (Target.bBuildEditor == true)
            {
                PrivateDependencyModuleNames.Add("UnrealEd");
                if (Target.Platform == UnrealTargetPlatform.Mac || Target.Platform == UnrealTargetPlatform.Win32 || Target.Platform == UnrealTargetPlatform.Win64)
                {
                    PublicIncludePaths.Add(EngineDir+ "/Source/Developer/Android/AndroidDeviceDetection/Public");
                    PublicIncludePaths.Add(EngineDir+ "/Source/Developer/Android/AndroidDeviceDetection/Public/Interfaces");
                    //PrivateDependencyModuleNames.AddRange(
                    //    new string[]
                    //    {
                    //        "GoogleVR",
                    //        "GoogleInstantPreview",
                    //    });
                }
            }

            if (Target.Platform == UnrealTargetPlatform.Android)
            {
                //PrivateDependencyModuleNames.AddRange(new string[] { "GoogleVR" });

                string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
                AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "SkyworthController_APL.xml"));
            }
        }
	}
}
