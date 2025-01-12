#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ScreenTransitionManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UScreenTransitionManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IScreenTransitionManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ScreenTransitionManager_OnTransitionOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ScreenTransitionManager_OnTransitionIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ScreenTransitionManager_OnHideScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ScreenTransitionManager_OnDeactive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ScreenTransitionManager_OnActive();
    
};

