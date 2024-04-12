#include "FallGameState.h"

#include "Net/UnrealNetwork.h"

AFallGameState::AFallGameState() : Stage(EGameStage::Lobby), TimeRemainingToPlay(3) 
{
	
}

void AFallGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFallGameState, TimeRemainingToPlay);
	DOREPLIFETIME(AFallGameState, Stage);
}

void AFallGameState::OnRep_TimeRemainingToPlay()
{
	OnTimeRemainingUpdate.Broadcast(TimeRemainingToPlay);
}

void AFallGameState::OnRep_Stage()
{
	OnStageUpdate.Broadcast(Stage);
}
