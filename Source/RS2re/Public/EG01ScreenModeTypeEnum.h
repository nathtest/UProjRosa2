#pragma once
#include "CoreMinimal.h"
#include "EG01ScreenModeTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01ScreenModeTypeEnum : uint8 {
    WINDOW,
    VISUTUAL_FULLSCREEN,
    EXCLUSIVE_FULLSCREEN,
};

