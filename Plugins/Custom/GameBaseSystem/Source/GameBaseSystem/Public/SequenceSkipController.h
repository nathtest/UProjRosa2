#pragma once
#include "CoreMinimal.h"
#include "SequenceActionControllerBase.h"
#include "SequenceSkipController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceSkipController : public ASequenceActionControllerBase {
    GENERATED_BODY()
public:
    ASequenceSkipController(const FObjectInitializer& ObjectInitializer);

};

