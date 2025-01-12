#pragma once
#include "CoreMinimal.h"
#include "EInteractLookingAtType.generated.h"

UENUM(BlueprintType)
enum class EInteractLookingAtType : uint8 {
    LOOKING_AT_POINT,
    LOOKING_AT_PLANE,
    ANYWHERE,
};

