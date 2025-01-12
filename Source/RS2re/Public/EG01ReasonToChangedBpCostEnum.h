#pragma once
#include "CoreMinimal.h"
#include "EG01ReasonToChangedBpCostEnum.generated.h"

UENUM(BlueprintType)
enum class EG01ReasonToChangedBpCostEnum : uint8 {
    NONE,
    DECREASE_BY_ABILITY,
};

