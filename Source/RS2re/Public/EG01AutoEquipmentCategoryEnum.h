#pragma once
#include "CoreMinimal.h"
#include "EG01AutoEquipmentCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EG01AutoEquipmentCategoryEnum : uint8 {
    ATTACK_PRIORITY,
    DEFENSE_PRIORITY,
    MAGIC_PRIORITY,
    SPEED_PRIORITY,
    NONE,
};

