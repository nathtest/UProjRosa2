#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01TitleUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01TitleUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01TitleUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleUiController_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleUiController_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleUiController_OnContinueOpen(bool IsPlayGoStart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleUiController_OnCancel();
    
};

