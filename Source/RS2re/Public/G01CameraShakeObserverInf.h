#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01CameraShakeObserverInf.generated.h"

class UCameraShakeBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01CameraShakeObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01CameraShakeObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_CameraShake_Completed(const UCameraShakeBase* InCameraShakeObject);
    
};

