#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01AbilityAcquisitionConditionParam.h"
#include "G01AbilityAcquisitionConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityAcquisitionConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityAcquisitionConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01AbilityAcquisitionConditionParam Base;
    
    FG01AbilityAcquisitionConditionData();
};

