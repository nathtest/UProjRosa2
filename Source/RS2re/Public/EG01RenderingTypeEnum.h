#pragma once
#include "CoreMinimal.h"
#include "EG01RenderingTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01RenderingTypeEnum : uint8 {
    LOW,
    MIDDLE,
    HIGH,
    HIGHEST,
};

