#pragma once
#include "CoreMinimal.h"
#include "G01BattleEnemyDropInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyDropInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DropSlotNo;
    
    FG01BattleEnemyDropInfo();
};

