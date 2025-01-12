#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickAlenepShrineObserverInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickAlenepShrineObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickAlenepShrineObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickAlenepShrine_SendIsActiveSwitch(FName SwitchID, bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickAlenepShrine_RequestIsActiveSwitch(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickAlenepShrine_PressSwitch(FName InSwitchID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickAlenepShrine_ForceActiveSwitch(AActor* Actor, FName SwitchID);
    
};

