#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01BlackSmithLevelConditionParam.h"
#include "G01BlackSmithLevelConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BlackSmithLevelConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BlackSmithLevelConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01BlackSmithLevelConditionParam Base;
    
    FG01BlackSmithLevelConditionData();
};

