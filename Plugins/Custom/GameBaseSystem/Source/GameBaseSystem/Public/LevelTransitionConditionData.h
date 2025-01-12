#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionConditionParam.h"
#include "QuestConditionDataBase.h"
#include "LevelTransitionConditionData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FLevelTransitionConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelTransitionConditionParam Base;
    
    FLevelTransitionConditionData();
};

