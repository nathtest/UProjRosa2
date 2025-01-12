#include "LookTargetPositionComponent.h"

ULookTargetPositionComponent::ULookTargetPositionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MTargetSkeletalMeshComponent = NULL;
    this->MTargetSocket = NULL;
}

void ULookTargetPositionComponent::SetBindSocketName(FName InSocketName) {
}

void ULookTargetPositionComponent::SetBindSkeletalMeshComponent(const USkeletalMeshComponent* InBindTarget) {
}

FVector ULookTargetPositionComponent::GetLookPosition() const {
    return FVector{};
}


