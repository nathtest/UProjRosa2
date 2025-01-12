#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityEquipCorrectionType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityEquipCorrectionType : uint8 {
    WeaponAttack,
    ShieldActiveRate,
    GirderActiveRate,
    ShieldDefence,
    ArmorPhysics,
    ArmorMagic,
    Num,
};

