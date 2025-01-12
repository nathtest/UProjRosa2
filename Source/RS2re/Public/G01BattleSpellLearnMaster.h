#pragma once
#include "CoreMinimal.h"
#include "G01BattleSpellLearn.h"
#include "G01BattleSpellLearnMaster.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleSpellLearnMaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleSpellLearn> LearnList;
    
    FG01BattleSpellLearnMaster();
};

