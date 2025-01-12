#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01PartyStatusLevelConditionParam.h"
#include "G01PartyStatusLevelConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PartyStatusLevelConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PartyStatusLevelConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01PartyStatusLevelConditionParam Base;
    
    FG01PartyStatusLevelConditionData();
};

