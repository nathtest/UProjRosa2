#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveReserveParamOrdered.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct FQuestReceiveReserveParamOrdered {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    GAMEBASESYSTEM_API FQuestReceiveReserveParamOrdered();
};

