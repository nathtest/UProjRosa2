#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleCommandUIControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleCommandUIControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleCommandUIControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandUIController_WakePartySelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandUIController_SetEnableWeaponName(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleCommandUIController_GetEnableWeaponName();
    
};

