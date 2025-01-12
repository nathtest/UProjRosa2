#pragma once
#include "CoreMinimal.h"
#include "G01EnemyRespawnTime.generated.h"

USTRUCT(BlueprintType)
struct FG01EnemyRespawnTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnDistance;
    
    RS2RE_API FG01EnemyRespawnTime();
};

