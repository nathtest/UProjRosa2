#include "InteractSenderComponent.h"

UInteractSenderComponent::UInteractSenderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractCategoryInfoTable = NULL;
}

void UInteractSenderComponent::SendInteract() {
}

void UInteractSenderComponent::IsExecutableInteract(bool& OutIsExecutable) const {
}

FInteractColliderTag UInteractSenderComponent::GetInteractTargetTag() const {
    return FInteractColliderTag{};
}

AActor* UInteractSenderComponent::GetInteractTarget() const {
    return NULL;
}


