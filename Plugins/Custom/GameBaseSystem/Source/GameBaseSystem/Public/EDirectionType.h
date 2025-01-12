#pragma once
#include "CoreMinimal.h"
#include "EDirectionType.generated.h"

UENUM(BlueprintType)
enum class EDirectionType : uint8 {
    Front,
    Left,
    Right,
    Back,
    Unknown,
};

