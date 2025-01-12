#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigType.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigType : uint8 {
    None,
    KeyboardAndMouse,
    Gamepad,
    Num,
};

