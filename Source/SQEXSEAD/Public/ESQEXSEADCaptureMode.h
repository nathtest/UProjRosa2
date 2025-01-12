#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADCaptureMode.generated.h"

UENUM(BlueprintType)
enum class ESQEXSEADCaptureMode : uint8 {
    None,
    Sync,
    RealTime,
};

