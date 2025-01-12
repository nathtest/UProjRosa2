#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityBasicStatusType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityBasicStatusType : uint8 {
    HitPoint,
    LifePoint,
    BattlePoint,
    Strength,
    Dexterity,
    Magic,
    Intelligence,
    Speed,
    Stamina,
    Num,
};

