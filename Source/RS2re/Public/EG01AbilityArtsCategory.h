#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityArtsCategory.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityArtsCategory : uint8 {
    Skill,
    Spell,
    Item,
    BasicSpell,
    ConbineSpell,
};

