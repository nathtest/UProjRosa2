#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveParamQuestSectionChanged.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestReceiveParamQuestSectionChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestObjectCore* MQuestObjectCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MPrevSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MNextSectionName;
    
    FQuestReceiveParamQuestSectionChanged();
};

