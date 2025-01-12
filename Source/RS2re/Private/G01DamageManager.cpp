#include "G01DamageManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01DamageManager::AG01DamageManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_DAMAGE;
    this->MDamageFormulaTable = NULL;
    this->MHitFormulaTable = NULL;
    this->MPartyAffinityBorderTable = NULL;
    this->MEnemyAffinityBorderTable = NULL;
}

void AG01DamageManager::SimulateAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason, int32& ReAttrDefense) {
}

void AG01DamageManager::SetupAffinityBorder() {
}

void AG01DamageManager::MakePoisonAttackInfo(FG01AttackInfo& ReInfo) {
}

void AG01DamageManager::MakeMapAspectRecoveryInfo(FG01AttackInfo& OutInfo) {
}

void AG01DamageManager::LotteryDamageHit(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, bool& ReIsMiss, int32& ReHitCount) {
}

void AG01DamageManager::LookupAffinity(int32 InLevel, int32 InDefence, bool InIsEnemy, EG01AttackAffinityType& ReAffinity) {
}

void AG01DamageManager::DEL_FindHitFormula(FName InName, bool& ReIsFound, FG01HitFormulaTableRow& ReFormula) {
}

void AG01DamageManager::DEL_FindDamageFormula(FName InName, bool& ReIsFound, FG01DamageFormulaTableRow& ReFormula) {
}

void AG01DamageManager::CaldAttrBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, EG01BattleArtsAttribute InAttr, TArray<int32>& OutBonusList) {
}

void AG01DamageManager::CalcPoisonDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, int32& ReDamage) {
}

void AG01DamageManager::CalcDamageBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, TArray<int32>& OutBonusList) {
}

void AG01DamageManager::CalcDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, FG01AttackResultInfo& InResultInfo, int32& ReDamage) {
}

void AG01DamageManager::CalcAffinityByAttr(AActor* InSource, AActor* InTarget, EG01BattleArtsAttribute InAttr, EG01AttackAffinityType& ReAffinity) {
}

void AG01DamageManager::CalcAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, bool InCalcExtarnal, bool InCalcAbility, TArray<EG01BattleArtsAttribute> InIgnoreAttrList, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason, int32& ReAttrDefense) {
}


