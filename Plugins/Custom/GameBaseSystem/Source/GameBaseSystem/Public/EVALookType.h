#pragma once
#include "CoreMinimal.h"
#include "EVALookType.generated.h"

UENUM(BlueprintType)
enum class EVALookType : uint8 {
    None,
    Body,
    Face,
    Eyes,
    Invalid,
};

