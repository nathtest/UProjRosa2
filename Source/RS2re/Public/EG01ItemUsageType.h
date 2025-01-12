#pragma once
#include "CoreMinimal.h"
#include "EG01ItemUsageType.generated.h"

UENUM(BlueprintType)
enum class EG01ItemUsageType : uint8 {
    CONSUMABLES,
    EVENT,
    WEAPON,
    SHIELD,
    ARMOR,
    CRAFT_PARTS,
    ABILITY,
};

