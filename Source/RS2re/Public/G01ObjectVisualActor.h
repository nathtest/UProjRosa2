#pragma once
#include "CoreMinimal.h"
#include "ObjectVisualActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObjectVisualActor -FallbackName=ObjectVisualActor
#include "G01VisualActorInf.h"
#include "G01ObjectVisualActor.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01ObjectVisualActor : public AObjectVisualActor, public IG01VisualActorInf {
    GENERATED_BODY()
public:
    AG01ObjectVisualActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

