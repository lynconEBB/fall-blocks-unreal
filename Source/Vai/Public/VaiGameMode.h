// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VaiGameMode.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(GameServerLog, Log, All);

UCLASS(minimalapi)
class AVaiGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AVaiGameMode();
protected:
	virtual void BeginPlay() override;
private:
	void InitGameLift();

private:
	TSharedPtr<struct  FProcessParameters> ProcessParameters;
};



