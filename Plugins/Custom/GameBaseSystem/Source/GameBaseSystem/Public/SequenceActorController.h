#pragma once
#include "CoreMinimal.h"
#include "SequenceActorAnimationController.h"
#include "SequenceActorController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceActorController : public ASequenceActorAnimationController {
    GENERATED_BODY()
public:
    ASequenceActorController(const FObjectInitializer& ObjectInitializer);

};

