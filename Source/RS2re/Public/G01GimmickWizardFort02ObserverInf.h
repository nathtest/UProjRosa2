#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickWizardFort02ObserverInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickWizardFort02ObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickWizardFort02ObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort02_SendIsSuccess(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort02_SendIsComplete(bool IsComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort02_ResetSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort02_RequestIsSuccess(AActor* Actor, int32 SwitchID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort02_RequestIsComplete(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort02_PressSwitch(int32 InSwitchID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort01_SendSwitchStatus(bool IsOn, bool IsCorrect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort01_RequestSwitchStatus(AActor* Actor);
    
};

