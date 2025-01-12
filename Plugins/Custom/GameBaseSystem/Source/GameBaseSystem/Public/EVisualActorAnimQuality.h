#pragma once
#include "CoreMinimal.h"
#include "EVisualActorAnimQuality.generated.h"

UENUM(BlueprintType)
enum class EVisualActorAnimQuality : uint8 {
    None,
    Highest,
    High,
    Low,
    Num,
};

