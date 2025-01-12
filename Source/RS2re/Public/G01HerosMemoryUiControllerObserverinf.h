#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01HerosMemoryUiControllerObserverinf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01HerosMemoryUiControllerObserverinf : public UInterface {
    GENERATED_BODY()
};

class IG01HerosMemoryUiControllerObserverinf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HerosMemoryUiController_SelectState(bool OutIsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HerosMemoryUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HerosMemoryUiController_FinishedOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HerosMemoryUiController_Close();
    
};

