#pragma once
#include "CoreMinimal.h"
#include "SequenceActorSlotController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceActorSlotController -FallbackName=SequenceActorSlotController
#include "G01SeqActorSlotController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqActorSlotController : public ASequenceActorSlotController {
    GENERATED_BODY()
public:
    AG01SeqActorSlotController(const FObjectInitializer& ObjectInitializer);

};

