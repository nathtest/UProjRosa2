#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01DemoPageUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DemoPageUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01DemoPageUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DemoPageUiController_StartOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DemoPageUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DemoPageUiController_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DemoPageUiController_NotSaveEndOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DemoPageUiController_EndOpen();
    
};

