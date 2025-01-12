#pragma once
#include "CoreMinimal.h"
#include "ETextTagSpRepCompOp.generated.h"

UENUM(BlueprintType)
enum class ETextTagSpRepCompOp : uint8 {
    IsEqualTo,
    IsNotEqualTo,
    IsLessThan,
    IsLessThanOrEqualTo,
    IsGreaterThan,
    IsGreaterThanOrEqualTo,
    Unknown,
};

