#include "SequenceActionControllerBase.h"

ASequenceActionControllerBase::ASequenceActionControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MIsActive = false;
    this->MOwnerSequenceController = NULL;
}

UCustomLevelSequencePlayer* ASequenceActionControllerBase::GetSequencePlayer() const {
    return NULL;
}

ASequenceController* ASequenceActionControllerBase::GetSequenceController() const {
    return NULL;
}

float ASequenceActionControllerBase::GetNowSeconds() const {
    return 0.0f;
}

FFrameNumber ASequenceActionControllerBase::GetNowFrame() const {
    return FFrameNumber{};
}

void ASequenceActionControllerBase::Cmd_SA_RequestEndSequence() {
}

void ASequenceActionControllerBase::Cmd_SA_PlaySequence() {
}

void ASequenceActionControllerBase::Cmd_SA_PauseSequence(bool InIsPauseCharaAnimation) {
}

void ASequenceActionControllerBase::Cmd_SA_EndSequence(float InDelaySeconds) {
}


