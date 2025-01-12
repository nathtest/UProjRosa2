#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GraphicsSettingManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GraphicsSettingManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GraphicsSettingManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GraphicsSettingManager_NotifyResolutionChanged();
    
};

