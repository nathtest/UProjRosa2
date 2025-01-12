#pragma once
#include "CoreMinimal.h"
#include "G01BattleCacheOnLoadedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FG01BattleCacheOnLoadedEvent, FName, InRequestLabel);

