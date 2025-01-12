#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "EG01AttackAffinityType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01ReasonToIgnoreOfDamageEnum.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleArtsTableRow.h"
#include "G01DamageFormulaTableRow.h"
#include "G01DamageManagerInf.h"
#include "G01HitFormulaTableRow.h"
#include "G01DamageManager.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01DamageManager : public AManagerBase, public IG01DamageManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MDamageFormulaTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MHitFormulaTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MPartyAffinityBorderTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEnemyAffinityBorderTable;
    
public:
    AG01DamageManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SimulateAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason, int32& ReAttrDefense);
    
    UFUNCTION(BlueprintCallable)
    void SetupAffinityBorder();
    
    UFUNCTION(BlueprintCallable)
    void MakePoisonAttackInfo(FG01AttackInfo& ReInfo);
    
    UFUNCTION(BlueprintCallable)
    void MakeMapAspectRecoveryInfo(FG01AttackInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    void LotteryDamageHit(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, bool& ReIsMiss, int32& ReHitCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void LookupAffinity(int32 InLevel, int32 InDefence, bool InIsEnemy, EG01AttackAffinityType& ReAffinity);
    
public:
    UFUNCTION(BlueprintCallable)
    void DEL_FindHitFormula(FName InName, bool& ReIsFound, FG01HitFormulaTableRow& ReFormula);
    
    UFUNCTION(BlueprintCallable)
    void DEL_FindDamageFormula(FName InName, bool& ReIsFound, FG01DamageFormulaTableRow& ReFormula);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CaldAttrBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, EG01BattleArtsAttribute InAttr, TArray<int32>& OutBonusList);
    
    UFUNCTION(BlueprintCallable)
    void CalcPoisonDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, int32& ReDamage);
    
    UFUNCTION(BlueprintCallable)
    void CalcDamageBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, TArray<int32>& OutBonusList);
    
    UFUNCTION(BlueprintCallable)
    void CalcDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, FG01AttackResultInfo& InResultInfo, int32& ReDamage);
    
    UFUNCTION(BlueprintCallable)
    void CalcAffinityByAttr(AActor* InSource, AActor* InTarget, EG01BattleArtsAttribute InAttr, EG01AttackAffinityType& ReAffinity);
    
    UFUNCTION(BlueprintCallable)
    void CalcAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, bool InCalcExtarnal, bool InCalcAbility, TArray<EG01BattleArtsAttribute> InIgnoreAttrList, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason, int32& ReAttrDefense);
    

    // Fix for true pure virtual functions not being implemented
};

