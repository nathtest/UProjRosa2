#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADMoviePipelineCaptureSampleRate.generated.h"

UENUM(BlueprintType)
enum class ESQEXSEADMoviePipelineCaptureSampleRate : uint8 {
    SMPL_24000,
    SMPL_44100,
    SMPL_48000,
};

