#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveParamQuestOrdered.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct FQuestReceiveParamQuestOrdered {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestObjectCore* MQuestObjectCore;
    
    GAMEBASESYSTEM_API FQuestReceiveParamQuestOrdered();
};

