#include "AIControllerBase.h"

AAIControllerBase::AAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMoveCompo = NULL;
    this->MCharacter = NULL;
    this->MWarpTarget = NULL;
    this->MAIState = EAIState::AI_IDLE;
    this->MJumpLineDistance = 0.00f;
}

void AAIControllerBase::SetAIState(EAIState InState) {
}

void AAIControllerBase::InitializeAIController_Implementation() {
}

float AAIControllerBase::GetSpeedByID(EAISpeed InID) {
    return 0.0f;
}

float AAIControllerBase::GetRotationSpeedByID(EAISpeed InID) const {
    return 0.0f;
}


EAIState AAIControllerBase::GetAIState() {
    return EAIState::AI_IDLE;
}


