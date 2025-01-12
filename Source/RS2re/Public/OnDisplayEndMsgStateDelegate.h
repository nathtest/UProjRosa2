#pragma once
#include "CoreMinimal.h"
#include "OnDisplayEndMsgStateDelegate.generated.h"

class AUiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisplayEndMsgState, AUiController*, InUiController);

