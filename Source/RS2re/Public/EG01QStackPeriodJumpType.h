#pragma once
#include "CoreMinimal.h"
#include "EG01QStackPeriodJumpType.generated.h"

UENUM(BlueprintType)
enum class EG01QStackPeriodJumpType : uint8 {
    NotPeriodJump,
    AllowPeriodJump,
};

