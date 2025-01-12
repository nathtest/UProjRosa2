#pragma once
#include "CoreMinimal.h"
#include "SequenceTrackActorBase.h"
#include "SequenceCameraCalculator.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceCameraCalculator : public ASequenceTrackActorBase {
    GENERATED_BODY()
public:
    ASequenceCameraCalculator(const FObjectInitializer& ObjectInitializer);

};

