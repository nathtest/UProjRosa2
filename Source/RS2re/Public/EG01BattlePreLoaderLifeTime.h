#pragma once
#include "CoreMinimal.h"
#include "EG01BattlePreLoaderLifeTime.generated.h"

UENUM(BlueprintType)
enum class EG01BattlePreLoaderLifeTime : uint8 {
    BattleEnd,
    LevelEnd,
};

