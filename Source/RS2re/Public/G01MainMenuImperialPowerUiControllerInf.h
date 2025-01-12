#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MainMenuImperialPowerUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuImperialPowerUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuImperialPowerUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_OnR2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_OnR1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_OnPreItemLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_OnNextItemRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_OnL2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_OnL1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuImperialPowerUiController_Close();
    
};

