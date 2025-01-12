#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FlagAccessParam.h"
#include "FlagSystemFuncLib.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UFlagSystemFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFlagSystemFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Func_AccessParamToString(const FFlagAccessParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Func_AccessParamToName(const FFlagAccessParam& InParam);
    
};

