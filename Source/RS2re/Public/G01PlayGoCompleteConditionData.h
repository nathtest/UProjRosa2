#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01PlayGoCompleteConditionParam.h"
#include "G01PlayGoCompleteConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PlayGoCompleteConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PlayGoCompleteConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01PlayGoCompleteConditionParam Base;
    
    FG01PlayGoCompleteConditionData();
};

