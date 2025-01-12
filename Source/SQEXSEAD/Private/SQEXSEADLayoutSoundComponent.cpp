#include "SQEXSEADLayoutSoundComponent.h"

USQEXSEADLayoutSoundComponent::USQEXSEADLayoutSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
}

void USQEXSEADLayoutSoundComponent::Stop() {
}

void USQEXSEADLayoutSoundComponent::SetVolumeMultiplier(float NewVolumeMultiplier, float FadeTimeDuration) {
}

void USQEXSEADLayoutSoundComponent::SetPitchMultiplier(float NewPitchMultiplier, float FadeTimeDuration) {
}

void USQEXSEADLayoutSoundComponent::SetPaused(bool bPause, float FadeTimeDuration) {
}

void USQEXSEADLayoutSoundComponent::Play() {
}

bool USQEXSEADLayoutSoundComponent::IsPlaying() {
    return false;
}

bool USQEXSEADLayoutSoundComponent::IsAudible() {
    return false;
}


