#pragma once
#include "CoreMinimal.h"
#include "EG01ShopSellCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EG01ShopSellCategoryEnum : uint8 {
    WEAPON,
    ARMOR,
    CONSMABLES,
    CRAFTPARTS,
    EVENT,
};

