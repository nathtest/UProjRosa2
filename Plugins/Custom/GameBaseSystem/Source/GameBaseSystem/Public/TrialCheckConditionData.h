#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h"
#include "TrialCheckConditionParam.h"
#include "TrialCheckConditionData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FTrialCheckConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrialCheckConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTrialCheckConditionParam Base;
    
    FTrialCheckConditionData();
};

