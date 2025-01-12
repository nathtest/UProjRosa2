#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01HandoverSelectUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01HandoverSelectUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01HandoverSelectUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HandoverSelectUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HandoverSelectUiController_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HandoverSelectUiController_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HandoverSelectUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HandoverSelectUiController_OnCancel();
    
};

