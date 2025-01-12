#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MainMenuAbilityUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuAbilityUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuAbilityUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuAbilityUiController_OnOpenEnd();
    
};

