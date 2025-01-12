#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01AttackAffinityType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01ReasonToIgnoreOfDamageEnum.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleArtsTableRow.h"
#include "G01DamageManagerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DamageManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01DamageManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_SimulateAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason, int32& ReAttrDefense);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_MakePoisonAttackInfo(FG01AttackInfo& ReInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_MakeMapAspectRecoveryInfo(FG01AttackInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_LotteryDamageHit(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, bool& ReIsMiss, int32& ReHitCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_LookupAffinity(int32 InLevel, int32 InDefence, bool InIsEnemy, EG01AttackAffinityType& ReAffinity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_CalcPoisonDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, int32& ReDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_CalcDamageBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, TArray<int32>& OutBonusList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_CalcDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, UPARAM(Ref) FG01AttackResultInfo& InResultInfo, int32& ReDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_CalcAttrBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, EG01BattleArtsAttribute InAttr, TArray<int32>& OutBonusList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_CalcAffinityByAttr(AActor* InSource, AActor* InTarget, EG01BattleArtsAttribute InAttr, EG01AttackAffinityType& ReAffinity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DamageManager_CalcAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason);
    
};

