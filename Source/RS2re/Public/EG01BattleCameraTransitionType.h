#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCameraTransitionType.generated.h"

UENUM(BlueprintType)
enum class EG01BattleCameraTransitionType : uint8 {
    Switch,
    Interp,
};

