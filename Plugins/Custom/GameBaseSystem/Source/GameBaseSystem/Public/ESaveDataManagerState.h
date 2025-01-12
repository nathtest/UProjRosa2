#pragma once
#include "CoreMinimal.h"
#include "ESaveDataManagerState.generated.h"

UENUM(BlueprintType)
enum class ESaveDataManagerState : uint8 {
    Idle,
    Loading,
    Saving,
};

