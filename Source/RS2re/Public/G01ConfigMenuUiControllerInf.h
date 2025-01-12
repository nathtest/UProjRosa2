#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ConfigMenuButtonNavi.h"
#include "G01ConfigMenuDisplayParam.h"
#include "G01ConfigMenuUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ConfigMenuUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ConfigMenuUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_UpdateDisplayParam(const FG01ConfigMenuDisplayParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_SetInfoTextVisibility(bool IsVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_SetInfomationText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_SetButtonVisibility(bool IsVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_ResetButtonNavi();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_PushDisplayParam(const FG01ConfigMenuDisplayParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_PopDisplayParam(bool& OutIsSuccess, FG01ConfigMenuDisplayParam& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_HasDisplayParam(bool& OutIsExists);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_GetDisplayParam(bool& OutIsValid, FG01ConfigMenuDisplayParam& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_AddButtonNavi(const FText& InText, const FName& InInputName, const FG01ConfigMenuButtonNavi& InConfigList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ConfigMenuUiController_Activate();
    
};

