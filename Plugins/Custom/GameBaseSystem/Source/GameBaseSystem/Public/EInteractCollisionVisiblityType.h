#pragma once
#include "CoreMinimal.h"
#include "EInteractCollisionVisiblityType.generated.h"

UENUM(BlueprintType)
enum class EInteractCollisionVisiblityType : uint8 {
    Default,
    AlwaysVisible,
    AlwaysInvisible,
    ActiveOnly,
};

