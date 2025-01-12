#pragma once
#include "CoreMinimal.h"
#include "EG01ShadowQualityTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01ShadowQualityTypeEnum : uint8 {
    LOW,
    MIDDLE,
    HIGH,
    HIGHEST,
};

