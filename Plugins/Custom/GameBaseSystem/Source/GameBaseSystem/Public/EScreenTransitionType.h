#pragma once
#include "CoreMinimal.h"
#include "EScreenTransitionType.generated.h"

UENUM(BlueprintType)
enum class EScreenTransitionType : uint8 {
    NONE,
    STANDARD_BLACK,
    STANDARD_WHITE,
    PREVIOUS,
};

