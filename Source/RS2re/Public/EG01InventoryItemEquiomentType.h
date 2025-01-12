#pragma once
#include "CoreMinimal.h"
#include "EG01InventoryItemEquiomentType.generated.h"

UENUM(BlueprintType)
enum class EG01InventoryItemEquiomentType : uint8 {
    NONE,
    WEAPON_1,
    WEAPON_2,
    ARMOR_SHIELD,
    ARMOR_HEAD,
    ARMOR_BODY,
    ARMOR_ARM,
    ARMOR_LEG,
    ARMOR_WHOLE,
    ARMOR_ACCESSORY,
    ITEM_1,
    ITEM_2,
    ABILITY_UNIQUE_1,
    ABILITY_UNIQUE_2,
    ABILITY_UNIQUE_3,
    ABILITY_CUSTOM_1,
    ABILITY_CUSTOM_2,
    ABILITY_CUSTOM_3,
    ABILITY_CUSTOM_4,
};

