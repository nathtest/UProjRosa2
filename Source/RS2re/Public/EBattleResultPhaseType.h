#pragma once
#include "CoreMinimal.h"
#include "EBattleResultPhaseType.generated.h"

UENUM(BlueprintType)
enum class EBattleResultPhaseType : uint8 {
    NONE,
    START,
    END,
    GAUGE_UP,
    ITEM,
    INPUT_WAIT,
    TEST,
    NUM,
};

