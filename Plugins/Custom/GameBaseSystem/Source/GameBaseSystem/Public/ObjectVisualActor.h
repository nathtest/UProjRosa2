#pragma once
#include "CoreMinimal.h"
#include "VisualActor.h"
#include "VisualActorObjectInf.h"
#include "ObjectVisualActor.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AObjectVisualActor : public AVisualActor, public IVisualActorObjectInf {
    GENERATED_BODY()
public:
    AObjectVisualActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

