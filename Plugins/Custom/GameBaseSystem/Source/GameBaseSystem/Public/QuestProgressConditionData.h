#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h"
#include "QuestProgressConditionParam.h"
#include "QuestProgressConditionData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestProgressConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestProgressConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuestProgressConditionParam Base;
    
    FQuestProgressConditionData();
};

