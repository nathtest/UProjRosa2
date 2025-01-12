#pragma once
#include "CoreMinimal.h"
#include "EG01QCondBattlEndTypeMask.generated.h"

UENUM(BlueprintType)
enum class EG01QCondBattlEndTypeMask : uint8 {
    None,
    Victory,
    Lose,
    Escape = 4,
    AnyEnd = 8,
    Abort = 16,
};

