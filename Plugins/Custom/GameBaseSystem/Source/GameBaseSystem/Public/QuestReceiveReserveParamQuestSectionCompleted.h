#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveReserveParamQuestSectionCompleted.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct FQuestReceiveReserveParamQuestSectionCompleted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    GAMEBASESYSTEM_API FQuestReceiveReserveParamQuestSectionCompleted();
};

