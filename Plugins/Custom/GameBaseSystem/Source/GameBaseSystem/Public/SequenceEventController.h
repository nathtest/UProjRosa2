#pragma once
#include "CoreMinimal.h"
#include "SequenceActionControllerBase.h"
#include "SequenceEventController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceEventController : public ASequenceActionControllerBase {
    GENERATED_BODY()
public:
    ASequenceEventController(const FObjectInitializer& ObjectInitializer);

};

