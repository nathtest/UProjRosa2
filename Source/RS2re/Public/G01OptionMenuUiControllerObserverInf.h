#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01OptionMenuUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01OptionMenuUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01OptionMenuUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01OptionMenuUiController_SettingComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01OptionMenuUiController_Reset(FName ResetName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01OptionMenuUiController_PostInput(FName PostInputName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01OptionMenuUiController_MainMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01OptionMenuUiController_Init(FName InitName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01OptionMenuUiController_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01OptionMenuUiController_ChangedSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01OptionMenuUiController_Cancel(FName CancelName);
    
};

