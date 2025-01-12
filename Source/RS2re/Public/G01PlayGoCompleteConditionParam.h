#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "G01PlayGoCompleteConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PlayGoCompleteConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    FG01PlayGoCompleteConditionParam();
};

