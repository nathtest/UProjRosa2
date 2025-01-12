#pragma once
#include "CoreMinimal.h"
#include "EG01OptionMenuListTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01OptionMenuListTypeEnum : uint8 {
    SELECT,
    SLIDER,
    ONOFF,
    POPUP,
};

