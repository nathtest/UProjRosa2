#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimInstanceUtilityFuncLib.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class UNREALENGINEHELPER_API UAnimInstanceUtilityFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimInstanceUtilityFuncLib();

    UFUNCTION(BlueprintCallable)
    static void Func_StopAllMontage(UAnimInstance* InAnimInstance, float InBlendOutTime);
    
};

