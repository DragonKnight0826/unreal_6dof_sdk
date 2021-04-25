// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkyworthEditorModule.h"
//#include "SkyworthToolStyle.h"
//#include "SkyworthToolCommands.h"
//#include "SkyworthToolWidget.h"
//#include "SkyworthPlatformToolWidget.h"
//#include "SkyworthAssetDirectory.h"
#include "SkyworthHMDRuntimeSettings.h"
#include "LevelEditor.h"
#include "Modules/ModuleManager.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "PropertyEditorModule.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "ISettingsModule.h"
//#include "SkyworthEditorSettings.h"

#define LOCTEXT_NAMESPACE "SkyworthEditor"

const FName FSkyworthEditorModule::SkyworthPerfTabName = FName("SkyworthPerfCheck");
const FName FSkyworthEditorModule::SkyworthPlatToolTabName = FName("SkyworthPlatormTool");

void FSkyworthEditorModule::PostLoadCallback()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
}

void FSkyworthEditorModule::StartupModule()
{
	/*void* ModuleCheck = FPlatformProcess::GetDllHandle(TEXT("OVRPlugin.dll"));
	if (!ModuleCheck)
	{
		return;
	}

	FPlatformProcess::FreeDllHandle(ModuleCheck);
	ModuleCheck = nullptr;

	bModuleValid = true;*/
	RegisterSettings();
	//FSkyworthAssetDirectory::LoadForCook();

	//if (!IsRunningCommandlet())
	//{
	//	FSkyworthToolStyle::Initialize();
	//	FSkyworthToolStyle::ReloadTextures();

	//	FSkyworthToolCommands::Register();

	//	PluginCommands = MakeShareable(new FUICommandList);

	//	PluginCommands->MapAction(
	//		FSkyworthToolCommands::Get().OpenPluginWindow,
	//		FExecuteAction::CreateRaw(this, &FSkyworthEditorModule::PluginButtonClicked),
	//		FCanExecuteAction());

	//	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	//	// Adds an option to launch the tool to Window->Developer Tools.
	//	TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
	//	MenuExtender->AddMenuExtension("Miscellaneous", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FSkyworthEditorModule::AddMenuExtension));
	//	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);

	//	/*
	//	// If you want to make the tool even easier to launch, and add a toolbar button.
	//	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
	//	ToolbarExtender->AddToolBarExtension("Launch", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FSkyworthEditorModule::AddToolbarExtension));
	//	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	//	*/

	//	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SkyworthPerfTabName, FOnSpawnTab::CreateRaw(this, &FSkyworthEditorModule::OnSpawnPluginTab))
	//		.SetDisplayName(LOCTEXT("FSkyworthEditorTabTitle", "Skyworth Performance Check"))
	//		.SetMenuType(ETabSpawnerMenuType::Hidden);

	//	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SkyworthPlatToolTabName, FOnSpawnTab::CreateRaw(this, &FSkyworthEditorModule::OnSpawnPlatToolTab))
	//		.SetDisplayName(LOCTEXT("FSkyworthPlatfToolTabTitle", "Skyworth Platform Tool"))
	//		.SetMenuType(ETabSpawnerMenuType::Hidden);

	//	FCoreDelegates::OnFEngineLoopInitComplete.AddRaw(this, &FSkyworthEditorModule::OnEngineLoopInitComplete);
	//}

	//// If UseAllowTearing CVar is present, set it to 0. UseAllowTearing causes performance issues on Rift if enabled.
	//IConsoleVariable* d3d11AllowTearing = IConsoleManager::Get().FindConsoleVariable(TEXT("r.D3D11.UseAllowTearing"));
	//if (d3d11AllowTearing)
	//{
	//	d3d11AllowTearing->Set(0);
	//}

	//IConsoleVariable* d3d12AllowTearing = IConsoleManager::Get().FindConsoleVariable(TEXT("r.D3D12.UseAllowTearing"));
	//if (d3d12AllowTearing)
	//{
	//	d3d12AllowTearing->Set(0);
	//}
}

void FSkyworthEditorModule::ShutdownModule()
{
	/*if (!bModuleValid)
	{
		return;
	}

	if (!IsRunningCommandlet())
	{
		FSkyworthToolStyle::Shutdown();
		FSkyworthToolCommands::Unregister();
		FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SkyworthPerfTabName);
		FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SkyworthPlatToolTabName);
		FSkyworthBuildAnalytics::Shutdown();
	}

	FSkyworthAssetDirectory::ReleaseAll();*/
	if (UObjectInitialized())
	{
		UnregisterSettings();
	}
}

//TSharedRef<SDockTab> FSkyworthEditorModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
//{
//	auto myTab = SNew(SDockTab)
//		.TabRole(ETabRole::NomadTab)
//		[
//			SNew(SSkyworthToolWidget)
//		];
//
//
//	return myTab;
//}
//
//TSharedRef<SDockTab> FSkyworthEditorModule::OnSpawnPlatToolTab(const FSpawnTabArgs& SpawnTabArgs)
//{
//	auto myTab = SNew(SDockTab)
//		.TabRole(ETabRole::NomadTab)
//		[
//			SNew(SSkyworthPlatformToolWidget)
//		];
//
//	return myTab;
//}

void FSkyworthEditorModule::RegisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "SkyworthVR",
			LOCTEXT("RuntimeSettingsName", "SkyworthVR"),
			LOCTEXT("RuntimeSettingsDescription", "Configure the SkyworthVR plugin"),
			GetMutableDefault<USkyworthHMDRuntimeSettings>()
		);

		//FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		//PropertyModule.RegisterCustomClassLayout(USkyworthHMDRuntimeSettings::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FSkyworthHMDSettingsDetailsCustomization::MakeInstance));
	}
}

