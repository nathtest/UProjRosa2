#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityArtsRecoverType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityArtsRecoverType : uint8 {
    Skill,
    Spell,
    Item,
    BasicSpell,
    CombineSpell,
    RecoverSpell,
    All,
    Num,
};

