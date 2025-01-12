#pragma once
#include "CoreMinimal.h"
#include "EG01FXAttachType.generated.h"

UENUM(BlueprintType)
enum class EG01FXAttachType : uint8 {
    NonUse,
    AttachActorRoot,
    AttachActorSocket,
    PointActorRoot,
    PointActorSocket,
    TransformPosition,
    Transform,
    NUM,
};

