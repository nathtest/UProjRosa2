#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01CachedScalabilityFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01CachedScalabilityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01CachedScalabilityFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetViewDistanceScale(float InViewDistanceScale);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFloatToSanitizeString(float InValue);
    
};

