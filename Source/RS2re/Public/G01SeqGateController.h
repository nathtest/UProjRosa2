#pragma once
#include "CoreMinimal.h"
#include "SequenceGateController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceGateController -FallbackName=SequenceGateController
#include "G01SeqGateController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqGateController : public ASequenceGateController {
    GENERATED_BODY()
public:
    AG01SeqGateController(const FObjectInitializer& ObjectInitializer);

};

