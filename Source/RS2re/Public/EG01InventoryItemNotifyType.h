#pragma once
#include "CoreMinimal.h"
#include "EG01InventoryItemNotifyType.generated.h"

UENUM(BlueprintType)
enum class EG01InventoryItemNotifyType : uint8 {
    NO_CATEGORY,
    BATTLE,
    EVENT,
    EVENT_HUD,
};

