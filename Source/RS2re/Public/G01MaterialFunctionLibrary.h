#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBlendMode -FallbackName=EBlendMode
#include "G01MaterialFunctionLibrary.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class RS2RE_API UG01MaterialFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01MaterialFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EBlendMode> GetBlendMode(UMaterialInterface* InMaterial);
    
};

