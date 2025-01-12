#include "G01BattleSequencePlayComponent.h"

UG01BattleSequencePlayComponent::UG01BattleSequencePlayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableExtendPlayback = false;
    this->EnableRegisterOriginalEndEvent = false;
    this->CurrentSeqCtrl = NULL;
    this->DelayHitEndOffset = 0;
    this->TargetTransformYaw = 0.00f;
}

void UG01BattleSequencePlayComponent::UnregisterPlaybackOffset(FName InUniqueID) {
}

void UG01BattleSequencePlayComponent::SetTargetTransformOverrideRotateYaw(float InYaw) {
}

void UG01BattleSequencePlayComponent::SetTargetTransformOverride(int32 InTargetNo, const FTransform& InTransform) {
}

void UG01BattleSequencePlayComponent::SetSequenceCtrl(AG01SequenceControllerBase* InSeqCtrl) {
}

void UG01BattleSequencePlayComponent::SetRepeaterEventOffset(FName InKey, int32 InBeginOffset, int32 InEndOffset) {
}

void UG01BattleSequencePlayComponent::SetRepeaterEventAbsolute(FName InKey, int32 InBeginFrame, int32 InEndFrame) {
}

void UG01BattleSequencePlayComponent::SetLinkInterpStartOffset(int32 InStartOffset) {
}

void UG01BattleSequencePlayComponent::SetLinkInterpEndOffset(int32 InEndOffset) {
}

void UG01BattleSequencePlayComponent::SetEnableCameraCut(bool InIsEnable) {
}

void UG01BattleSequencePlayComponent::SetDelayHitEndOffset(int32 InEndOffset) {
}

void UG01BattleSequencePlayComponent::RegisterPlaybackOffset(FName InUniqueID, int32 InStartOffset, int32 InEndOffset) {
}

void UG01BattleSequencePlayComponent::GetPlaybackOffset(int32& OutStartOffset, int32& OutEndOffset) {
}

void UG01BattleSequencePlayComponent::GetCurrentPlayTime(int32& OutPlayTime) {
}

void UG01BattleSequencePlayComponent::GetActualPlaybackRange(int32& OutLower, int32& OutUpper) {
}

void UG01BattleSequencePlayComponent::ClearPlaybackOffset() {
}

void UG01BattleSequencePlayComponent::ApplyPlaybackOffset() {
}


