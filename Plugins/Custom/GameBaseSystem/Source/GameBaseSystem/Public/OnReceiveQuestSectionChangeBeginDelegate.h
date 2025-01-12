#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveParamQuestSectionChanged.h"
#include "OnReceiveQuestSectionChangeBeginDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveQuestSectionChangeBegin, FQuestReceiveParamQuestSectionChanged, InSectionChangedParam);

