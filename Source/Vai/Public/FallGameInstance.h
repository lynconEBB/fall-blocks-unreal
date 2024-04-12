#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FallGameInstance.generated.h"

UCLASS()
class VAI_API UFallGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init() override;

	UFUNCTION()
	virtual void BeginLoadingScreen(const FString& MapName);
	UFUNCTION()
	virtual void EndLoadingScreen(UWorld* InLoadedWorld);
};
