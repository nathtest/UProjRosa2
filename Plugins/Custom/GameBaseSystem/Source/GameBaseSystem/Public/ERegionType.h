#pragma once
#include "CoreMinimal.h"
#include "ERegionType.generated.h"

UENUM(BlueprintType)
enum class ERegionType : uint8 {
    JP,
    US,
    EU,
    ASIA,
    Num,
};

