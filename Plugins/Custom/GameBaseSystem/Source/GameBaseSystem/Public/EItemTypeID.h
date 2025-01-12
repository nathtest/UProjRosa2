#pragma once
#include "CoreMinimal.h"
#include "EItemTypeID.generated.h"

UENUM(BlueprintType)
enum class EItemTypeID : uint8 {
    EXPENDABLES_ITEM_ID,
    IMPORTANT_ITEM_ID,
    MONEY_INTERACT_ID,
};

