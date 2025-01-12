#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01CharacterID.h"
#include "G01EmperorChoiceUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01EmperorChoiceUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01EmperorChoiceUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01EmperorChoiceMenuUiController_RequestSequence(FG01CharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01EmperorChoiceMenuUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01EmperorChoiceMenuUiController_FinishedOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01EmperorChoiceMenuUiController_FinishedLoadActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01EmperorChoiceMenuUiController_Close();
    
};

