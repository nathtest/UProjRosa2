#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADCaptureChannels.generated.h"

UENUM(BlueprintType)
enum class ESQEXSEADCaptureChannels : uint8 {
    None,
    Mono,
    Stereo,
    Surround6ch,
    Surround8ch,
};

