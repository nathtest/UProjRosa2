#pragma once
#include "CoreMinimal.h"
#include "EG01VFXScalingType.generated.h"

UENUM(BlueprintType)
enum class EG01VFXScalingType : uint8 {
    NotScaling,
    AutoScaling,
    UseScalingParam,
    NUM,
};

