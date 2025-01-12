#pragma once
#include "CoreMinimal.h"
#include "EG01VAIkPartType.generated.h"

UENUM(BlueprintType)
enum class EG01VAIkPartType : uint8 {
    Hand_R,
    Hand_L,
    Leg_R,
    Leg_L,
    Num,
};

