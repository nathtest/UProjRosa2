#include "G01PlayerVehicleSoundComponent.h"

UG01PlayerVehicleSoundComponent::UG01PlayerVehicleSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttenuationAsset = NULL;
    this->IsAttach = true;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->StopSoundSpeed = 1.00f;
    this->SwitchFadeInTime = 0.00f;
    this->SwitchFadeOutTime = 0.00f;
    this->SwitchSoundTime = 0.50f;
}

void UG01PlayerVehicleSoundComponent::UpdateSound(float InDeltaTime, float InAxisX, float InAxisY, bool InIsRun) {
}

void UG01PlayerVehicleSoundComponent::StopSound(float InIsFadeOutTime) {
}

void UG01PlayerVehicleSoundComponent::PauseSound(bool InIsPause) {
}


