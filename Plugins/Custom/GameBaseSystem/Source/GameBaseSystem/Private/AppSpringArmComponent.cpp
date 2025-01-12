#include "AppSpringArmComponent.h"

UAppSpringArmComponent::UAppSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReturnSpeedAfterHit = 1.00f;
    this->ReturnLagAfterHit = 0.00f;
    this->DisableCustomCamra = false;
    this->ObstacleProbeChannel = ECC_WorldStatic;
    this->ObstacleProbeSize = 24.00f;
    this->HitIgnoreRange = 10.00f;
}

void UAppSpringArmComponent::PausedChildCamera(bool InPaused) {
}

void UAppSpringArmComponent::ForceUpdate(float InDeltaTime) {
}


