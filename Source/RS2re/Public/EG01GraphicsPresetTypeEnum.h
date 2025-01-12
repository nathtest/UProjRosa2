#pragma once
#include "CoreMinimal.h"
#include "EG01GraphicsPresetTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01GraphicsPresetTypeEnum : uint8 {
    LOW,
    MIDDLE,
    HIGH,
    HIGHEST,
    CUSTOM,
};

