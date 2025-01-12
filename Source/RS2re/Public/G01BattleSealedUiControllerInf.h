#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleSealedLearnArtsStruct.h"
#include "G01CharacterID.h"
#include "G01BattleSealedUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleSealedUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleSealedUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleSealedUiController_RequestOpen(const TMap<FG01CharacterID, FG01BattleSealedLearnArtsStruct>& InLearnInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleSealedUiController_RequestForceClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleSealedUiController_OnXButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleSealedUiController_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleSealedUiController_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleSealedUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleSealedUiController_IsActive();
    
};

