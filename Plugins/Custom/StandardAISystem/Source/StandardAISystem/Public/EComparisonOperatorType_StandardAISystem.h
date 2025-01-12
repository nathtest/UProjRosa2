#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperatorType_StandardAISystem.generated.h"

UENUM(BlueprintType)
enum class EComparisonOperatorType_StandardAISystem : uint8 {
    IsEqualTo,
    IsNotEqualTo,
    IsLessThan,
    IsLessThanOrEqualTo,
    IsGreaterThan,
    IsGreaterThanOrEqualTo,
    Unknown,
};

