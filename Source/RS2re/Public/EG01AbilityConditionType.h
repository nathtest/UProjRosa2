#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityConditionType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityConditionType : uint8 {
    None,
    BattleVictory,
    ReceiveAttack,
    SkillAttack,
    SpellAttack,
    SpellRecovery,
    SpellSupport,
    CounterSuccess,
    ItemUse,
    LinkJoin,
    ItemDropFromEnemy,
    MaterialCollection,
};

