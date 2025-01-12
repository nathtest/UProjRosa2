#pragma once
#include "CoreMinimal.h"
#include "QuestSectionNameView.h"
#include "QuestReceiveReserveParamSectionChanged.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct FQuestReceiveReserveParamSectionChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectCore> MQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MTargetSectionName;
    
    GAMEBASESYSTEM_API FQuestReceiveReserveParamSectionChanged();
};

