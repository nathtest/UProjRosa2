#pragma once
#include "CoreMinimal.h"
#include "EDebugSystemLogType.generated.h"

UENUM(BlueprintType)
enum class EDebugSystemLogType : uint8 {
    None,
    Error,
    Warning,
    Debug = 4,
    Custom = 8,
    Default = 16,
};

