#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsRefStatus.generated.h"

UENUM(BlueprintType)
enum class EG01BattleArtsRefStatus : uint8 {
    None,
    STR,
    DEX,
    MAG,
    LOG,
    SPD,
    STA,
    SpellPower,
};

