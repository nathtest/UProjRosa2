#include "SeqCameraControllerBinderNormal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent

ASeqCameraControllerBinderNormal::ASeqCameraControllerBinderNormal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->MCameraComponent->SetupAttachment(MSpringArmComponent);
}


