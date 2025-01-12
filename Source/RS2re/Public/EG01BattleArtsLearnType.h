#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsLearnType.generated.h"

UENUM(BlueprintType)
enum class EG01BattleArtsLearnType : uint8 {
    Skill,
    Spell,
    Fathom,
    Counter,
    Num,
};

