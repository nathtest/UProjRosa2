#pragma once
#include "CoreMinimal.h"
#include "EG01NpcAnimID.generated.h"

UENUM(BlueprintType)
enum class EG01NpcAnimID : uint8 {
    MF_WAIT,
    MF_WALK,
    MF_RUN,
    MF_DASH,
    MF_TURN,
    MF_JUMP_UP,
    MF_JUMP_DOWN,
    MF_JUMP_GROUND,
    NUM,
};

