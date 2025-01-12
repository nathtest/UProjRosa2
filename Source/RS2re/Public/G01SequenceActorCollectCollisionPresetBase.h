#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "G01SequenceActorCollectCollisionPresetBase.generated.h"

UCLASS(Abstract, Blueprintable)
class RS2RE_API AG01SequenceActorCollectCollisionPresetBase : public AAppActor {
    GENERATED_BODY()
public:
    AG01SequenceActorCollectCollisionPresetBase(const FObjectInitializer& ObjectInitializer);

};

