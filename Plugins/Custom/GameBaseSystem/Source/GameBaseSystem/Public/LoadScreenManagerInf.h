#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ELoadScreenType.h"
#include "LoadScreenManagerInf.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class ULoadScreenManagerInf : public UInterface {
    GENERATED_BODY()
};

class ILoadScreenManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LoadScreenManager_SetIsLoadingSequence(bool InIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LoadScreenManager_ReserveLoadScreenType(ELoadScreenType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LoadScreenManager_RemoveWaitDeactivate(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_LoadScreenManager_IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LoadScreenManager_InputDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LoadScreenManager_AddWaitDeactivate(UObject* InObject);
    
};

