#pragma once
#include "CoreMinimal.h"
#include "EEventInteractTagCheck.generated.h"

UENUM(BlueprintType)
enum class EEventInteractTagCheck : uint8 {
    IsSame,
    IsDifferent,
    NoExecution,
};

