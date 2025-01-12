#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01EnvironmentManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01EnvironmentManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01EnvironmentManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01EnvironmentManager_NotifyCompleteSetupEnvPresetDataAsset();
    
};

