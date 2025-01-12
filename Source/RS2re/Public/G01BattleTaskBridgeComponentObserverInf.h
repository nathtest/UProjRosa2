#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleTaskBridgeComponentObserverInf.generated.h"

class UG01BattleTask;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleTaskBridgeComponentObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleTaskBridgeComponentObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleTaskBridge_RequestFinishCameraSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleTaskBridge_FinishedSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleTaskBridge_FinishedPlayBackTaskEndImitation(UG01BattleTask* InTask);
    
};

