#include "G01NavigationSystem.h"
#include "Templates/SubclassOf.h"

UG01NavigationSystem::UG01NavigationSystem() {
    this->SupportedAgents.AddDefaulted(5);
}

bool UG01NavigationSystem::CheckPathPoint(UObject* WorldContextObject, const UNavigationPath* InNavigationPath, AActor* InActor, TArray<FVector>& OutPathPoint, TSubclassOf<UNavigationQueryFilter> InFilterClass) {
    return false;
}


