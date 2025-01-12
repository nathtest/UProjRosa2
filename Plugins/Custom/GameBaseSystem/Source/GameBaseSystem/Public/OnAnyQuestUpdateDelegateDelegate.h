#pragma once
#include "CoreMinimal.h"
#include "OnAnyQuestUpdateDelegateDelegate.generated.h"

class AQuestObjectCore;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnyQuestUpdateDelegate, TSoftClassPtr<AQuestObjectCore>, InQuestClass);

