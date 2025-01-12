#pragma once
#include "CoreMinimal.h"
#include "EEventQueuePriority.generated.h"

UENUM(BlueprintType)
namespace EEventQueuePriority {
    enum Type {
        Highest,
        High,
        Normal,
        Low,
        Lowest,
        Num,
        Invalid,
    };
}

