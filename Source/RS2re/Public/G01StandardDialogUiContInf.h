#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01StandardDialogUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01StandardDialogUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01StandardDialogUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiControllerUser_IsDecideCheckClose(bool InIsDecide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiControllerUser_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogDialogUiControllerUser_SelectItemNumClose(bool InIsDecide, FName InItemID, int32 InSelectNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogDialogUiControllerUser_FinishCloseDialog();
    
};

