#pragma once
#include "CoreMinimal.h"
#include "EFollowMoveState.generated.h"

UENUM(BlueprintType)
enum class EFollowMoveState : uint8 {
    AI_IDLE,
    FOLLOW_STATE_RUN,
};

