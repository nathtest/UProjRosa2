#pragma once
#include "CoreMinimal.h"
#include "EPathMoveState.h"
#include "OnFinishAiMoveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishAiMove, EPathMoveState, InMoveState);

