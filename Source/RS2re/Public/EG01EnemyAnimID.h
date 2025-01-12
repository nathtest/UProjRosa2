#pragma once
#include "CoreMinimal.h"
#include "EG01EnemyAnimID.generated.h"

UENUM(BlueprintType)
enum class EG01EnemyAnimID : uint8 {
    MF_WAIT,
    MF_WALK,
    MF_RUN,
    MF_JUMP_UP,
    MF_JUMP_DOWN,
    MF_JUMP_GROUND,
    NUM,
};

