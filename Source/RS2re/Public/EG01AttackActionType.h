#pragma once
#include "CoreMinimal.h"
#include "EG01AttackActionType.generated.h"

UENUM(BlueprintType)
enum class EG01AttackActionType : uint8 {
    Unknown,
    Skill,
    Magic,
    Item,
    Ailment,
    MapAspect,
};

