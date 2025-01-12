#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsResourceAddress.h"
#include "G01BattleArtsResourceArtsUnit.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsResourceArtsUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleArtsResourceAddress> AddressMap;
    
    FG01BattleArtsResourceArtsUnit();
};

