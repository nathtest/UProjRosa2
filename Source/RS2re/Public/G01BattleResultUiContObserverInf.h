#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleResultUiContObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleResultUiContObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleResultUiContObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleResultUiCont_FinishedGrowth();
    
};

