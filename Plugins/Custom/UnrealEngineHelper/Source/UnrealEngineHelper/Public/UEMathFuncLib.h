#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UEMathFuncLib.generated.h"

UCLASS(Blueprintable)
class UNREALENGINEHELPER_API UUEMathFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUEMathFuncLib();

    UFUNCTION(BlueprintCallable)
    static int32 Func_BitShiftRight(int32 InValue, int32 InShiftCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 Func_BitShiftLeft(int32 InValue, int32 InShiftCount);
    
};

