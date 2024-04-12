#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FallPlayerController.generated.h"

UCLASS()
class VAI_API AFallPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void SetPlayerPlaying();
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void SetPlayerSpectating();

	UFUNCTION(Client, Reliable, BlueprintCallable)
	void ClientSetControlsEnabled(bool bEnabled);
	virtual void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor*>& ActorList) override;
};
