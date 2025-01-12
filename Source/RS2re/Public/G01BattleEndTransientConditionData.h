#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01BattleEndTransientConditionParam.h"
#include "G01BattleEndTransientConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEndTransientConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01BattleEndTransientConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01BattleEndTransientConditionParam Base;
    
    FG01BattleEndTransientConditionData();
};

