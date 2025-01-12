#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickInteractObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickInteractObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickInteractObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickInteract_OnEndInteract();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickInteract_OnBeginInteract();
    
};

