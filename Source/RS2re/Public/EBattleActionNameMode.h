#pragma once
#include "CoreMinimal.h"
#include "EBattleActionNameMode.generated.h"

UENUM(BlueprintType)
enum class EBattleActionNameMode : uint8 {
    NONE,
    STANDARD,
    FATHOM,
    COUNTER,
    COUNTER_LEARN,
    LINK,
    STEAL,
    NUM,
};

