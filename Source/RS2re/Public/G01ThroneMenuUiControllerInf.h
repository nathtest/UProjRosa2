#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ThroneMenuUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ThroneMenuUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ThroneMenuUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneMenuUiController_OpenRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneMenuUiController_EmperorCancelOpenRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ThroneMenuUiController_CancelDevelopMenu();
    
};

