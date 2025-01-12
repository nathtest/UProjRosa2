#pragma once
#include "CoreMinimal.h"
#include "EG01VFXDestActorSubCategory.generated.h"

UENUM(BlueprintType)
enum class EG01VFXDestActorSubCategory : uint8 {
    NonUse,
    Charactor,
    EquipWeapon,
    EquipShield,
    ShadowServant,
    NUM,
};

