#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01RightsNotationUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01RightsNotationUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01RightsNotationUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01RightsNotationUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01RightsNotationUiController_Close();
    
};

