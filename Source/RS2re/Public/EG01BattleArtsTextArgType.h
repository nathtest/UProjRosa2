#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsTextArgType.generated.h"

UENUM(BlueprintType)
enum class EG01BattleArtsTextArgType : uint8 {
    Power,
    HitCount,
    PowerByHitCount,
};

