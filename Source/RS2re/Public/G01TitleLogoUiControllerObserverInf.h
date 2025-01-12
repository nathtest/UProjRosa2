#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01TitleLogoUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01TitleLogoUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01TitleLogoUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01TitleLogoUiController_InitializeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01TitleLogoUiController_Close();
    
};

