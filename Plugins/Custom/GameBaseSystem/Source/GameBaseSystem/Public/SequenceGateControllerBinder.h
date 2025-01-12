#pragma once
#include "CoreMinimal.h"
#include "SequenceActControllerBinderBase.h"
#include "SequenceGateControllerBinder.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceGateControllerBinder : public ASequenceActControllerBinderBase {
    GENERATED_BODY()
public:
    ASequenceGateControllerBinder(const FObjectInitializer& ObjectInitializer);

};

