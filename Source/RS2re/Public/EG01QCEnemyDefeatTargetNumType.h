#pragma once
#include "CoreMinimal.h"
#include "EG01QCEnemyDefeatTargetNumType.generated.h"

UENUM(BlueprintType)
enum class EG01QCEnemyDefeatTargetNumType : uint8 {
    All,
    Custom,
    Unknown,
};

