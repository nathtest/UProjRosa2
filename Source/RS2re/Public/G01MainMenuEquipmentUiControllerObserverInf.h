#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MainMenuEquipmentUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuEquipmentUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuEquipmentUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuEquipmentUiController_OnOpenEnd();
    
};

