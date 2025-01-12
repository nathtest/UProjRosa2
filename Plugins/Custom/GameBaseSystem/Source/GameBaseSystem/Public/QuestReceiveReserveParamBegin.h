#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveReserveParamBegin.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct FQuestReceiveReserveParamBegin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    GAMEBASESYSTEM_API FQuestReceiveReserveParamBegin();
};

