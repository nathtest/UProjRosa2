#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01LightFunctionLibrary.generated.h"

class ULightComponent;

UCLASS(Blueprintable)
class RS2RE_API UG01LightFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01LightFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetShadowResolutionScale(ULightComponent* LightCompo, float InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxDrawDistance(ULightComponent* LightCompo, float InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxDistanceFadeRange(ULightComponent* LightCompo, float InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCastDynamicShadows(ULightComponent* LightCompo, bool InValue);
    
};

