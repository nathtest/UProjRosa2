#pragma once
#include "CoreMinimal.h"
#include "ECheckBattleMainPhaseEnum.generated.h"

UENUM(BlueprintType)
enum class ECheckBattleMainPhaseEnum : uint8 {
    BeginPause,
    EndPause,
    Default,
};

