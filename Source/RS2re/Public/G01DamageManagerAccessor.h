#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01AttackAffinityType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01ReasonToIgnoreOfDamageEnum.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleArtsTableRow.h"
#include "G01DamageManagerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01DamageManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01DamageManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SimulateAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason, int32& ReAttrDefense);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakePoisonAttackInfo(FG01AttackInfo& ReInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakeMapAspectRecoveryInfo(FG01AttackInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    void LotteryDamageHit(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, bool& ReIsMiss, int32& ReHitCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void LookupAffinity(int32 InLevel, int32 InDefence, bool InIsEnemy, EG01AttackAffinityType& ReAffinity);
    
    UFUNCTION(BlueprintCallable)
    void CaldAttrBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, EG01BattleArtsAttribute InAttr, TArray<int32>& OutBonusList);
    
    UFUNCTION(BlueprintCallable)
    void CalcPoisonDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, int32& ReDamage);
    
    UFUNCTION(BlueprintCallable)
    void CalcDamageBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, TArray<int32>& OutBonusList);
    
    UFUNCTION(BlueprintCallable)
    void CalcDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, UPARAM(Ref) FG01AttackResultInfo& InResultInfo, int32& ReDamage);
    
    UFUNCTION(BlueprintCallable)
    void CalcAffinityByAttr(AActor* InSource, AActor* InTarget, EG01BattleArtsAttribute InAttr, EG01AttackAffinityType& ReAffinity);
    
    UFUNCTION(BlueprintCallable)
    void CalcAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason);
    
};

