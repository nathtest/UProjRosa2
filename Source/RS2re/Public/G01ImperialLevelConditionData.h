#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01ImperialLevelConditionParam.h"
#include "G01ImperialLevelConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ImperialLevelConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ImperialLevelConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01ImperialLevelConditionParam Base;
    
    FG01ImperialLevelConditionData();
};

