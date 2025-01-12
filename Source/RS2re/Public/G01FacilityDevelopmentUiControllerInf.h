#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01FacilityDevelopmentUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FacilityDevelopmentUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01FacilityDevelopmentUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FacilityDevelopmentUiController_RequestMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FacilityDevelopmentUiController_Open();
    
};

