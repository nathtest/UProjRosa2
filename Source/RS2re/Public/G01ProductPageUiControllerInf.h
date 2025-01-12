#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ProductPageUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ProductPageUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ProductPageUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ProductPageUiController_Open(bool IsClear);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ProductPageUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ProductPageUiController_OnCancel();
    
};

