#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BrightnessUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BrightnessUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BrightnessUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BrightnessUiController_Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BrightnessUiController_Open(bool OutIsOption);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BrightnessUiController_Cancel();
    
};

