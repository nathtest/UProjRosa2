#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MainMenuTechniqueArtUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuTechniqueArtUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuTechniqueArtUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuTechniqueArtUiController_OnOpenEnd();
    
};

