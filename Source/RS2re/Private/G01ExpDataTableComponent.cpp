#include "G01ExpDataTableComponent.h"

UG01ExpDataTableComponent::UG01ExpDataTableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MExpDataTableHP = NULL;
    this->MExpDataTableBP = NULL;
    this->MExpDataTableArtsLevel = NULL;
    this->MExpDataTableMasterLevel = NULL;
    this->MExpDataTableEnemy = NULL;
}

void UG01ExpDataTableComponent::GetNeedTotalExpByArtsLevelList(const bool InFulfillNextLevel, TArray<FG01ExpDataTableRowArtsLevelStruct>& OutNeedTotalExpList) {
}

void UG01ExpDataTableComponent::GetNeedTotalExpByArtsLevel(const int32 InArtsLevel, const bool InFulfillNextLevel, int32& OutExp) {
}

void UG01ExpDataTableComponent::GetNeedExpByMasterLevel(int32 InCurrentMasterLevel, int32& OutNeedExp) {
}

void UG01ExpDataTableComponent::GetNeedExpByHp(int32 InCurrentHp, int32& OutNeedExp) {
}

void UG01ExpDataTableComponent::GetNeedExpByBp(int32 InCurrentBp, int32& OutNeedExp) {
}

void UG01ExpDataTableComponent::GetNeedExpByArtsLevel(int32 InCurrentArtsLevel, int32& OutNeedExp) {
}

void UG01ExpDataTableComponent::GetMaxMasterLevel(int32& OutMaxMasterLevel) {
}

void UG01ExpDataTableComponent::GetMaxHP(int32& OutMaxHP) {
}

void UG01ExpDataTableComponent::GetMaxBP(int32& OutMaxBP) {
}

void UG01ExpDataTableComponent::GetMaxArtsLevel(int32& OutMaxLevel) {
}

float UG01ExpDataTableComponent::GetHPGrowthCoefficient(const int32& InBaseHp) {
    return 0.0f;
}

void UG01ExpDataTableComponent::GetEnemyExp(FName InEnemyID, int32& OutExp) {
}

float UG01ExpDataTableComponent::GetBPGrowthCoefficient(const int32& InBaseBp) {
    return 0.0f;
}

void UG01ExpDataTableComponent::GetAllEnemyID(TArray<FName>& OutAllEnemyIDList) {
}

void UG01ExpDataTableComponent::CheckGrowthByMasterLevel(int32 InCurrentMasterLevel, bool& OutOk) {
}

void UG01ExpDataTableComponent::CheckGrowthByHp(int32 InCurrentHp, bool& OutOk) {
}

void UG01ExpDataTableComponent::CheckGrowthByBp(int32 InCurrentBp, bool& OutOk) {
}

void UG01ExpDataTableComponent::CheckGrowthByArtsLevel(int32 InCurrentArtsLevel, bool& OutOk) {
}

void UG01ExpDataTableComponent::CalcArtsLevel(const int32& InExp, int32& OutArtsLevel) {
}


