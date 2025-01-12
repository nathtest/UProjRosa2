#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01ClearAreaCountConditionParam.h"
#include "G01ClearAreaCountConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ClearAreaCountConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ClearAreaCountConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01ClearAreaCountConditionParam Base;
    
    FG01ClearAreaCountConditionData();
};

