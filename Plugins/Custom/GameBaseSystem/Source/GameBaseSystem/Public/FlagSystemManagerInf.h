#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "FlagAccessParam.h"
#include "FlagSystemManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFlagSystemManagerInf : public UInterface {
    GENERATED_BODY()
};

class IFlagSystemManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_FlagSystemManager_SetFlag(const FFlagAccessParam& InAccessParam, bool InSetValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_FlagSystemManager_ImmediateUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_FlagSystemManager_GetFlag(const FFlagAccessParam& InAccessParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_FlagSystemManager_CreateFlagAccessParam(const FName& InFlagID, bool& OutIsValid, FFlagAccessParam& OutAccessParam);
    
};

