#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleTaskSlot.h"
#include "G01BattleTaskControllerInf.generated.h"

class AActor;
class UG01BattleArtsManagerAccessor;
class UG01BattleCommandManagerAccessor;
class UG01BattleEnemyManagerAccessor;
class UG01BattleManagerAccessor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleTaskControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleTaskControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleTaskController_GetBattleManagerAccessor(UG01BattleManagerAccessor*& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleTaskController_GetBattleEnemyManagerAccessor(UG01BattleEnemyManagerAccessor*& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleTaskController_GetBattleCommandManagerAccessor(UG01BattleCommandManagerAccessor*& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleTaskController_GetBattleArtsManagerAccessor(UG01BattleArtsManagerAccessor*& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleTaskController_CancelTaskBySource(EG01BattleTaskSlot InSlot, const TArray<AActor*>& InSourceList);
    
};

