#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MusicAppreciationUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MusicAppreciationUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01MusicAppreciationUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MusicAppreciationUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MusicAppreciationUiController_OnOpenEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MusicAppreciationUiController_Close();
    
};

