#pragma once
#include "CoreMinimal.h"
#include "EEventEndResult.generated.h"

UENUM(BlueprintType)
enum class EEventEndResult : uint8 {
    Success,
    Failed,
    None,
};

