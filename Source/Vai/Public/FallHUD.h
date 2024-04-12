#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FallHUD.generated.h"

class UUserWidget;

UCLASS()
class VAI_API AFallHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	UUserWidget* MainWidget;
};
