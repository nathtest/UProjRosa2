#pragma once
#include "CoreMinimal.h"
#include "SequenceActControllerBinderBase.h"
#include "SequenceEventControllerBinder.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceEventControllerBinder : public ASequenceActControllerBinderBase {
    GENERATED_BODY()
public:
    ASequenceEventControllerBinder(const FObjectInitializer& ObjectInitializer);

};

