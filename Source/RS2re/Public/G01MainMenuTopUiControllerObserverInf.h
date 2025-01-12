#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MainMenuTopUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuTopUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuTopUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuTopUiController_OnImperialOpenEnd();
    
};

