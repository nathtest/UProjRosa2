#include "G01BattlePreLoaderComponent.h"

UG01BattlePreLoaderComponent::UG01BattlePreLoaderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableBlockLoad = false;
    this->BattleManager = NULL;
}

void UG01BattlePreLoaderComponent::StartAsyncLoad() {
}

void UG01BattlePreLoaderComponent::ReleaseCacheFromLifeTime(EG01BattlePreLoaderLifeTime InLifeTime) {
}




void UG01BattlePreLoaderComponent::IsPlayInEditor(bool& Out) const {
}

void UG01BattlePreLoaderComponent::IsLoading_Implementation(bool& Out) const {
}

void UG01BattlePreLoaderComponent::GetBattleManager(AManagerBase*& Out) {
}

void UG01BattlePreLoaderComponent::AddAsyncLoadObjectList(const TArray<TSoftObjectPtr<UObject>>& InObjectList, const FG01BattlePreLoaderRequestArg& InArg) {
}

void UG01BattlePreLoaderComponent::AddAsyncLoadClassList(const TArray<TSoftClassPtr<UObject>>& InClassList, const FG01BattlePreLoaderRequestArg& InArg) {
}


