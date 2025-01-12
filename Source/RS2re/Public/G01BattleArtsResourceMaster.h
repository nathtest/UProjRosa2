#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsResourceArtsUnit.h"
#include "G01BattleArtsResourceMaster.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsResourceMaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleArtsResourceArtsUnit> PartyArtsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleArtsResourceArtsUnit> EnemyArtsMap;
    
    FG01BattleArtsResourceMaster();
};

