#include "G01BattleCacheManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
#include "Templates/SubclassOf.h"

AG01BattleCacheManager::AG01BattleCacheManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_BATTLECACHE;
    this->EnableBlockLoad = false;
}

void AG01BattleCacheManager::RequestAsyncLoad(const FG01BattleCacheLoadRequestArg& InLoadRequest, FG01BattleCacheOnLoadedEvent InLoadedCallback) {
}

void AG01BattleCacheManager::IsPlayInEditor(bool& Out) const {
}

TArray<FName> AG01BattleCacheManager::GetVoiceIDs(FG01BattleVoiceTableRow InRow) const {
    return TArray<FName>();
}

void AG01BattleCacheManager::GetVADefaultObject(TSubclassOf<AG01CharacterVisualActor> InObject, AG01CharacterVisualActor*& OutDefault) {
}

void AG01BattleCacheManager::GetDefaultObject(UClass* InObject, UObject*& OutDefault) {
}

void AG01BattleCacheManager::GetBCDefaultObject(TSubclassOf<AG01BattleCharacterBase> InObject, AG01BattleCharacterBase*& OutDefault) {
}

void AG01BattleCacheManager::FindComponents(AActor*& OutTemplate, TArray<UActorComponent*>& OutComponents, TSubclassOf<AActor> InActorClass, TSubclassOf<UActorComponent> InComponentClass) {
}

void AG01BattleCacheManager::AddInitializeAsyncSoftObjects(const TArray<TSoftObjectPtr<UObject>>& InObjects) {
}

void AG01BattleCacheManager::AddAsyncLoadObject(const FG01BattleCacheLoadObjectArg& InLoadObject) {
}


