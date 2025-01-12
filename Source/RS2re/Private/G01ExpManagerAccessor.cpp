#include "G01ExpManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01ExpManagerAccessor::UG01ExpManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_EXP;
}

void UG01ExpManagerAccessor::UsedArts(FG01CharacterID InCharacterId, EG01BattleArtsType InUsedArtsType) {
}

void UG01ExpManagerAccessor::ThrowExp() {
}

void UG01ExpManagerAccessor::SetUseDevelopmentBonus(bool InUse) {
}

void UG01ExpManagerAccessor::SetSpecialBonus(float InBonus) {
}

void UG01ExpManagerAccessor::SetExceptionBonus(float InBonus) {
}

void UG01ExpManagerAccessor::SetDevelopmentBonus(float InBonus) {
}

void UG01ExpManagerAccessor::SetBonus(float InBonus) {
}

void UG01ExpManagerAccessor::SetActionLog(const TArray<FG01ExpActionLogStruct>& InCharacterLog) {
}

void UG01ExpManagerAccessor::ResolveExp() {
}

void UG01ExpManagerAccessor::GetUseDevelopmentBonus(bool& OutUse) {
}

void UG01ExpManagerAccessor::GetSpecialBonus(float& OutBonus) {
}

int32 UG01ExpManagerAccessor::GetNeedTotalExpByArtsLevel(const int32 InArtsLevel, const bool InFulfillNextLevel) {
    return 0;
}

void UG01ExpManagerAccessor::GetNeedExpByArtsLevel(const int32 InCurrentArtsLevel, int32& OutNeedExp) {
}

float UG01ExpManagerAccessor::GetHPGrowthCoefficient(const int32& InBaseHp) {
    return 0.0f;
}

UG01ExpDataTableComponent* UG01ExpManagerAccessor::GetExpDataTable() {
    return NULL;
}

void UG01ExpManagerAccessor::GetExp(bool InUseBonus, bool InUseSpecialBonus, bool InUseExceptionBonus, bool InUseDevelopmentBonus, int32& OutExp) {
}

void UG01ExpManagerAccessor::GetExceptionBonus(float& OutBonus) {
}

void UG01ExpManagerAccessor::GetDevelopmentBonus(float& OutBonus) {
}

float UG01ExpManagerAccessor::GetBPGrowthCoefficient(const int32& InBaseBp) {
    return 0.0f;
}

void UG01ExpManagerAccessor::GetBonus(float& OutBonus) {
}

void UG01ExpManagerAccessor::GetActionLog(TArray<FG01ExpActionLogStruct>& OutCharacterLog) {
}

int32 UG01ExpManagerAccessor::CalcArtsLevel(const int32& InExp) {
    return 0;
}

void UG01ExpManagerAccessor::AddExp(int32 InExp) {
}


