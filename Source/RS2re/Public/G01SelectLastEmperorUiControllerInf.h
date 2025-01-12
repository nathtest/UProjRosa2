#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SelectLastEmperorUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SelectLastEmperorUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01SelectLastEmperorUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SelectLastEmperorUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SelectLastEmperorUiController_OnPreItemLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SelectLastEmperorUiController_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SelectLastEmperorUiController_OnNextItemRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SelectLastEmperorUiController_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SelectLastEmperorUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SelectLastEmperorUiController_OnCancel();
    
};

