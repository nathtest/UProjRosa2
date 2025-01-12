#include "G01BattleVoicePlayerComponent.h"

UG01BattleVoicePlayerComponent::UG01BattleVoicePlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoiceManagerAccessor = NULL;
    this->LipSyncManagerAccessor = NULL;
    this->VoiceCtrl = NULL;
    this->VisualActorOwner = NULL;
    this->LastTriggerType = EG01BattleVoiceTriggerType::Invalid;
}

void UG01BattleVoicePlayerComponent::TryProcessAnimKey(FName InKey, bool& OutIsProcess, bool& OutIsPlay) {
}

void UG01BattleVoicePlayerComponent::StopVoice() {
}

void UG01BattleVoicePlayerComponent::StopReactionVoice() {
}

void UG01BattleVoicePlayerComponent::StopNormalVoice() {
}

void UG01BattleVoicePlayerComponent::SetupVoice(FName InVoiceDataId, const FG01BattleVoiceTableRow& InVoiceTableRow) {
}

void UG01BattleVoicePlayerComponent::SetController(AG01BattleVoiceController* InVoiceCtrl) {
}

void UG01BattleVoicePlayerComponent::PlayVoice3D(EG01BattleVoiceTriggerType InTrigger) {
}

void UG01BattleVoicePlayerComponent::PlayVoice2D(EG01BattleVoiceTriggerType InTrigger) {
}

void UG01BattleVoicePlayerComponent::LotteryTriggerByWeight(const TArray<EG01BattleVoiceTriggerType>& InTriggerList, const TArray<int32>& InWeightList, bool InExcludeEmpty, bool& OutSuccess, int32& OutIndex) {
}

void UG01BattleVoicePlayerComponent::IsPlayingVoice(bool& OutIsPlaying) {
}

void UG01BattleVoicePlayerComponent::IsPlayingReactionVoice(bool& OutIsPlaying) {
}

void UG01BattleVoicePlayerComponent::IsPlayingNormalVoice(bool& OutIsPlaying) {
}

void UG01BattleVoicePlayerComponent::GetLastTriggerType(EG01BattleVoiceTriggerType& OutTrigger) {
}


