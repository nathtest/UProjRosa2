#pragma once
#include "CoreMinimal.h"
#include "EBattleGameoverPhase.generated.h"

UENUM(BlueprintType)
enum class EBattleGameoverPhase : uint8 {
    NONE,
    PHASE_INACTIVE,
    PHASE_IN,
    PHASE_COMMAND_WAIT,
    PHASE_ACTION,
    PHASE_OUT,
    NUM,
};

