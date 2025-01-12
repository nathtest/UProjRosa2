#pragma once
#include "CoreMinimal.h"
#include "EG01ItemWeaponType.generated.h"

UENUM(BlueprintType)
enum class EG01ItemWeaponType : uint8 {
    NONE,
    SWORD,
    GREAT_SWORD,
    AXE,
    CLUB,
    SPEAR,
    SHORT_SWORD,
    BOW,
    CLAW,
};

