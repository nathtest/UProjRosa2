#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01TextFuncLib.generated.h"

class UFont;

UCLASS(Blueprintable)
class RS2RE_API UG01TextFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01TextFuncLib();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> Func_CompositeFontNames(UFont* InFont);
    
};

