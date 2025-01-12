#pragma once
#include "CoreMinimal.h"
#include "G01EnemyDefeatNotifyParam.h"
#include "OnEnemyDefeatDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyDefeatDelegate, const FG01EnemyDefeatNotifyParam&, InParam);

