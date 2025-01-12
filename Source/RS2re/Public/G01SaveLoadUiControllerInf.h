#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SaveLoadUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SaveLoadUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01SaveLoadUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SaveLoadUiController_RequestSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SaveLoadUiController_RequestReturnToTitleSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SaveLoadUiController_RequestLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SaveLoadUiController_Close();
    
};

