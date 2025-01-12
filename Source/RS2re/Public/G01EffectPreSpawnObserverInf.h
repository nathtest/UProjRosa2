#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01EffectPreSpawnObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01EffectPreSpawnObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01EffectPreSpawnObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01EffectPreSpawn_End();
    
};

