/*
 * @Author: xieminghui
 * @Date: 2021-03-19 15:45:17
 * @Description: Description
 * @LastEditors: xieminghui
 * @LastEditTime: 2021-03-19 15:46:52
 * @Copyright: Copyright 2020 Skyworth VR. All rights reserved.
 */
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ISkyworthEditorModule.h"
//#include "SkyworthBuildAnalytics.h"
#include "Modules/ModuleInterface.h"
#include "IDetailCustomization.h"
#include "Input/Reply.h"

class FToolBarBuilder;
class FMenuBuilder;

#define SKYWORTH_EDITOR_MODULE_NAME "SkyworthEditor"

enum class ECheckBoxState : uint8;

class FSkyworthEditorModule : public ISkyworthEditorModule
{
public:
	FSkyworthEditorModule() : bModuleValid(false) {};

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual void PostLoadCallback() override;

	void RegisterSettings();
	void UnregisterSettings();

	void PluginButtonClicked();
	FReply PluginClickFn(bool text);

	void OnEngineLoopInitComplete();

public:
	static const FName SkyworthPerfTabName;
	static const FName SkyworthPlatToolTabName;

private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);
	TSharedRef<class SDockTab> OnSpawnPlatToolTab(const class FSpawnTabArgs& SpawnTabArgs);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
	bool bModuleValid;
	//FSkyworthBuildAnalytics* BuildAnalytics;
};

//class IDetailLayoutBuilder;

//class FSkyworthHMDSettingsDetailsCustomization : public IDetailCustomization
//{
//public:
//	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
//	static TSharedRef<IDetailCustomization> MakeInstance();
//
//	// IDetailCustomization interface
//	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
//	// End of IDetailCustomization interface
//
//	FReply PluginClickPerfFn(bool text);
//	FReply PluginClickPlatFn(bool text);
//
//	void OnEnableBuildTelemetry(ECheckBoxState NewState);
//	ECheckBoxState IsBuildTelemetryEnabled() const;
//};
