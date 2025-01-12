#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LoadScreenManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULoadScreenManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class ILoadScreenManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_LoadScreenManager_StartSynopsis();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_LoadScreenManager_OnHideScreenAtLoadCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_LoadScreenManager_OnDeactive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_LoadScreenManager_OnActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_LoadScreenManager_FinishSynopsis();
    
};

