#pragma once
#include "CoreMinimal.h"
#include "EG01EnemyNotificationCollisionNotifyType.generated.h"

UENUM(BlueprintType)
enum class EG01EnemyNotificationCollisionNotifyType : uint8 {
    NONE,
    DISABLE_SENSE_PLAYER,
};

