#pragma once
#include "CoreMinimal.h"
#include "EG01MainMenuEquipmentCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EG01MainMenuEquipmentCategoryEnum : uint8 {
    WEAPON_1,
    WEAPON_2,
    ARMOR_SHIELD,
    ARMOR_BODY,
    ARMOR_HEAD,
    ARMOR_ARM,
    ARMOR_LEG,
    ARMOR_ACCESSORY,
    ITEM_1,
    ITEM_2,
};

