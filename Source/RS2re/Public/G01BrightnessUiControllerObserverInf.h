#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BrightnessUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BrightnessUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BrightnessUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BrightnessUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BrightnessUiController_MenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BrightnessUiController_Decide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BrightnessUiController_Close(bool IsChange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BrightnessUiController_Cancel();
    
};

