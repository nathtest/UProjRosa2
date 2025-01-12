#include "LipsyncPlaybackComponent.h"

ULipsyncPlaybackComponent::ULipsyncPlaybackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoiceAudio = NULL;
    this->CurveLipsync = NULL;
}

void ULipsyncPlaybackComponent::Stop() {
}

void ULipsyncPlaybackComponent::StartLipsync(UAudioComponent* InAudioComponent, UCurveLipsync* InCurve) {
}

void ULipsyncPlaybackComponent::OnUpdateLipsyncValue_Implementation(float PlaybackTime, const FLipsyncParam& Visemes) {
}


