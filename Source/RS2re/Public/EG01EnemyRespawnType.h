#pragma once
#include "CoreMinimal.h"
#include "EG01EnemyRespawnType.generated.h"

UENUM(BlueprintType)
enum class EG01EnemyRespawnType : uint8 {
    Time,
    Distance,
    NUM,
};

