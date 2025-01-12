#pragma once
#include "CoreMinimal.h"
#include "ESaveSlotCategory.generated.h"

UENUM(BlueprintType)
enum class ESaveSlotCategory : uint8 {
    Auto,
    Slot,
    System,
    Num,
    None,
};

