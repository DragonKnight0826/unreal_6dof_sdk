// Copyright Epic Games, Inc. All Rights Reserved.


#include "SkyworthVRControllerEventManager.h"
#include "SkyworthInput.h"
//#include "GoogleVRControllerPrivate.h"

static USkyworthVRControllerEventManager* Singleton = nullptr;

USkyworthVRControllerEventManager::USkyworthVRControllerEventManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

USkyworthVRControllerEventManager* USkyworthVRControllerEventManager::GetInstance()
{
	if (!Singleton)
	{
		Singleton = NewObject<USkyworthVRControllerEventManager>();
		Singleton->AddToRoot();
	}
	return Singleton;
}