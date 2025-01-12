#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01FacilityDevelopmentUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FacilityDevelopmentUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01FacilityDevelopmentUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FacilityDevelopmentUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FacilityDevelopmentUiController_LoadComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FacilityDevelopmentUiController_FinishedOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FacilityDevelopmentUiController_Close();
    
};

