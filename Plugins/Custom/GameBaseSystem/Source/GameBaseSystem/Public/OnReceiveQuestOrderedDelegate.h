#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveParamQuestOrdered.h"
#include "OnReceiveQuestOrderedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveQuestOrdered, FQuestReceiveParamQuestOrdered, InOrderedParam);

