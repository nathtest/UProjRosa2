#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01SceneComponentFunctionLibrary.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class RS2RE_API UG01SceneComponentFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01SceneComponentFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateSceneComponentBounds(USceneComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigation(USceneComponent* InComponent, bool InFlag);
    
};

