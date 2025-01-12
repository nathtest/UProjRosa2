#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCharacterAnimActionType.generated.h"

UENUM(BlueprintType)
enum class EG01BattleCharacterAnimActionType : uint8 {
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
    Item,
    Guard,
};

