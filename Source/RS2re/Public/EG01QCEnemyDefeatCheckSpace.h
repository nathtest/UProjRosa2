#pragma once
#include "CoreMinimal.h"
#include "EG01QCEnemyDefeatCheckSpace.generated.h"

UENUM(BlueprintType)
enum class EG01QCEnemyDefeatCheckSpace : uint8 {
    Global,
    CurrentMap,
    Custom,
};

