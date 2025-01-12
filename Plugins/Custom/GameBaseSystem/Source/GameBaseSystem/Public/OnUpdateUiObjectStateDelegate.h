#pragma once
#include "CoreMinimal.h"
#include "OnUpdateUiObjectStateDelegate.generated.h"

class AUiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateUiObjectState, AUiController*, InUiController);

