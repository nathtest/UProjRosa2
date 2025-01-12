#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCommandSource.generated.h"

UENUM(BlueprintType)
enum class EG01BattleCommandSource : uint8 {
    Party,
    Enemy,
    Unknown,
};

