#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsOrigin.generated.h"

UENUM(BlueprintType)
enum class EG01BattleArtsOrigin : uint8 {
    MainTarget,
    TargetCenter,
    TargetFormationCenter,
};

