#pragma once
#include "CoreMinimal.h"
#include "EActivityState.generated.h"

UENUM(BlueprintType)
enum class EActivityState : uint8 {
    Hidden,
    Active,
    Complete,
    None,
};

