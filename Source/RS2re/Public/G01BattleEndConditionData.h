#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01BattleEndConditionParam.h"
#include "G01BattleEndConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEndConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleEndConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01BattleEndConditionParam Base;
    
    FG01BattleEndConditionData();
};

