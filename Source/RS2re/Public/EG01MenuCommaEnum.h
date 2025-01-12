#pragma once
#include "CoreMinimal.h"
#include "EG01MenuCommaEnum.generated.h"

UENUM(BlueprintType)
enum class EG01MenuCommaEnum : uint8 {
    COMMA,
    PERIOD,
    SPACE,
    OVER_PERIOD,
    OVER_SPACE,
    NUM,
};

