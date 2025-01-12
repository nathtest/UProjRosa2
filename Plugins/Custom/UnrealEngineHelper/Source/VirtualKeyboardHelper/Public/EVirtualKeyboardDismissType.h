#pragma once
#include "CoreMinimal.h"
#include "EVirtualKeyboardDismissType.generated.h"

UENUM(BlueprintType)
enum class EVirtualKeyboardDismissType : uint8 {
    None,
    Unknown,
    Submitted,
    Cancel,
};

