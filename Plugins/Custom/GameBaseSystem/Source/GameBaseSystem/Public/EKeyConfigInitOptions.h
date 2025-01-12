#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigInitOptions.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigInitOptions : uint8 {
    None,
    PlatformAcceptKey,
    PlatformBackKey,
};

