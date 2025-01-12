#pragma once
#include "CoreMinimal.h"
#include "SequenceActorAnimationController.h"
#include "SequenceActorSlotController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceActorSlotController : public ASequenceActorAnimationController {
    GENERATED_BODY()
public:
    ASequenceActorSlotController(const FObjectInitializer& ObjectInitializer);

};

