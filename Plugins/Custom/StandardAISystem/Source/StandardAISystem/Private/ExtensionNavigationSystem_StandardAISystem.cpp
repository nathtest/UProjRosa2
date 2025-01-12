#include "ExtensionNavigationSystem_StandardAISystem.h"
#include "Templates/SubclassOf.h"

UExtensionNavigationSystem_StandardAISystem::UExtensionNavigationSystem_StandardAISystem() {
    this->SupportedAgents.AddDefaulted(5);
}

bool UExtensionNavigationSystem_StandardAISystem::GetNearestTargetPolyLocation(UObject* WorldContextObject, const FVector& StartLocation, const FVector& EndLocation, FVector& OutLocation, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

FVector UExtensionNavigationSystem_StandardAISystem::GetNearestPolyCenterLocation(UObject* WorldContextObject, const FVector& StartLocation, const FVector& EndLocation, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return FVector{};
}


