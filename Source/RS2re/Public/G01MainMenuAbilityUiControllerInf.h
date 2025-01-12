#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MainMenuAbilityUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuAbilityUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuAbilityUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnYButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnXButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnRStickUpDown(const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnRStickLeftRight(const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnR3();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnR2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnR1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnPreItemLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnNextItemRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnL2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnL1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuAbilityUiController_Close();
    
};

