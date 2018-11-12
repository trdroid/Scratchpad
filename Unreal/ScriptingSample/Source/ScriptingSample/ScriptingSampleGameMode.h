// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ScriptingSampleGameMode.generated.h"

DECLARE_DELEGATE(FStandardDelegateSignature)

UCLASS(minimalapi)
class AScriptingSampleGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AScriptingSampleGameMode();

	FStandardDelegateSignature VisualEffectsStart;
	FStandardDelegateSignature VisualEffectsStop;
};



