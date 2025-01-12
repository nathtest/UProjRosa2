#pragma once
#include "CoreMinimal.h"
#include "EBattleGameoverType.generated.h"

UENUM(BlueprintType)
enum class EBattleGameoverType : uint8 {
    NONE,
    NORMAL,
    NEXT_GENERATION,
    NORMAL_LAST_EMPEROR,
    REVIVE_LAST_EMPEROR,
    NUM,
};

