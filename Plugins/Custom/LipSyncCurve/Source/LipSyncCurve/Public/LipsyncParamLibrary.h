#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LipsyncParam.h"
#include "LipsyncParamLibrary.generated.h"

UCLASS(Blueprintable)
class LIPSYNCCURVE_API ULipsyncParamLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULipsyncParamLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxValue(const FLipsyncParam& Object);
    
};

