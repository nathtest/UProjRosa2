#pragma once
#include "CoreMinimal.h"
#include "EG01ItemArmorCorrectionID.generated.h"

UENUM(BlueprintType)
enum class EG01ItemArmorCorrectionID : uint8 {
    NONE,
    STRENGTH,
    DEXTERITY,
    MAGIC,
    INTELLIGENCE,
    SPEED,
    STAMINA,
    DARK_MAGIC,
    SPELL_POWER,
};

