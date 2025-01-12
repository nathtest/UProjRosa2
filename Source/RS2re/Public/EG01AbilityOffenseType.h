#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityOffenseType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityOffenseType : uint8 {
    Physics,
    Magic,
    SkillPower,
    SpellPower,
    Num,
};

