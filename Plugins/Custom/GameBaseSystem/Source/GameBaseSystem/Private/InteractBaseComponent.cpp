#include "InteractBaseComponent.h"

UInteractBaseComponent::UInteractBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEnableVisibleControle = true;
}

void UInteractBaseComponent::SetEnabled(bool InIsEnabled) {
}

void UInteractBaseComponent::SetCollisionVisiblity(EInteractCollisionVisiblityType InVisiblityType) {
}

void UInteractBaseComponent::OnEndOverlapEvent(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex) {
}

void UInteractBaseComponent::OnBeginOverlapEvent(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex, bool InIsFromSweep, const FHitResult& InSweepResult) {
}

bool UInteractBaseComponent::IsEnabled() const {
    return false;
}


