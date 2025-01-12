#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01AIFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01AIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01AIFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RoundDegree360(const float InDegreeSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RoundDegree180(const float InDegreeSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator InterporateRotator(const FRotator InRotatorSource, const FRotator InRotatorDestination, const FVector InVectorDegreeLimit, const float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float InterporateDegree(const float InDegreeSource, const float InDegreeDestination, const float InDegreeLimit, const float InRate);
    
};

