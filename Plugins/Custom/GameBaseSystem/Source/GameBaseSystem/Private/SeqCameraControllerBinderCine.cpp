#include "SeqCameraControllerBinderCine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CineCameraComponent -FallbackName=CineCameraComponent

ASeqCameraControllerBinderCine::ASeqCameraControllerBinderCine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MCineCameraComponent = CreateDefaultSubobject<UCineCameraComponent>(TEXT("CineCameraComponent"));
    //this->MCineCameraComponent->SetupAttachment(MSpringArmComponent);
}


