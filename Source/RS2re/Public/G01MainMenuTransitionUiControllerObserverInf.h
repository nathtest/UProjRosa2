#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MainMenuTransitionUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuTransitionUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuTransitionUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuTransitionUiController_End(const FName& InNotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuTransitionUiController_CompleteHide(const FName& InNotifyName);
    
};

