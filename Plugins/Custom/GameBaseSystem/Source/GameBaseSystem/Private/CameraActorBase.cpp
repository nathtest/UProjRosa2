#include "CameraActorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

ACameraActorBase::ACameraActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MSprintArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    this->MSpringArmInterpAlpha = 0.50f;
    this->MSprintArmComponent->SetupAttachment(RootComponent);
}

void ACameraActorBase::SetSpringArmLength(float InLength) {
}

USpringArmComponent* ACameraActorBase::GetSpringArmComponent() {
    return NULL;
}



void ACameraActorBase::AddSpringArmLength(float InAddValue) {
}


