#pragma once
#include "CoreMinimal.h"
#include "SequencerPlayEvent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequencerPlayEvent -FallbackName=SequencerPlayEvent
#include "G01SequencerPlayEvent.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SequencerPlayEvent : public ASequencerPlayEvent {
    GENERATED_BODY()
public:
    AG01SequencerPlayEvent(const FObjectInitializer& ObjectInitializer);

};

