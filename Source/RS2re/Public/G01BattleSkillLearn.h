#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsLearnUnit.h"
#include "G01BattleSkillLearnTerm.h"
#include "G01BattleSkillLearn.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleSkillLearn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleArtsLearnUnit> MUnitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleSkillLearnTerm> MTermList;
    
    FG01BattleSkillLearn();
};

