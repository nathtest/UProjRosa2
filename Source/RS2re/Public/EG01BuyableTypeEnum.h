#pragma once
#include "CoreMinimal.h"
#include "EG01BuyableTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01BuyableTypeEnum : uint8 {
    BUYABLE,
    NOT_BUYABLE,
    NOT_BOUGHT,
    Num,
};

