#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01OptionMenuUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01OptionMenuUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01OptionMenuUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01OptionMenuUiController_TitleOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01OptionMenuUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01OptionMenuUiController_Close();
    
};

