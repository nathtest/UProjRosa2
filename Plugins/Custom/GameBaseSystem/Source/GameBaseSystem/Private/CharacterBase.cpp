#include "CharacterBase.h"

ACharacterBase::ACharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMyAIControllerCompo = NULL;
    this->MIsSetAIControllerCompo = false;
    this->MAIState = EAIState::AI_IDLE;
    this->MAIBehaviorTree = NULL;
    this->MIsBeginAI = false;
    this->LookTypeBlendTime = 0.25f;
    this->MIsDebugConstructionProcess = false;
    this->MIsDetachAiControllerBySequence = false;
}

void ACharacterBase::SetupAttachment(TArray<FName> InAttachmentKeyList) {
}

void ACharacterBase::SetupAiController() {
}

void ACharacterBase::SetRotationSpeed(float InMoveSpeed) {
}

void ACharacterBase::SetMoveSpeed(float InMoveSpeed) {
}

float ACharacterBase::GetRotationSpeed(EAISpeed InSpeedID) const {
    return 0.0f;
}

float ACharacterBase::GetMoveSpeed(EAISpeed InSpeedID) {
    return 0.0f;
}


void ACharacterBase::ActiveDebugConstructionProcess() {
}


