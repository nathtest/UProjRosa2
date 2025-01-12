#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveParamQuestBegin.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct FQuestReceiveParamQuestBegin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestObjectCore* MQuestObjectCore;
    
    GAMEBASESYSTEM_API FQuestReceiveParamQuestBegin();
};

