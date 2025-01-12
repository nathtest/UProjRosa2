#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EInteractCollisionVisiblityType.h"
#include "InteractBaseObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractBaseObserverInf : public UInterface {
    GENERATED_BODY()
};

class IInteractBaseObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_InteractBase_SetCollisionVisiblityType(EInteractCollisionVisiblityType InVisiblityType);
    
};

