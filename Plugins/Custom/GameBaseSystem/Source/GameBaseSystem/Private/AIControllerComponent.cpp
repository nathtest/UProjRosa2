#include "AIControllerComponent.h"

UAIControllerComponent::UAIControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MController = NULL;
}

void UAIControllerComponent::SetAIStateID(EAIState InAiState) {
}

bool UAIControllerComponent::IsAIControlled() const {
    return false;
}

void UAIControllerComponent::InitializeAIComponent() {
}

void UAIControllerComponent::EraseAIController() {
}

void UAIControllerComponent::ChangeAIController() {
}


