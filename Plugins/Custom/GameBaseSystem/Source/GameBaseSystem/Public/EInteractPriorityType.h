#pragma once
#include "CoreMinimal.h"
#include "EInteractPriorityType.generated.h"

UENUM(BlueprintType)
enum class EInteractPriorityType : uint8 {
    LOWEST,
    VERYLOW,
    LOW,
    NORMAL,
    HIGH,
    VERYHIGH,
    HIGHEST,
    NUM,
};

