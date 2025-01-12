#pragma once
#include "CoreMinimal.h"
#include "EG01PlayerActionType.generated.h"

UENUM(BlueprintType)
enum class EG01PlayerActionType : uint8 {
    Normal,
    ForceMove,
    ForceRotateCamera,
    Turn,
    NUM,
};

