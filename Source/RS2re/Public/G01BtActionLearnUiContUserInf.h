#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BtActionLearnUiContUserInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BtActionLearnUiContUserInf : public UInterface {
    GENERATED_BODY()
};

class IG01BtActionLearnUiContUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtActionLearnUiContUser_OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtActionLearnUiContUser_NextAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtActionLearnUiContUser_End();
    
};

