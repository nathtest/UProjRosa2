#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DropItem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItem -FallbackName=DropItem
#include "G01DebugBattleRewardActorSubWindowInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DebugBattleRewardActorSubWindowInf : public UInterface {
    GENERATED_BODY()
};

class IG01DebugBattleRewardActorSubWindowInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugBattleRewardActorSubWindow_GetInfinityEnemyDropSlot(bool& OutIsInfinity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugBattleRewardActorSubWindow_GetEnemyDropSlotForceWin(bool& OutIsForceWin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugBattleRewardActorSubWindow_GetEnemyDropItemAllGain(bool& OutIsAllGain);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugBattleRewardActorSubWindow_GetDropItemList(TArray<FDropItem>& ItemIDList);
    
};

