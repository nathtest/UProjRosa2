#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionDataBase -FallbackName=QuestConditionDataBase
#include "G01SevenHeroesDefeatConditionParam.h"
#include "G01SevenHeroesDefeatConditionData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SevenHeroesDefeatConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SevenHeroesDefeatConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SevenHeroesDefeatConditionParam Base;
    
    FG01SevenHeroesDefeatConditionData();
};

