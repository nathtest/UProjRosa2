#pragma once
#include "CoreMinimal.h"
#include "EG01WalkingAreaType.generated.h"

UENUM(BlueprintType)
enum class EG01WalkingAreaType : uint8 {
    GapLeftWall,
    GapRightWall,
    LeftWall,
    RightWall,
    Balance,
    Crouch,
    NUM,
};

