#pragma once
#include "CoreMinimal.h"
#include "ESeqCameraShakeType.generated.h"

UENUM(BlueprintType)
enum class ESeqCameraShakeType : uint8 {
    None,
    Vertical,
    Horizon,
    Forward,
    CircleXY,
    CircleXZ,
    CircleYZ,
    Num,
};

