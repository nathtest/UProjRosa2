#pragma once
#include "CoreMinimal.h"
#include "EQuestSectionEvalOp.generated.h"

UENUM(BlueprintType)
enum class EQuestSectionEvalOp : uint8 {
    IsEqualTo,
    IsNotEqualTo,
    IsLessThan,
    IsLessThanOrEqualTo,
    IsGreaterThan,
    IsGreaterThanOrEqualTo,
};

