#pragma once
#include "CoreMinimal.h"
#include "EG01ScreenResolutionTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01ScreenResolutionTypeEnum : uint8 {
    WINDOWSIZE_3840x2160,
    WINDOWSIZE_2560x1440,
    WINDOWSIZE_1920x1080,
    WINDOWSIZE_1280x720,
};

