#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCharacterAnimReactionType.generated.h"

UENUM(BlueprintType)
enum class EG01BattleCharacterAnimReactionType : uint8 {
    None,
    Damage,
    Dead,
    Defense,
    Avoid,
    Fathom,
    Faint,
    Getup,
    AilmentDamage,
    AilmentRecover,
};

