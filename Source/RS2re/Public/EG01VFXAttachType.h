#pragma once
#include "CoreMinimal.h"
#include "EG01VFXAttachType.generated.h"

UENUM(BlueprintType)
enum class EG01VFXAttachType : uint8 {
    NonUse,
    AttachActorRoot,
    AttachActorSocket,
    PointActorRoot,
    PointActorSocket,
    TransformPosition,
    Transform,
    AttachCameraRoot,
    SkeletalMeshNodeLocation,
    NUM,
};

