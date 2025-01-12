#include "G01BattleStatusStorageComponent.h"

UG01BattleStatusStorageComponent::UG01BattleStatusStorageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UG01BattleStatusStorageComponent::StoreHP(FName InKey, const FBattleStatusStoreParamHP& InParam) {
}

void UG01BattleStatusStorageComponent::Restore(FName InKey, EG01BattleStatusStorageType InType) {
}

void UG01BattleStatusStorageComponent::MakeStoreParamHP(AActor* InSource, FBattleStatusStoreParamHP& OutParam) {
}

void UG01BattleStatusStorageComponent::FindStoreHP(FName InKey, bool& OutIsExist, FBattleStatusStoreParamHP& OutParam) {
}

void UG01BattleStatusStorageComponent::Discard(FName InKey, EG01BattleStatusStorageType InType) {
}

void UG01BattleStatusStorageComponent::Contains(FName InKey, EG01BattleStatusStorageType InType, bool& OutContains) {
}


