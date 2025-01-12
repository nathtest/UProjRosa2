#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperatorType.generated.h"

UENUM(BlueprintType)
enum class EComparisonOperatorType : uint8 {
    IsEqualTo,
    IsNotEqualTo,
    IsLessThan,
    IsLessThanOrEqualTo,
    IsGreaterThan,
    IsGreaterThanOrEqualTo,
    Unknown,
};

