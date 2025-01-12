#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01PeriodJumpUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PeriodJumpUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01PeriodJumpUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodJumpUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodJumpUiController_FinishedOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodJumpUiController_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodJumpUiController_AnimationClosing();
    
};

