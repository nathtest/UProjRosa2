#pragma once
#include "CoreMinimal.h"
#include "EG01BattleTaskSlot.generated.h"

UENUM(BlueprintType)
enum class EG01BattleTaskSlot : uint8 {
    Playback,
    Command,
};

