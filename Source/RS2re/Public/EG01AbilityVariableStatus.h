#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityVariableStatus.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityVariableStatus : uint8 {
    HitPoint,
    LifePoint,
    BattlePoint,
};

