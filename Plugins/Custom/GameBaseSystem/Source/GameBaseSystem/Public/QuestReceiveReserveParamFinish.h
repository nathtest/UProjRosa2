#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveReserveParamFinish.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct FQuestReceiveReserveParamFinish {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    GAMEBASESYSTEM_API FQuestReceiveReserveParamFinish();
};

