#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsTargetRange.generated.h"

UENUM(BlueprintType)
enum class EG01BattleArtsTargetRange : uint8 {
    Single,
    Penetrate,
    Line,
    Around,
    All,
    Random,
};

