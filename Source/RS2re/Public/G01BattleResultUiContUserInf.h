#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EBattleResultPhaseType.h"
#include "G01BattleResultUiContUserInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleResultUiContUserInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleResultUiContUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleResultUiContUser_PhaseStart(EBattleResultPhaseType InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleResultUiContUser_PhaseEnd(EBattleResultPhaseType InPhase);
    
};

