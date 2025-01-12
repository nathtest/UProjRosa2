#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01PartyLearnArtsComponentObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PartyLearnArtsComponentObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01PartyLearnArtsComponentObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyLearnArtsComponent_OverFlowLearnedCount();
    
};

