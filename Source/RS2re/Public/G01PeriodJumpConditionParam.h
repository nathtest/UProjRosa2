#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionParamBase -FallbackName=QuestConditionParamBase
#include "G01PeriodJumpConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PeriodJumpConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JumpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTotal;
    
    FG01PeriodJumpConditionParam();
};

