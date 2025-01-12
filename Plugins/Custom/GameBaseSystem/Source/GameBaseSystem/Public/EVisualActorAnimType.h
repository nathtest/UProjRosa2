#pragma once
#include "CoreMinimal.h"
#include "EVisualActorAnimType.generated.h"

UENUM(BlueprintType)
enum class EVisualActorAnimType : uint8 {
    None,
    Common,
    Figure,
    Variation,
    Unit,
    Num,
};

