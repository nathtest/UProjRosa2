#pragma once
#include "CoreMinimal.h"
#include "EPathMoveState.generated.h"

UENUM(BlueprintType)
enum class EPathMoveState : uint8 {
    AI_PATH_MOVE_LOOP,
    AI_PATH_MOVE_REPETITION,
    AI_PATH_MOVE_ONCE,
    AI_PATH_MOVE_LOOP_REVERSE,
};

