#pragma once
#include "CoreMinimal.h"
#include "EG01InteractActionType.generated.h"

UENUM(BlueprintType)
enum class EG01InteractActionType : uint8 {
    None,
    TreasureBox,
    Door,
    Pitfall,
    GimmickSunkenShipSurpriseDoor,
    Switch,
    PitfallDestroyer,
    NUM,
};

