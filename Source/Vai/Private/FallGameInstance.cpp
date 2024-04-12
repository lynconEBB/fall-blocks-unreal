#include "FallGameInstance.h"
#include "MoviePlayer.h"

void UFallGameInstance::Init()
{
	Super::Init();

	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UFallGameInstance::BeginLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UFallGameInstance::EndLoadingScreen);
}

void UFallGameInstance::BeginLoadingScreen(const FString& InMapName)
{
	if (!IsRunningDedicatedServer())
	{
 		FLoadingScreenAttributes LoadingScreen;
	 	LoadingScreen.bAutoCompleteWhenLoadingCompletes = false;
 		LoadingScreen.WidgetLoadingScreen = FLoadingScreenAttributes::NewTestLoadingScreenWidget();
 
	 	GetMoviePlayer()->SetupLoadingScreen(LoadingScreen);
	}
}

void UFallGameInstance::EndLoadingScreen(UWorld* InLoadedWorld)
{

}