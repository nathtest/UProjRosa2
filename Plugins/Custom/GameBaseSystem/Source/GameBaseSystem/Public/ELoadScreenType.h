#pragma once
#include "CoreMinimal.h"
#include "ELoadScreenType.generated.h"

UENUM(BlueprintType)
enum class ELoadScreenType : uint8 {
    STANDARD,
    SYNOPSIS,
    SIMPLE,
    WORMHOLE,
    UNKNOWN,
};

