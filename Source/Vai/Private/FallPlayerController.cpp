#include "FallPlayerController.h"

#include "GameFramework/PlayerState.h"

void AFallPlayerController::SetPlayerPlaying()
{
	if (!HasAuthority())
		return;

	ChangeState(NAME_Playing);
	PlayerState->SetIsSpectator(false);

	bPlayerIsWaiting = false;

	ClientGotoState(NAME_Playing);
}

void AFallPlayerController::SetPlayerSpectating()
{
	if (!HasAuthority())
		return;

	ChangeState(NAME_Spectating);
	PlayerState->SetIsSpectator(true);

	bPlayerIsWaiting = true;

	ClientGotoState(NAME_Spectating);
}
