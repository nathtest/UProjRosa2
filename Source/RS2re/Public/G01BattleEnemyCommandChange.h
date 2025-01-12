#pragma once
#include "CoreMinimal.h"
#include "G01BattleEnemyCommandChange.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyCommandChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConditionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConditionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextPatternId;
    
    FG01BattleEnemyCommandChange();
};

