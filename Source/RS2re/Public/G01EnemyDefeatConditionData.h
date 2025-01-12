#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01EnemyDefeatConditionParam.h"
#include "G01EnemyDefeatConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01EnemyDefeatConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnemyDefeatConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01EnemyDefeatConditionParam Base;
    
    FG01EnemyDefeatConditionData();
};

