#pragma once
#include "CoreMinimal.h"
#include "EG01AddedPotentCureTimingEnum.generated.h"

UENUM(BlueprintType)
enum class EG01AddedPotentCureTimingEnum : uint8 {
    NONE,
    ON_TURN_ELAPSED,
    ON_PREPARE_ACTION,
    ON_ENDED_ACTION,
};

