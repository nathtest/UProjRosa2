#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EInputGlobalState.h"
#include "EPlatformType.h"
#include "InputManagerObserverInf.generated.h"

UINTERFACE(Blueprintable)
class UInputManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IInputManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_InputManager_OnChangedInputHardware(EPlatformType InPlatformType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_InputManager_OnChangedInputGlobalState(EInputGlobalState InGlobalState);
    
};

