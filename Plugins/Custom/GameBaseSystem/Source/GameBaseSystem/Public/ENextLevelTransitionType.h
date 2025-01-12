#pragma once
#include "CoreMinimal.h"
#include "ENextLevelTransitionType.generated.h"

UENUM(BlueprintType)
enum class ENextLevelTransitionType : uint8 {
    None,
    Level,
    Position,
};

