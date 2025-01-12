#pragma once
#include "CoreMinimal.h"
#include "EG01FootStepType.generated.h"

UENUM(BlueprintType)
enum class EG01FootStepType : uint8 {
    None,
    Walk,
    Run,
    Jump,
    Landing,
    NUM,
};

