#pragma once
#include "CoreMinimal.h"
#include "ESenseType.generated.h"

UENUM(BlueprintType)
enum class ESenseType : uint8 {
    Normal,
    Unique,
};

