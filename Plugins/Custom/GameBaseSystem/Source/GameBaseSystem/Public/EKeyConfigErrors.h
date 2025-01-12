#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigErrors.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigErrors : uint8 {
    None,
    NoKey,
    Duplicate,
};

