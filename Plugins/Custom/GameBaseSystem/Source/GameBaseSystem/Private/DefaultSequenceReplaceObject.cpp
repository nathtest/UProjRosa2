#include "DefaultSequenceReplaceObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ADefaultSequenceReplaceObject::ADefaultSequenceReplaceObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MVisualActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("VisualActor"));
    this->MVisualActor->SetupAttachment(RootComponent);
}


