#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01PostProcessFunctionLibrary.generated.h"

class UExponentialHeightFogComponent;

UCLASS(Blueprintable)
class RS2RE_API UG01PostProcessFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01PostProcessFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetExponentialHeightFogData(UExponentialHeightFogComponent* InComponent, float InFogDensity, float InFogHeightFalloff, float InFogHeightOffset);
    
};

