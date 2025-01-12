#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickStoneShrineObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickStoneShrineObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickStoneShrineObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickStoneShrine_EndStoneShrineEffect();
    
};

