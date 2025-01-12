#pragma once
#include "CoreMinimal.h"
#include "EG01ReasonToIgnoreOfDamageEnum.generated.h"

UENUM(BlueprintType)
enum class EG01ReasonToIgnoreOfDamageEnum : uint8 {
    NONE,
    MAGIC_SHIELD,
    ABILITY,
    FAMILY_OR_CHARACTERISTIC,
    SHADOW_SERVANT,
    WRAITH_FORM,
};

