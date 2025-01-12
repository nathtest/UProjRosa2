#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EventResult.h"
#include "EventManagerObserverInf.generated.h"

UINTERFACE(Blueprintable)
class UEventManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IEventManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_EventManager_OnEndEvent(const FEventResult& InEventResult);
    
};

