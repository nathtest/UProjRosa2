#include "G01BattleTaskBridgeComponent.h"

UG01BattleTaskBridgeComponent::UG01BattleTaskBridgeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequenceController = NULL;
    this->TaskSourceActor = NULL;
}

void UG01BattleTaskBridgeComponent::RequestFinishSequence(bool IsImmediate) {
}

void UG01BattleTaskBridgeComponent::RequestFinishCameraSequence() {
}

bool UG01BattleTaskBridgeComponent::HasSequence() const {
    return false;
}

AG01SequenceControllerBase* UG01BattleTaskBridgeComponent::GetSequence() const {
    return NULL;
}

bool UG01BattleTaskBridgeComponent::CheckPermissionToDestroySequence_Implementation(AG01SequenceControllerBase* InSequence) const {
    return false;
}

void UG01BattleTaskBridgeComponent::CacheSequence(AG01SequenceControllerBase* InSequence, AActor* InSourceActor) {
}


