#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01TransitionManagerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01TransitionManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01TransitionManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TransitionManager_StartTransition(int32 InNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TransitionManager_StartCapture(int32 InNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TransitionManager_SetTransitionType(int32 InNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01TransitionManager_IsCaptureComplete();
    
};

