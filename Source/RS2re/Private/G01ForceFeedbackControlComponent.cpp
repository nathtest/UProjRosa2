#include "G01ForceFeedbackControlComponent.h"

UG01ForceFeedbackControlComponent::UG01ForceFeedbackControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MForceFeedbackEffect = NULL;
    this->MIsLoop = false;
    this->MIsPlaying = false;
    this->MIsPausing = false;
}

void UG01ForceFeedbackControlComponent::Stop_Implementation() {
}

void UG01ForceFeedbackControlComponent::Resume_Implementation() {
}

void UG01ForceFeedbackControlComponent::Play_Implementation(UForceFeedbackEffect* InEffect, bool InIsLoop, FName InTag) {
}

void UG01ForceFeedbackControlComponent::Pause_Implementation() {
}

void UG01ForceFeedbackControlComponent::CheckBattleMainPhaseType_Implementation(EG01BattleMainPhaseType InBattleMainPhaseType, ECheckBattleMainPhaseEnum& Branches) {
}


