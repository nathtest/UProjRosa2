#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ExtensionNavigationSystem_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=ExtensionNavigationSystem_StandardAISystem -FallbackName=ExtensionNavigationSystem_StandardAISystem
#include "Templates/SubclassOf.h"
#include "G01NavigationSystem.generated.h"

class AActor;
class UNavigationPath;
class UNavigationQueryFilter;
class UObject;

UCLASS(Blueprintable, NonTransient)
class RS2RE_API UG01NavigationSystem : public UExtensionNavigationSystem_StandardAISystem {
    GENERATED_BODY()
public:
    UG01NavigationSystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckPathPoint(UObject* WorldContextObject, const UNavigationPath* InNavigationPath, AActor* InActor, TArray<FVector>& OutPathPoint, TSubclassOf<UNavigationQueryFilter> InFilterClass);
    
};

