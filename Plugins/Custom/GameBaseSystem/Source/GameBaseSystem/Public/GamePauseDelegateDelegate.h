#pragma once
#include "CoreMinimal.h"
#include "OnGamePauseParams.h"
#include "GamePauseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGamePauseDelegate, const FOnGamePauseParams&, InParams);

