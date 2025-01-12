#pragma once
#include "CoreMinimal.h"
#include "SequenceGateControllerBinder.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceGateControllerBinder -FallbackName=SequenceGateControllerBinder
#include "G01SeqGateControllerBinder.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqGateControllerBinder : public ASequenceGateControllerBinder {
    GENERATED_BODY()
public:
    AG01SeqGateControllerBinder(const FObjectInitializer& ObjectInitializer);

};

