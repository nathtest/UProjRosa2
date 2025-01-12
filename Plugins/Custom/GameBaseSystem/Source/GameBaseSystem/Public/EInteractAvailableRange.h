#pragma once
#include "CoreMinimal.h"
#include "EInteractAvailableRange.generated.h"

UENUM(BlueprintType)
enum class EInteractAvailableRange : uint8 {
    ALL,
    FRONT_ONLY,
};

