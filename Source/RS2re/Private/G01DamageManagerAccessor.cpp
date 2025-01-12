#include "G01DamageManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01DamageManagerAccessor::UG01DamageManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_DAMAGE;
}

void UG01DamageManagerAccessor::SimulateAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason, int32& ReAttrDefense) {
}

void UG01DamageManagerAccessor::MakePoisonAttackInfo(FG01AttackInfo& ReInfo) {
}

void UG01DamageManagerAccessor::MakeMapAspectRecoveryInfo(FG01AttackInfo& OutInfo) {
}

void UG01DamageManagerAccessor::LotteryDamageHit(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, bool& ReIsMiss, int32& ReHitCount) {
}

void UG01DamageManagerAccessor::LookupAffinity(int32 InLevel, int32 InDefence, bool InIsEnemy, EG01AttackAffinityType& ReAffinity) {
}

void UG01DamageManagerAccessor::CaldAttrBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, EG01BattleArtsAttribute InAttr, TArray<int32>& OutBonusList) {
}

void UG01DamageManagerAccessor::CalcPoisonDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, int32& ReDamage) {
}

void UG01DamageManagerAccessor::CalcDamageBonusByFormation(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, TArray<int32>& OutBonusList) {
}

void UG01DamageManagerAccessor::CalcDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, FG01AttackResultInfo& InResultInfo, int32& ReDamage) {
}

void UG01DamageManagerAccessor::CalcAffinityByAttr(AActor* InSource, AActor* InTarget, EG01BattleArtsAttribute InAttr, EG01AttackAffinityType& ReAffinity) {
}

void UG01DamageManagerAccessor::CalcAffinity(AActor* InSource, AActor* InTarget, FName InArtsID, EG01AttackAffinityType& ReAffinity, EG01ReasonToIgnoreOfDamageEnum& ReReason) {
}


