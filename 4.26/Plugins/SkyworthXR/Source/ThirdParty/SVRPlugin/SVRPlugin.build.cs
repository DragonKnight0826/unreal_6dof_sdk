// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;

public class SVRPlugin : ModuleRules
{
	public SVRPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		//string SourceDirectory = Target.UEThirdPartySourceDirectory + "Oculus/OVRPlugin/OVRPlugin/";
        string SourceDirectory = ModuleDirectory + "/SVRPlugin/";
        //Console.WriteLine("xxxx " + SourceDirectory);
        PublicIncludePaths.Add(SourceDirectory + "Include");

		if (Target.Platform == UnrealTargetPlatform.Android)
		{
			PublicAdditionalLibraries.Add(SourceDirectory + "Lib/armeabi-v7a/" + "libOVRPlugin.so");
			PublicAdditionalLibraries.Add(SourceDirectory + "Lib/arm64-v8a/" + "libOVRPlugin.so");

			PublicAdditionalLibraries.Add(SourceDirectory + "ExtLibs/armeabi-v7a/" + "libvrapi.so");
			PublicAdditionalLibraries.Add(SourceDirectory + "ExtLibs/arm64-v8a/" + "libvrapi.so");

            //PublicAdditionalLibraries.Add(SourceDirectory + "ExtLibs/armeabi-v7a/" + "libxrapi.so");
            //PublicAdditionalLibraries.Add(SourceDirectory + "ExtLibs/arm64-v8a/" + "libxrapi.so");

            //PublicAdditionalLibraries.Add(SourceDirectory + "ExtLibs/armeabi-v7a/" + "libxrcore.so");
            //PublicAdditionalLibraries.Add(SourceDirectory + "ExtLibs/arm64-v8a/" + "libxrcore.so");

            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "SVRPlugin_APL.xml"));
        }
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(SourceDirectory + "Lib/Win64/OVRPlugin.lib");
		}
		else if (Target.Platform == UnrealTargetPlatform.Win32 )
		{
			PublicAdditionalLibraries.Add(SourceDirectory + "Lib/Win32/OVRPlugin.lib");
		}
	}
}