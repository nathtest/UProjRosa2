#include "G01DamageFormulaBase.h"

UG01DamageFormulaBase::UG01DamageFormulaBase() {
}

void UG01DamageFormulaBase::SetResultInfo(const FG01AttackResultInfo& InResultInfo) {
}

void UG01DamageFormulaBase::MakeDummyArtsData(EG01BattleArtsType InArtsType, EG01BattleArtsImpactType InImpactType, FG01BattleArtsTableRow& OutArts) {
}

bool UG01DamageFormulaBase::GetUseNewAttr() {
    return false;
}

void UG01DamageFormulaBase::GetResultInfo(FG01AttackResultInfo& ReResultInfo) {
}

void UG01DamageFormulaBase::DBG_SendLogInt(FName InName, int32 InValue) {
}

void UG01DamageFormulaBase::DBG_SendLogFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax) {
}

void UG01DamageFormulaBase::DBG_SendLogAttr(FName InName, EG01BattleArtsAttribute InAttr) {
}

void UG01DamageFormulaBase::DBG_LogEnd() {
}

void UG01DamageFormulaBase::DBG_LogBegin() {
}



void UG01DamageFormulaBase::ApplyDamageFlucValue(int32 InMin, int32 InMax, AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, int32& OutMin, int32& OutMax) {
}

void UG01DamageFormulaBase::ApplyDamageFlucRate(float InMin, float InMax, AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, float& OutMin, float& OutMax) {
}



