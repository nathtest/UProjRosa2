#pragma once
#include "CoreMinimal.h"
#include "EG01EnemyBackAttackType.generated.h"

UENUM(BlueprintType)
enum class EG01EnemyBackAttackType : uint8 {
    Normal,
    Force,
    Disable,
    NUM,
};

