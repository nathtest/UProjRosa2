#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityTargetType.generated.h"

UENUM(BlueprintType)
enum class EG01AbilityTargetType : uint8 {
    Myself,
    Ally,
    Num,
};

