#pragma once
#include "CoreMinimal.h"
#include "EInteractBaseType.generated.h"

UENUM(BlueprintType)
enum class EInteractBaseType : uint8 {
    FROM_ACTOR,
    FROM_COLLISION,
};

