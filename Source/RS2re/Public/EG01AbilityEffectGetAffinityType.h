#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityEffectGetAffinityType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityEffectGetAffinityType : uint8 {
    Week,
    Resist,
    WeekAndResist,
    Num,
};

