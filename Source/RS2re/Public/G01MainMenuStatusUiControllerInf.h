#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MainMenuStatusUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuStatusUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuStatusUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_OnRStickUpDown(const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_OnRStickLeftRight(const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_OnR3();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_OnR2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_OnR1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_OnL2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_OnL1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuStatusUiController_Close();
    
};

