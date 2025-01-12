#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCameraOrigin.generated.h"

UENUM(BlueprintType)
enum class EG01BattleCameraOrigin : uint8 {
    Source,
    Target,
    Field,
    LatestDamageSource,
};

