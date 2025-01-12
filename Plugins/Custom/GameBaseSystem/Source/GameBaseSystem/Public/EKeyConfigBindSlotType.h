#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigBindSlotType.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigBindSlotType : uint8 {
    Keyboard,
    Mouse,
    Gamepad,
    Num,
    None,
};

