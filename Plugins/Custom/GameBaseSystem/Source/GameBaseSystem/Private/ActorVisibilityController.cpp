#include "ActorVisibilityController.h"

UActorVisibilityController::UActorVisibilityController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDefaultVisibility = true;
}

void UActorVisibilityController::SetDefaultVisibility(bool InVisibility) {
}

void UActorVisibilityController::RemoveVisibility(AActor* InRequester) {
}

void UActorVisibilityController::RemoveTargetActor(AActor* InActor) {
}

void UActorVisibilityController::OnDestroyRequester(AActor* InRequester) {
}

bool UActorVisibilityController::GetCurrentVisibility() const {
    return false;
}

void UActorVisibilityController::AddVisibility(const FActorVisibleRequest& InRequest) {
}

void UActorVisibilityController::AddTargetActor(AActor* InActor) {
}


