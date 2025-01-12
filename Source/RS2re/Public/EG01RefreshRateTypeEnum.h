#pragma once
#include "CoreMinimal.h"
#include "EG01RefreshRateTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01RefreshRateTypeEnum : uint8 {
    RATE_30HZ,
    RATE_60HZ,
    RATE_100HZ,
    RATE_120HZ,
    UNLIMITED,
};

