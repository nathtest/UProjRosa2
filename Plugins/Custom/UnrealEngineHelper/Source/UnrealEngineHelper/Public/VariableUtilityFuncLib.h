#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VariableUtilityFuncLib.generated.h"

UCLASS(Blueprintable)
class UNREALENGINEHELPER_API UVariableUtilityFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVariableUtilityFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Func_RotatorToQuaternion(const FRotator& InRotator);
    
    UFUNCTION(BlueprintCallable)
    static FString Func_GetFTextSourceString(const FText& InText);
    
};

