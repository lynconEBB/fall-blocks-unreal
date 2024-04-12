#include "FallPlayerController.h"

#include "FallHUD.h"
#include "MoviePlayer.h"
#include "VaiGameMode.h"
#include "Blueprint/UserWidget.h"
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

	GetWorld()->GetAuthGameMode<AVaiGameMode>()->CheckMatchEnding();
}

void AFallPlayerController::GetSeamlessTravelActorList(bool bToEntry, TArray<AActor*>& ActorList)
{
	FSeamlessTravelHandler Handler = GEngine->SeamlessTravelHandlerForWorld(GetWorld());
	AFallHUD* HUD = GetHUD<AFallHUD>();
	HUD->MainWidget->AddToRoot();

	Super::GetSeamlessTravelActorList(bToEntry, ActorList);
	ActorList.Add(this);
}

void AFallPlayerController::ClientSetControlsEnabled_Implementation(bool bEnabled)
{
	GetMoviePlayer()->PlayMovie();
	this->SetShowMouseCursor(!bEnabled);
	if (bEnabled)
	{
		FInputModeGameOnly InputMode;
		InputMode.SetConsumeCaptureMouseDown(true);
		this->SetInputMode(InputMode);
	} else
	{
		FInputModeUIOnly InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
		this->SetInputMode(InputMode);
	}
}
