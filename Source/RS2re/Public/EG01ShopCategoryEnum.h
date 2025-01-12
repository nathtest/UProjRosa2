#pragma once
#include "CoreMinimal.h"
#include "EG01ShopCategoryEnum.generated.h"

UENUM(BlueprintType)
enum class EG01ShopCategoryEnum : uint8 {
    DEFAULT,
    BUYONLY,
    SELLONLY,
};

