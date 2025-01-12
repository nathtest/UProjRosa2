#pragma once
#include "CoreMinimal.h"
#include "SequenceActorController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceActorController -FallbackName=SequenceActorController
#include "G01SeqActorController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqActorController : public ASequenceActorController {
    GENERATED_BODY()
public:
    AG01SeqActorController(const FObjectInitializer& ObjectInitializer);

};

