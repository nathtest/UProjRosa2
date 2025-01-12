#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01CircleGaugeUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01CircleGaugeUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01CircleGaugeUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_Update(float InDeltaSeconds, bool& ReIsCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_StartRelease();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_SetReleaseTime(float InReleaseTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_SetPressTime(float InPressTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_SetEndDelayTime(float InDelayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_IsCompleted(bool& ReIsCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_In();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_GetReleaseTime(float& ReReleaseTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CircleGauge_GetPressTime(float& RePressTime);
    
};

