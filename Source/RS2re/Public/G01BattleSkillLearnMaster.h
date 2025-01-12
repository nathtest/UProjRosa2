#pragma once
#include "CoreMinimal.h"
#include "G01BattleSkillLearn.h"
#include "G01BattleSkillLearnMaster.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleSkillLearnMaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleSkillLearn> LearnList;
    
    FG01BattleSkillLearnMaster();
};

