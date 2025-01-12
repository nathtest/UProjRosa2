#pragma once
#include "CoreMinimal.h"
#include "G01EnemyRespawnTime.h"
#include "G01EnemyRespawnConditionInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01EnemyRespawnConditionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnemyRespawnTime RespawnTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SubLevelTransition;
    
    RS2RE_API FG01EnemyRespawnConditionInfo();
};

