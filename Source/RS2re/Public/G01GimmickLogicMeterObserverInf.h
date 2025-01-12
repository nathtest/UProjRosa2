#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickLogicMeterObserverInf.generated.h"

class AG01GimmickObjectBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickLogicMeterObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickLogicMeterObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickLogicMeter_NotifyEndDisplay(const AG01GimmickObjectBase* InGimmick);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickLogicMeter_NotifyBeginInteract(const AG01GimmickObjectBase* InGimmick);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickLogicMeter_NotifyBeginDisplay(const AG01GimmickObjectBase* InGimmick);
    
};

