#pragma once
#include "CoreMinimal.h"
#include "EG01GimmickType.generated.h"

UENUM(BlueprintType)
enum class EG01GimmickType : uint8 {
    None,
    TreasureBox,
    Door,
    Pitfall,
    GimmickSunkenShipSurpriseDoor,
    Switch,
    PitfallDestroyer,
    NUM,
};

