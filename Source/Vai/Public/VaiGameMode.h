// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VaiGameMode.generated.h"

enum class EGameStage : uint8;
class AFallGameState;
DECLARE_LOG_CATEGORY_EXTERN(GameServerLog, Log, All);

UCLASS(minimalapi)
class AVaiGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AVaiGameMode();
	virtual int32 GetNumPlayers() override;
	virtual int32 GetNumSpectators() override;

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void CheckMatchEnding();

	UFUNCTION(NetMulticast, BlueprintCallable, Reliable)
	void RemoveLobby();

	virtual void GetSeamlessTravelActorList(bool bToTransition, TArray<AActor*>& ActorList) override;
protected:
	virtual void BeginPlay() override;
private:
	void InitGameLift();
	void ChangeStage(EGameStage NewStage);

public:
	UPROPERTY(BlueprintReadOnly)
	AFallGameState* FallGameState;
	
private:
	TSharedPtr<struct  FProcessParameters> ProcessParameters;
	FTimerHandle RemainingTimeHandle;
};



