#pragma once
#include "CoreMinimal.h"
#include "SequencerPlayCollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequencerPlayCollisionObjectBase -FallbackName=SequencerPlayCollisionObjectBase
#include "G01SequencerPlayCollisionObject.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SequencerPlayCollisionObject : public ASequencerPlayCollisionObjectBase {
    GENERATED_BODY()
public:
    AG01SequencerPlayCollisionObject(const FObjectInitializer& ObjectInitializer);

};

