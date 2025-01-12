#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01EnvironmentObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01EnvironmentObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01EnvironmentObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01Environment_NotifyCompleteSetupEnvPresetDataAsset();
    
};

