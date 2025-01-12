#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "KeyConfigObserverInf.generated.h"

UINTERFACE(Blueprintable)
class UKeyConfigObserverInf : public UInterface {
    GENERATED_BODY()
};

class IKeyConfigObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_KeyConfig_OnUpdateKeyAssign();
    
};

