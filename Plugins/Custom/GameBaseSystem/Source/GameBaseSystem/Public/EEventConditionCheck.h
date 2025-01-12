#pragma once
#include "CoreMinimal.h"
#include "EEventConditionCheck.generated.h"

UENUM(BlueprintType)
enum class EEventConditionCheck : uint8 {
    Success,
    Skip,
};

