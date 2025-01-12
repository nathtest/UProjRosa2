#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "Templates/SubclassOf.h"
#include "NavigationSystem.h"
#include "ExtensionNavigationSystem_StandardAISystem.generated.h"

class AActor;
class UNavigationQueryFilter;
class UObject;

UCLASS(Blueprintable, NonTransient)
class STANDARDAISYSTEM_API UExtensionNavigationSystem_StandardAISystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    UExtensionNavigationSystem_StandardAISystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetNearestTargetPolyLocation(UObject* WorldContextObject, const FVector& StartLocation, const FVector& EndLocation, FVector& OutLocation, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector GetNearestPolyCenterLocation(UObject* WorldContextObject, const FVector& StartLocation, const FVector& EndLocation, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
};

