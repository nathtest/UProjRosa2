#pragma once
#include "CoreMinimal.h"
#include "EStreamingLevelPriorityID.generated.h"

UENUM(BlueprintType)
enum class EStreamingLevelPriorityID : uint8 {
    PERSISTENT_LEVEL,
    TOP_SUB_LEVEL,
    UNDER_SUB_LEVEL,
    STREAMING_LEVEL_PRIORITY_NUM,
};

