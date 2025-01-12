#pragma once
#include "CoreMinimal.h"
#include "ESequenceLoadFadeType.generated.h"

UENUM(BlueprintType)
enum class ESequenceLoadFadeType : uint8 {
    Auto,
    FadeIn,
    Fill,
    Unuse,
};

