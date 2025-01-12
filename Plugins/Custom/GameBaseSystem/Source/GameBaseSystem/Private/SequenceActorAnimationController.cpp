#include "SequenceActorAnimationController.h"

ASequenceActorAnimationController::ASequenceActorAnimationController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequenceSettings = NULL;
    this->MLastAnimBinder = NULL;
    this->MFrameJumpBlendTime = -1.00f;
}


