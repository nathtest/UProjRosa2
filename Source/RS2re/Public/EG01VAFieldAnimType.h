#pragma once
#include "CoreMinimal.h"
#include "EG01VAFieldAnimType.generated.h"

UENUM(BlueprintType)
enum class EG01VAFieldAnimType : uint8 {
    Wait,
    Walk,
    Run,
    JumpStart,
    JumpLoop,
    JumpEnd,
    Num,
};

