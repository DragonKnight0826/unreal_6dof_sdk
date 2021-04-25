// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPath.h"

class FSkyworthAssetDirectory
{
public: 
#if WITH_EDITORONLY_DATA
	SKYWORTHHMD_API static void LoadForCook();
	SKYWORTHHMD_API static void ReleaseAll();
#endif

	static FSoftObjectPath AssetListing[];
};
