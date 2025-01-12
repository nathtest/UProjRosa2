#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01PeriodJumpConditionParam.h"
#include "G01PeriodJumpConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PeriodJumpConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PeriodJumpConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01PeriodJumpConditionParam Base;
    
    FG01PeriodJumpConditionData();
};

