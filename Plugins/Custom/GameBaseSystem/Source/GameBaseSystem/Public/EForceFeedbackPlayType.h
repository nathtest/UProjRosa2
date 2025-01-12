#pragma once
#include "CoreMinimal.h"
#include "EForceFeedbackPlayType.generated.h"

UENUM(BlueprintType)
enum class EForceFeedbackPlayType : uint8 {
    None,
    Asset,
    Dynamic,
};

