#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveParamQuestSectionChanged.h"
#include "OnReceiveQuestSectionChangeEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveQuestSectionChangeEnd, FQuestReceiveParamQuestSectionChanged, InSectionChangedParam);

