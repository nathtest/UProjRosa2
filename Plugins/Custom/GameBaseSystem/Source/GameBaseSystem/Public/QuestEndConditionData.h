#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h"
#include "QuestEndConditionParam.h"
#include "QuestEndConditionData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestEndConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestEndConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuestEndConditionParam Base;
    
    FQuestEndConditionData();
};

