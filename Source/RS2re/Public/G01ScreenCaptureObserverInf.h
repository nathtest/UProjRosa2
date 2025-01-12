#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EBtTransitionType.h"
#include "G01ScreenCaptureObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ScreenCaptureObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01ScreenCaptureObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ScreenCapture_StartScreenTransition(EBtTransitionType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ScreenCapture_StartScreenCapture(EBtTransitionType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ScreenCapture_NotifyScreenCaptureComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01ScreenCapture_NotifyCaptureDone();
    
};

