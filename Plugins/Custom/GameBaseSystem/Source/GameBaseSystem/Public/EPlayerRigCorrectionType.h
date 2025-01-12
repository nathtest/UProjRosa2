#pragma once
#include "CoreMinimal.h"
#include "EPlayerRigCorrectionType.generated.h"

UENUM(BlueprintType)
enum class EPlayerRigCorrectionType : uint8 {
    NONE,
    CROUCH,
    LEDGE,
    NARROW,
    LADDER,
};

