// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SkyworthEditor : ModuleRules
{
	public SkyworthEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Projects",
				"InputCore",
				"UnrealEd",
				"LevelEditor",
				"CoreUObject",
				"Engine",
				"EngineSettings",
				"AndroidRuntimeSettings",
				"Slate",
				"SlateCore",
				"EditorStyle",
				"Core",
				"SkyworthHMD",
				"SVRPlugin",
				"HTTP",
				"DesktopPlatform",
                "LauncherServices",
                "GameProjectGeneration",
            }
			);

		PrivateIncludePaths.AddRange(
				new string[] {
					// Relative to Engine\Plugins\Runtime\Skyworth\SkyworthVR\Source
					"SkyworthEditor/Private",
					"SkyworthHMD/Private",
				});

		PrivateIncludePathModuleNames.AddRange(
			new string[] {
				"Settings",
            }
            );
	}
}
