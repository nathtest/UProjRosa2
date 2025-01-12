#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityArtsBpCostType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityArtsBpCostType : uint8 {
    Skill,
    Spell,
    Item,
    BasicSpell,
    CombineSpell,
    RecoverSpell,
    All,
    Num,
};

