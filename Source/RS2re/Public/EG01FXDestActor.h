#pragma once
#include "CoreMinimal.h"
#include "EG01FXDestActor.generated.h"

UENUM(BlueprintType)
enum class EG01FXDestActor : uint8 {
    NonActor,
    BaseActor,
    TargetActor,
    NUM,
};

