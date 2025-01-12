#include "VisualActorLoaderBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AVisualActorLoaderBase::AVisualActorLoaderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MVisualActor = NULL;
    this->WaitRequestPlayAnimationList = NULL;
    this->MGeneratedVisibility = false;
}

void AVisualActorLoaderBase::SetVisualActor(AVisualActor* InVisualActor) {
}

void AVisualActorLoaderBase::SetGeneratedVisibility(bool InVisibility) {
}

bool AVisualActorLoaderBase::LoadVisualActorGenerate(TSoftClassPtr<AVisualActor> InLoadClass) {
    return false;
}

bool AVisualActorLoaderBase::LoadVisualActor(TSoftClassPtr<AVisualActor> InLoadClass) {
    return false;
}

AVisualActor* AVisualActorLoaderBase::GetVisualActor() const {
    return NULL;
}

void AVisualActorLoaderBase::DeleteVisualActor() {
}

void AVisualActorLoaderBase::CancelLoad() {
}


