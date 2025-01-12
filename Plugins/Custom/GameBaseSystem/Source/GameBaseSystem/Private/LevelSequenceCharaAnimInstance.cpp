#include "LevelSequenceCharaAnimInstance.h"

ULevelSequenceCharaAnimInstance::ULevelSequenceCharaAnimInstance() {
    this->MSeqAnimMode = ESeqAnimInstMode::Sequence;
    this->MOldAnimInst = NULL;
    this->MPhysicsEaseInTime = 3.00f;
    this->MCurrentPhysicsEaseInTime = 0.00f;
}

void ULevelSequenceCharaAnimInstance::StopAnimation() {
}

void ULevelSequenceCharaAnimInstance::StartAnimation(const FAnimBlendPlayParam& InAnimBlendParam) {
}

void ULevelSequenceCharaAnimInstance::SetSeqAnimMode(ESeqAnimInstMode InMode) {
}

void ULevelSequenceCharaAnimInstance::PlayAnimation() {
}

void ULevelSequenceCharaAnimInstance::PauseAnimation() {
}


bool ULevelSequenceCharaAnimInstance::IsAnyAnimationPlaying() const {
    return false;
}

FAnimBlendPlayParam ULevelSequenceCharaAnimInstance::GetActiveAnimParam() const {
    return FAnimBlendPlayParam{};
}


