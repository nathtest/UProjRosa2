#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01CheckDLCConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01CheckDLCConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    FG01CheckDLCConditionData();
};

