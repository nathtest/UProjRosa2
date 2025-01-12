#pragma once
#include "CoreMinimal.h"
#include "ESaveDataLoadTarget.generated.h"

UENUM(BlueprintType)
enum class ESaveDataLoadTarget : uint8 {
    Normal,
    Trial,
    Backward,
    TrialBackward,
};

