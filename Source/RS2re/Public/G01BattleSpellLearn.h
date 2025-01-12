#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsLearnUnit.h"
#include "G01BattleSpellLearnTerm.h"
#include "G01BattleSpellLearn.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleSpellLearn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleSpellLearnTerm> MTermList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleArtsLearnUnit> MUnitList;
    
    FG01BattleSpellLearn();
};

