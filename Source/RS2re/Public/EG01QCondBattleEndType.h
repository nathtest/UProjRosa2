#pragma once
#include "CoreMinimal.h"
#include "EG01QCondBattleEndType.generated.h"

UENUM(BlueprintType)
enum class EG01QCondBattleEndType : uint8 {
    Victory,
    Lose,
    Escape,
    AnyEnd,
    Abort,
    Num,
};

