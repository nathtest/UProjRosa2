#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01EmperorSuccessionConditionParam.h"
#include "G01EmperorSuccessionConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01EmperorSuccessionConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EmperorSuccessionConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01EmperorSuccessionConditionParam Base;
    
    FG01EmperorSuccessionConditionData();
};

