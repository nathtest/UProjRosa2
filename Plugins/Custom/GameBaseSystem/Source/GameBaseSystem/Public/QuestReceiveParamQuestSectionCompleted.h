#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveParamQuestSectionCompleted.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct FQuestReceiveParamQuestSectionCompleted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestObjectCore* MQuestObjectCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MLastSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MLastSectionIndex;
    
    GAMEBASESYSTEM_API FQuestReceiveParamQuestSectionCompleted();
};

