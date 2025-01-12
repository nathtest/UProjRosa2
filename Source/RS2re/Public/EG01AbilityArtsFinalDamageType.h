#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityArtsFinalDamageType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityArtsFinalDamageType : uint8 {
    Skill,
    Spell,
    Item,
    BasicSpell,
    CombineSpell,
    RecoverSpell,
    All,
    Num,
};

