#pragma once
#include "CoreMinimal.h"
#include "SequenceActionControllerBase.h"
#include "SequenceCameraController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceCameraController : public ASequenceActionControllerBase {
    GENERATED_BODY()
public:
    ASequenceCameraController(const FObjectInitializer& ObjectInitializer);

};

