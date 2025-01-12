#pragma once
#include "CoreMinimal.h"
#include "ESequenceEndReason.generated.h"

UENUM(BlueprintType)
enum class ESequenceEndReason : uint8 {
    Unknown,
    Normal,
    FullSkip,
    SectionSkip,
};

