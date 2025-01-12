#pragma once
#include "CoreMinimal.h"
#include "EVirtualKeyboardInputMode.generated.h"

UENUM(BlueprintType)
enum class EVirtualKeyboardInputMode : uint8 {
    Default,
    Number,
    Web,
    Email,
    AlphaNumeric,
};

