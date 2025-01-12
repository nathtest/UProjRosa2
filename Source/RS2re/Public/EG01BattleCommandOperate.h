#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCommandOperate.generated.h"

UENUM(BlueprintType)
enum class EG01BattleCommandOperate : uint8 {
    Initial,
    Up,
    Down,
    Left,
    Right,
};

