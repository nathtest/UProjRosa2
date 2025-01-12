#pragma once
#include "CoreMinimal.h"
#include "EGeneralCompareOperator.generated.h"

UENUM(BlueprintType)
enum class EGeneralCompareOperator : uint8 {
    EqualTo,
    NotEqualTo,
    LessThan,
    LessThanOrEqualTo,
    GreaterThan,
    GreaterThanOrEqualTo,
};

