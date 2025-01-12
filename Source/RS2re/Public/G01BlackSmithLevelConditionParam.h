#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "G01BlackSmithLevelConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BlackSmithLevelConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlackSmithLevel;
    
    FG01BlackSmithLevelConditionParam();
};

