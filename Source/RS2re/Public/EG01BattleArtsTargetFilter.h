#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsTargetFilter.generated.h"

UENUM(BlueprintType)
enum class EG01BattleArtsTargetFilter : uint8 {
    None,
    AliveOnly,
};

