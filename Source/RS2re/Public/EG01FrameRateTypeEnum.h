#pragma once
#include "CoreMinimal.h"
#include "EG01FrameRateTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01FrameRateTypeEnum : uint8 {
    FRAMERATE_30,
    FRAMERATE_60,
    FRAMERATE_120,
    FRAMERATE_144,
    FRAMERATE_200,
    FRAMERATE_240,
    FRAMERATE_Unlimited,
};

