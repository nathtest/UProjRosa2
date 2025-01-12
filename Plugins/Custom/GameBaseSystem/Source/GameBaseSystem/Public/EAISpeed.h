#pragma once
#include "CoreMinimal.h"
#include "EAISpeed.generated.h"

UENUM(BlueprintType)
enum class EAISpeed : uint8 {
    AI_SPEED_RUN,
    AI_SPEED_WALK,
    AI_SPEED_RUSH,
    AI_SPEED_DRAGON_RUSH,
};

