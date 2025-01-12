#pragma once
#include "CoreMinimal.h"
#include "QuestSectionNameView.h"
#include "QuestReceiveReserveParamInSectionRange.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestReceiveReserveParamInSectionRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MBeginSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MEndSectionName;
    
    FQuestReceiveReserveParamInSectionRange();
};

