#include "SplineBase_StandardAISystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "Components/SplineComponent.h"

ASplineBase_StandardAISystem::ASplineBase_StandardAISystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->MSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->MSplineComponent->SetupAttachment(RootComponent);
}
