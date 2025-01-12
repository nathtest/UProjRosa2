#pragma once
#include "CoreMinimal.h"
#include "G01EnemyDefeatNotifyParam.generated.h"

class AG01FieldEnemyBase;

USTRUCT(BlueprintType)
struct FG01EnemyDefeatNotifyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01FieldEnemyBase> MEnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MDefeatNum;
    
    RS2RE_API FG01EnemyDefeatNotifyParam();
};

