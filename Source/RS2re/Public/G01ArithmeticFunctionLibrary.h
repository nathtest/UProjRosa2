#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01ArithmeticFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ArithmeticFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01ArithmeticFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static float IntermittentChaosRange(float InSourceRand, float InChaosRange);
    
    UFUNCTION(BlueprintCallable)
    static float IntermittentChaosF(float InRand);
    
    UFUNCTION(BlueprintCallable)
    static float IntermittentChaos();
    
    UFUNCTION(BlueprintCallable)
    static float ConvergenceInterpolation(const float InTargetValue, const float InCurrentValue, const float InInterpolationRate);
    
};

