#pragma once
#include "CoreMinimal.h"
#include "EVALookMode.generated.h"

UENUM(BlueprintType)
enum class EVALookMode : uint8 {
    Auto,
    RelativeRotation,
    RelativePosition,
    TargetActor,
    Invalid,
};

