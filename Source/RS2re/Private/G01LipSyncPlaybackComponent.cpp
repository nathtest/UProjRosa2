#include "G01LipSyncPlaybackComponent.h"

UG01LipSyncPlaybackComponent::UG01LipSyncPlaybackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EG01LipSyncPlayType::None;
    this->State = EG01LipSyncPlayState::None;
    this->LipSyncCurve = NULL;
    this->Duration = 0.00f;
    this->CustomTime = 0.00f;
    this->CustomUpdateType = EG01LipSyncCustomUpdateType::Auto;
    this->CustomScale = 1.00f;
    this->GeneralPlaySeconds = 0.00f;
}

void UG01LipSyncPlaybackComponent::Stop() {
}

void UG01LipSyncPlaybackComponent::StartMenu(FName InVoiceID, const FG01LipsyncPlayArgs& InArgs, EG01LipSyncCustomUpdateType InCustomUpdateType) {
}

void UG01LipSyncPlaybackComponent::StartGeneral(FName InVoiceID, FG01GeneralLipPresetID InPresetID, const FG01GeneralLipsyncPresetPlayArgs& InArgs, EG01LipSyncCustomUpdateType InCustomUpdateType) {
}

void UG01LipSyncPlaybackComponent::Start(FName InVoiceID, const FG01LipsyncPlayArgs& InArgs, EG01LipSyncCustomUpdateType InCustomUpdateType) {
}

void UG01LipSyncPlaybackComponent::SetCustomTime(float InTime) {
}

void UG01LipSyncPlaybackComponent::Play() {
}

void UG01LipSyncPlaybackComponent::Pause() {
}

bool UG01LipSyncPlaybackComponent::IsPlaying() const {
    return false;
}

FLipsyncParam UG01LipSyncPlaybackComponent::GetLipsyncParam() const {
    return FLipsyncParam{};
}

void UG01LipSyncPlaybackComponent::AddCustomTime(float InDeltaTime) {
}


