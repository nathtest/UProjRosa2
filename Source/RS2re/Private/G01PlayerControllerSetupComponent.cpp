#include "G01PlayerControllerSetupComponent.h"

UG01PlayerControllerSetupComponent::UG01PlayerControllerSetupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsAutoSetupOnGameStart = true;
}

void UG01PlayerControllerSetupComponent::SetupDataAsset() {
}


