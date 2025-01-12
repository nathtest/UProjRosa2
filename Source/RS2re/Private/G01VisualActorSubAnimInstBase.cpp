#include "G01VisualActorSubAnimInstBase.h"

UG01VisualActorSubAnimInstBase::UG01VisualActorSubAnimInstBase() {
    this->bNeedWarmUp = true;
    this->WarmUpFrames = 0;
    this->DistanceThresholdScale = 1.00f;
    this->RotationThresholdScale = 1.00f;
    this->FieldPlayer = NULL;
    this->PlayerRigType = EPlayerRigCorrectionType::NONE;
}

EPlayerRigCorrectionType UG01VisualActorSubAnimInstBase::GetPlayerRigType() const {
    return EPlayerRigCorrectionType::NONE;
}


