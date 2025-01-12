#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01DestinationInfo.h"
#include "G01DestinationFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DestinationFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01DestinationFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool NotEqual_DestinationData(const FG01DestinationInfo& InA, const FG01DestinationInfo& InB);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValid(const FG01DestinationInfo& InData);
    
    UFUNCTION(BlueprintCallable)
    static bool EqualEqual_DestinationData(const FG01DestinationInfo& InA, const FG01DestinationInfo& InB);
    
};

