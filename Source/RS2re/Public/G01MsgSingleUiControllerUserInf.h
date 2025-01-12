#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MsgSingleUiControllerUserInf.generated.h"

class AG01MsgUiControllerBase;
class UG01MsgRootComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MsgSingleUiControllerUserInf : public UInterface {
    GENERATED_BODY()
};

class IG01MsgSingleUiControllerUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_MsgSingleUiContUser_OnDeactivate(AG01MsgUiControllerBase* InDeactivateController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_MsgSingleUiContUser_OnActivate(AG01MsgUiControllerBase* InActivateController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UG01MsgRootComponent* Inf_MsgSingleUiContUser_GetMessageRootComponent();
    
};

