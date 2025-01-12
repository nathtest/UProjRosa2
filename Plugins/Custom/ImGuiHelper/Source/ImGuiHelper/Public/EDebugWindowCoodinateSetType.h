#pragma once
#include "CoreMinimal.h"
#include "EDebugWindowCoodinateSetType.generated.h"

UENUM(BlueprintType)
enum class EDebugWindowCoodinateSetType : uint8 {
    Pixel,
    ViewportRatio,
};

