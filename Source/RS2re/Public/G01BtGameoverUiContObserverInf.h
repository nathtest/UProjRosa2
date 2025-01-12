#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BtGameoverUiContObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BtGameoverUiContObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BtGameoverUiContObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BtGameoverUiCont_FinishedAnimationByEntry();
    
};

