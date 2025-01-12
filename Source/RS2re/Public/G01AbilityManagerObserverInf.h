#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01AbilityCharaStatusNotify.h"
#include "G01AbilityLearnNotify.h"
#include "G01AbilityLearnStat.h"
#include "G01AbilityMasteryNotify.h"
#include "G01AbilityManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01AbilityManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01AbilityManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AbilityManager_OnChangeCharaStatusEffect(const FG01AbilityCharaStatusNotify& InNotify);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AbilityManager_OnAbilityMastery(const FG01AbilityMasteryNotify& InNotify);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AbilityManager_OnAbilityLearn(const FG01AbilityLearnNotify& InNotify);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AbilityManager_CommitAbilityLearnStat(const FG01AbilityLearnStat& InStat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obg_G01AbilityManager_OnProgressAchievementForInheritance(int32 InCurrent, int32 InMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obg_G01AbilityManager_OnProgressAchievementForGet(int32 InCurrent, int32 InMax);
    
};

