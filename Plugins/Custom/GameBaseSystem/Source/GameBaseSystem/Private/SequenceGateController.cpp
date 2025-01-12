#include "SequenceGateController.h"

ASequenceGateController::ASequenceGateController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckTrackRowIndex = -1;
    this->CurrentGateIndex = -1;
    this->AnimBlendTime = 0.25f;
}

void ASequenceGateController::SetGateSkipBlendSeconds(float InAnimBlendTime) {
}


