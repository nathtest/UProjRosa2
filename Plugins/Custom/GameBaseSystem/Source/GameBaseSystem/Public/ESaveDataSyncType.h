#pragma once
#include "CoreMinimal.h"
#include "ESaveDataSyncType.generated.h"

UENUM(BlueprintType)
enum class ESaveDataSyncType : uint8 {
    Async,
    Sync,
    None,
};

