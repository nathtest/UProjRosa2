#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityWeaponSlot.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityWeaponSlot : uint8 {
    EquipSlot1,
    EquipSlot2,
    ExtraSlot,
    AllEquipSlot,
    AllSlot,
};

