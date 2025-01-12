#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickWizardFort01ObserverInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickWizardFort01ObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickWizardFort01ObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort01_TurnSwitch(int32 InSwitchID, bool InIsTurned);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort01_SendIsComplete(bool IsComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickWizardFort01_RequestIsComplete(AActor* Actor);
    
};

