#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EBattleGameoverPhase.h"
#include "G01BtGameoverUiContUserInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BtGameoverUiContUserInf : public UInterface {
    GENERATED_BODY()
};

class IG01BtGameoverUiContUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtGameoverUiContUser_PhaseStart(EBattleGameoverPhase InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtGameoverUiContUser_PhaseEnd(EBattleGameoverPhase InPhase);
    
};

