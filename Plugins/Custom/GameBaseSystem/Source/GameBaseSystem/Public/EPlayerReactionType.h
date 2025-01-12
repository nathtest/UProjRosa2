#pragma once
#include "CoreMinimal.h"
#include "EPlayerReactionType.generated.h"

UENUM(BlueprintType)
enum class EPlayerReactionType : uint8 {
    NONE,
    TALK,
    CHECK,
    MOVE = 4,
    OPEN = 8,
    OPEN_TREASUREBOX = 16,
    FIELD_ATTACK = 32,
    INTERACT = 64,
};

