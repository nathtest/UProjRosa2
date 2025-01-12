#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsTargetSelection.generated.h"

UENUM(BlueprintType)
enum class EG01BattleArtsTargetSelection : uint8 {
    Near,
    Far,
    Ally,
    Myself,
    Both,
};

