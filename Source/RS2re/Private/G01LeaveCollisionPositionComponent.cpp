#include "G01LeaveCollisionPositionComponent.h"

UG01LeaveCollisionPositionComponent::UG01LeaveCollisionPositionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FVector UG01LeaveCollisionPositionComponent::GetNearMovePoint(const FVector& InLocation) {
    return FVector{};
}


