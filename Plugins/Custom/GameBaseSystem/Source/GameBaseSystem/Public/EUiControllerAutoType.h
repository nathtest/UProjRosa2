#pragma once
#include "CoreMinimal.h"
#include "EUiControllerAutoType.generated.h"

UENUM(BlueprintType)
enum class EUiControllerAutoType : uint8 {
    NoAuto,
    SetupAuto,
    ToggleAuto,
    Num,
};

