#pragma once
#include "CoreMinimal.h"
#include "EG01MessageSpeedTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01MessageSpeedTypeEnum : uint8 {
    STANDARD,
    HIGH_SPEED,
    REAL_TIME,
    Num,
};

