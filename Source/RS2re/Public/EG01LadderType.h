#pragma once
#include "CoreMinimal.h"
#include "EG01LadderType.generated.h"

UENUM(BlueprintType)
enum class EG01LadderType : uint8 {
    None,
    Iron,
    Wood,
    Rope,
    Ivy,
    NUM,
};

