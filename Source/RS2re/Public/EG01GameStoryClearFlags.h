#pragma once
#include "CoreMinimal.h"
#include "EG01GameStoryClearFlags.generated.h"

UENUM(BlueprintType)
enum class EG01GameStoryClearFlags : uint8 {
    None,
    PlayGo,
    MainStory,
    AdditionalStory01 = 4,
    All = 255,
};

