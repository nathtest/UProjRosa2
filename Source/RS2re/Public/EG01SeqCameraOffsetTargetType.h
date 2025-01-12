#pragma once
#include "CoreMinimal.h"
#include "EG01SeqCameraOffsetTargetType.generated.h"

UENUM(BlueprintType)
enum class EG01SeqCameraOffsetTargetType : uint8 {
    OriginActor,
    ActorBinder,
    SlotIndex,
};

