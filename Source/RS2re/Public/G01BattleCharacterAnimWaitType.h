#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacterAnimWaitType.generated.h"

UENUM(BlueprintType)
enum class G01BattleCharacterAnimWaitType : uint8 {
    Stand,
    Command,
    Damage,
    Ailment,
    Faint,
};

