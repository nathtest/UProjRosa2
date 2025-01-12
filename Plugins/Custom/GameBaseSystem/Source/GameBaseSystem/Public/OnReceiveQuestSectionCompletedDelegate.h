#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveParamQuestSectionCompleted.h"
#include "OnReceiveQuestSectionCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveQuestSectionCompleted, FQuestReceiveParamQuestSectionCompleted, InSectionCompletedParam);

