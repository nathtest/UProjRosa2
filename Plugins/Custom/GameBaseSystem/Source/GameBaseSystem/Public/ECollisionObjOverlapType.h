#pragma once
#include "CoreMinimal.h"
#include "ECollisionObjOverlapType.generated.h"

UENUM(BlueprintType)
enum class ECollisionObjOverlapType : uint8 {
    BeginOverlap,
    EndOverlap,
};

