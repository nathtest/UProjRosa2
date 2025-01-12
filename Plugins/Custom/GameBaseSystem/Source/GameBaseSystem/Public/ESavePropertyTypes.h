#pragma once
#include "CoreMinimal.h"
#include "ESavePropertyTypes.generated.h"

UENUM(BlueprintType)
enum class ESavePropertyTypes : uint8 {
    Always,
    Temp,
    Game,
    System = 4,
    TempGame = 3,
    TempSystem = 5,
};

