#pragma once
#include "CoreMinimal.h"
#include "EUiControllerType.generated.h"

UENUM(BlueprintType)
enum class EUiControllerType : uint8 {
    NONE,
    SINGLE,
    MULTIPLE,
    CHILD,
    NUM,
};

