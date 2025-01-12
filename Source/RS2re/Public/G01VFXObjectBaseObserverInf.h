#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01VFXObjectBaseObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01VFXObjectBaseObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01VFXObjectBaseObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01VFXObjectBase_NotifyNiagaraPlayEnd();
    
};

