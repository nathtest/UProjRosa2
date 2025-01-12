#pragma once
#include "CoreMinimal.h"
#include "ESaveDataSubsystemState.generated.h"

UENUM(BlueprintType)
enum class ESaveDataSubsystemState : uint8 {
    Idle,
    Loading,
    Saving,
};

