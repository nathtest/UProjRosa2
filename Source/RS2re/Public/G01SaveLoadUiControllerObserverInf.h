#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SaveLoadUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SaveLoadUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01SaveLoadUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SaveLoadUiController_SaveRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SaveLoadUiController_RequestReturnToTitleSave(bool IsEnding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SaveLoadUiController_Request();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SaveLoadUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SaveLoadUiController_LoadRequest(bool IsTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SaveLoadUiController_Close();
    
};

