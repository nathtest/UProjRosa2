#pragma once
#include "CoreMinimal.h"
#include "EDebugMainGameLogUsageType.generated.h"

UENUM(BlueprintType)
enum class EDebugMainGameLogUsageType : uint8 {
    ASSERT,
    ERROR,
    WARNING,
    GENERAL,
    ALWAYS,
};

