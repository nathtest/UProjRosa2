#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveParamQuestBegin.h"
#include "OnReceiveQuestBeginDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveQuestBegin, FQuestReceiveParamQuestBegin, InBeginParam);

