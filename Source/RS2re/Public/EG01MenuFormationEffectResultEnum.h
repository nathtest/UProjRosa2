#pragma once
#include "CoreMinimal.h"
#include "EG01MenuFormationEffectResultEnum.generated.h"

UENUM(BlueprintType)
enum class EG01MenuFormationEffectResultEnum : uint8 {
    UP,
    DOUBLEUP,
    DOWN,
    DOUBLEDOWN,
    HIDDEN_ARROW,
    DEACTIVE,
    NUM,
};

