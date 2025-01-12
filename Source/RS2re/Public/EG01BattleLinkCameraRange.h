#pragma once
#include "CoreMinimal.h"
#include "EG01BattleLinkCameraRange.generated.h"

UENUM(BlueprintType)
enum class EG01BattleLinkCameraRange : uint8 {
    NearSingle,
    FarSingle,
    FarToNear,
    AllRange,
    Num,
};

