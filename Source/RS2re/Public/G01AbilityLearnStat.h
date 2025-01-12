#pragma once
#include "CoreMinimal.h"
#include "G01AbilityLearnStatPerChara.h"
#include "G01CharacterID.h"
#include "G01AbilityLearnStat.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityLearnStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01CharacterID, FG01AbilityLearnStatPerChara> CharaStatMap;
    
    FG01AbilityLearnStat();
};

