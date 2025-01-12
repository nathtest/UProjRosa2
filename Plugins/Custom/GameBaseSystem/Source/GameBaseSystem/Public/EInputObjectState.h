#pragma once
#include "CoreMinimal.h"
#include "EInputObjectState.generated.h"

UENUM(BlueprintType)
enum class EInputObjectState : uint8 {
    NONE,
    ACTIVE,
    PAUSE,
    WAITING,
};

