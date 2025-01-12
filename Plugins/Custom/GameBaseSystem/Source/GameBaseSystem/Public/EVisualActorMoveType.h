#pragma once
#include "CoreMinimal.h"
#include "EVisualActorMoveType.generated.h"

UENUM(BlueprintType)
enum class EVisualActorMoveType : uint8 {
    Stop,
    Positive,
    Negative,
};

