#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ExpStackObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ExpStackObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01ExpStackObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpStack_Add(int32 InExp);
    
};

