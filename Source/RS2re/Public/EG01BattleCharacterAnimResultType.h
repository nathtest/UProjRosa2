#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCharacterAnimResultType.generated.h"

UENUM(BlueprintType)
enum class EG01BattleCharacterAnimResultType : uint8 {
    Sword,
    GreatSword,
    ShortSword,
    Spear,
    Axe,
    Club,
    Bow,
    Martial,
    Claw,
    Spell,
    Other,
    Down,
};

