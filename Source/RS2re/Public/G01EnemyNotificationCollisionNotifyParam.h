#pragma once
#include "CoreMinimal.h"
#include "EG01EnemyNotificationCollisionNotifyType.h"
#include "G01EnemyNotificationCollisionNotifyParam.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct RS2RE_API FG01EnemyNotificationCollisionNotifyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01EnemyNotificationCollisionNotifyType notifyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    FG01EnemyNotificationCollisionNotifyParam();
};

