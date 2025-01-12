#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleArtsImpactType.h"
#include "EG01BattleArtsType.h"
#include "G01AttackResultInfo.h"
#include "G01BattleArtsTableRow.h"
#include "G01DamageFormulaBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API UG01DamageFormulaBase : public UObject {
    GENERATED_BODY()
public:
    UG01DamageFormulaBase();

    UFUNCTION(BlueprintCallable)
    void SetResultInfo(const FG01AttackResultInfo& InResultInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakeDummyArtsData(EG01BattleArtsType InArtsType, EG01BattleArtsImpactType InImpactType, FG01BattleArtsTableRow& OutArts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseNewAttr();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResultInfo(FG01AttackResultInfo& ReResultInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void DBG_SendLogInt(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendLogFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendLogAttr(FName InName, EG01BattleArtsAttribute InAttr);
    
    UFUNCTION(BlueprintCallable)
    void DBG_LogEnd();
    
    UFUNCTION(BlueprintCallable)
    void DBG_LogBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckApplyMapAspectBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcDamage(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, int32& ReDamage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyDamageFlucValue(int32 InMin, int32 InMax, AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, int32& OutMin, int32& OutMax);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamageFlucRate(float InMin, float InMax, AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, float& OutMin, float& OutMax);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddDamageBonus(FName InLabel, float InRate);
    
};

