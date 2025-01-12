#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ThroneMenuUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ThroneMenuUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01ThroneMenuUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ThroneMenuUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ThroneMenuUiController_FinishedOpenAbdication();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ThroneMenuUiController_FinishedOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ThroneMenuUiController_Close(bool InIsPlayerVisible);
    
};

