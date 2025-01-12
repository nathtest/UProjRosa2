#pragma once
#include "CoreMinimal.h"
#include "EEventFlags.generated.h"

UENUM(BlueprintType)
enum class EEventFlags : uint8 {
    None,
    Initialized,
    Checking,
    ConditionPassed = 4,
    ForceEnd = 8,
    DuringBeginEvent = 16,
};

