#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleTaskSlot.h"
#include "G01BattleTaskControllerObserverInf.generated.h"

class UG01BattleTask;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleTaskControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleTaskControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleTaskController_OnInsertedTask(UG01BattleTask* InTask, EG01BattleTaskSlot InSlot, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleTaskController_OnAddedTask(UG01BattleTask* InTask, EG01BattleTaskSlot InSlot);
    
};

