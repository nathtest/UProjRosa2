#pragma once
#include "CoreMinimal.h"
#include "EG01GamePlayModeType.generated.h"

UENUM(BlueprintType)
enum class EG01GamePlayModeType : uint8 {
    CLASSIC,
    MODERN,
    HYBRID,
};

