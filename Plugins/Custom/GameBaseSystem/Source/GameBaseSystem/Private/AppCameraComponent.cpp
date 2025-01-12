#include "AppCameraComponent.h"

UAppCameraComponent::UAppCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAppCameraComponent::SetCameraID(FName InCameraID) {
}

FName UAppCameraComponent::GetCameraID() const {
    return NAME_None;
}


