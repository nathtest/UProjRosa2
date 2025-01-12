#pragma once
#include "CoreMinimal.h"
#include "EG01AbilitySpellType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilitySpellType : uint8 {
    Pyrology,
    Hydrology,
    Aerology,
    Terrology,
    Cosmology,
    Umbrology,
    Num,
};

