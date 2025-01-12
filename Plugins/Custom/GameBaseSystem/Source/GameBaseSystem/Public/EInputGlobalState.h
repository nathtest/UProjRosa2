#pragma once
#include "CoreMinimal.h"
#include "EInputGlobalState.generated.h"

UENUM(BlueprintType)
enum class EInputGlobalState : uint8 {
    Unknown,
    NoPressed,
    AnyPressed,
};

