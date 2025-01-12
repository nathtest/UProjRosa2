#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityAilmentType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityAilmentType : uint8 {
    Poison,
    Stun,
    Blind,
    Paralysis,
    Sleep,
    Charm,
    Confuse,
    Berserk,
    Petrify,
    Lethal,
    RatioDamage,
    Num,
};

