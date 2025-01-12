#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01BlackSmithStateConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BlackSmithStateConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    FG01BlackSmithStateConditionData();
};