void FSkyworthEditorModule::UnregisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "SkyworthVR");
	}
}

//FReply FSkyworthEditorModule::PluginClickFn(bool text)
//{
//	PluginButtonClicked();
//	return FReply::Handled();
//}
//
//void FSkyworthEditorModule::PluginButtonClicked()
//{
//	FGlobalTabmanager::Get()->InvokeTab(SkyworthPerfTabName);
//}
//
//void FSkyworthEditorModule::AddMenuExtension(FMenuBuilder& Builder)
//{
//	bool v = false;
//	GConfig->GetBool(TEXT("/Script/SkyworthEditor.SkyworthEditorSettings"), TEXT("bAddMenuOption"), v, GEditorIni);
//	if (v)
//	{
//		Builder.AddMenuEntry(FSkyworthToolCommands::Get().OpenPluginWindow);
//	}
//}
//
//void FSkyworthEditorModule::AddToolbarExtension(FToolBarBuilder& Builder)
//{
//	Builder.AddToolBarButton(FSkyworthToolCommands::Get().OpenPluginWindow);
//}
//
//void FSkyworthEditorModule::OnEngineLoopInitComplete()
//{
//	BuildAnalytics = FSkyworthBuildAnalytics::GetInstance();
//}
//
//TSharedRef<IDetailCustomization> FSkyworthHMDSettingsDetailsCustomization::MakeInstance()
//{
//	return MakeShareable(new FSkyworthHMDSettingsDetailsCustomization);
//}
//
//FReply FSkyworthHMDSettingsDetailsCustomization::PluginClickPerfFn(bool text)
//{
//	FGlobalTabmanager::Get()->InvokeTab(FSkyworthEditorModule::SkyworthPerfTabName);
//	return FReply::Handled();
//}
//
//FReply FSkyworthHMDSettingsDetailsCustomization::PluginClickPlatFn(bool text)
//{
//	FGlobalTabmanager::Get()->InvokeTab(FSkyworthEditorModule::SkyworthPlatToolTabName);
//	return FReply::Handled();
//}
//
//void FSkyworthHMDSettingsDetailsCustomization::OnEnableBuildTelemetry(ECheckBoxState NewState)
//{
//	FSkyworthBuildAnalytics::GetInstance()->OnTelemetryToggled(NewState == ECheckBoxState::Checked);
//	GConfig->SetBool(TEXT("/Script/SkyworthEditor.SkyworthEditorSettings"), TEXT("bEnableSkyworthBuildTelemetry"), NewState == ECheckBoxState::Checked, GEditorIni);
//	GConfig->Flush(0);
//}
//
//ECheckBoxState FSkyworthHMDSettingsDetailsCustomization::IsBuildTelemetryEnabled() const
//{
//	bool v;
//	GConfig->GetBool(TEXT("/Script/SkyworthEditor.SkyworthEditorSettings"), TEXT("bEnableSkyworthBuildTelemetry"), v, GEditorIni);
//	return v ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
//}
//
//void FSkyworthHMDSettingsDetailsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
//{
//	// Labeled "General Skyworth" instead of "General" to enable searchability. The button "Launch Skyworth Utilities Window" doesn't show up if you search for "Skyworth"
//	IDetailCategoryBuilder& CategoryBuilder = DetailLayout.EditCategory("General Skyworth", FText::GetEmpty(), ECategoryPriority::Important);
//	CategoryBuilder.AddCustomRow(LOCTEXT("General Skyworth", "General"))
//		.WholeRowContent()
//		[
//			SNew(SVerticalBox)
//			+ SVerticalBox::Slot().AutoHeight().Padding(2)
//		[
//			SNew(SHorizontalBox)
//			+ SHorizontalBox::Slot().AutoWidth()
//		[
//			SNew(SButton)
//			.Text(LOCTEXT("LaunchTool", "Launch Skyworth Performance Window"))
//		.OnClicked(this, &FSkyworthHMDSettingsDetailsCustomization::PluginClickPerfFn, true)
//		]
//	+ SHorizontalBox::Slot().FillWidth(8)
//		]
//	+ SVerticalBox::Slot().AutoHeight().Padding(2)
//		[
//			SNew(SHorizontalBox)
//			+ SHorizontalBox::Slot().AutoWidth()
//		[
//			SNew(SButton)
//			.Text(LOCTEXT("LaunchPlatTool", "Launch Skyworth Platform Window"))
//		.OnClicked(this, &FSkyworthHMDSettingsDetailsCustomization::PluginClickPlatFn, true)
//		]
//	+ SHorizontalBox::Slot().FillWidth(8)
//		]
//	+ SVerticalBox::Slot().AutoHeight().Padding(5)
//		[
//			SNew(SHorizontalBox)
//			+ SHorizontalBox::Slot().AutoWidth()
//		[
//			SNew(SBox)
//			[
//				SNew(STextBlock)
//				.Text(LOCTEXT("EnableBuildTelemetry", "Enable Skyworth Build Telemetry"))
//			]
//		]
//	+ SHorizontalBox::Slot().AutoWidth()
//		[
//			SNew(SBox).WidthOverride(10.f)
//		]
//	+ SHorizontalBox::Slot().AutoWidth()
//		[
//			SNew(SCheckBox)
//			.OnCheckStateChanged(this, &FSkyworthHMDSettingsDetailsCustomization::OnEnableBuildTelemetry)
//		.IsChecked(this, &FSkyworthHMDSettingsDetailsCustomization::IsBuildTelemetryEnabled)
//		]
//	+ SHorizontalBox::Slot().FillWidth(8)
//		]
//		];
//}

//////////////////////////////////////////////////////////////////////////

IMPLEMENT_MODULE(FSkyworthEditorModule, SkyworthEditor);

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE