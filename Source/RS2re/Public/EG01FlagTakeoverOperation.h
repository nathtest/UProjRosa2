#pragma once
#include "CoreMinimal.h"
#include "EG01FlagTakeoverOperation.generated.h"

UENUM(BlueprintType)
enum class EG01FlagTakeoverOperation : uint8 {
    Reset,
    ResetFalse,
    ResetTrue,
    Takeover,
};

