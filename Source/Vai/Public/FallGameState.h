#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FallGameState.generated.h"

UENUM(BlueprintType)
enum class EGameStage : uint8
{
	Lobby,
	Starting,
	Playing,
	Finishing
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStageUpdate, EGameStage, NewStage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeRemainingUpdate, int32, TimeRemaining);

UCLASS()
class VAI_API AFallGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	AFallGameState();
	UPROPERTY(ReplicatedUsing=OnRep_Stage, BlueprintReadWrite, EditAnywhere)
	EGameStage Stage;
	UPROPERTY(BlueprintAssignable)
	FOnStageUpdate OnStageUpdate;
	
	UPROPERTY(ReplicatedUsing=OnRep_TimeRemainingToPlay, BlueprintReadWrite, EditAnywhere)
	int32 TimeRemainingToPlay;
	UPROPERTY(BlueprintAssignable)
	FOnTimeRemainingUpdate OnTimeRemainingUpdate;
	

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void OnRep_TimeRemainingToPlay();
	UFUNCTION()
	void OnRep_Stage();
};
