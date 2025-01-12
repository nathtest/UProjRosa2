#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ExpManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ExpManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01ExpManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpManager_ThrowExp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpManager_GrowthBefore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_ExpManager_GrowthAfter();
    
};

