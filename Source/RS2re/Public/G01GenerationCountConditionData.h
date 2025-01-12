#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01GenerationCountConditionParam.h"
#include "G01GenerationCountConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01GenerationCountConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01GenerationCountConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01GenerationCountConditionParam Base;
    
    FG01GenerationCountConditionData();
};

