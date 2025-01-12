#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01EquipCompleteConditionParam.h"
#include "G01EquipCompleteConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01EquipCompleteConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EquipCompleteConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01EquipCompleteConditionParam Base;
    
    FG01EquipCompleteConditionData();
};

