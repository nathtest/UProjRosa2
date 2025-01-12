#include "SaveDataManager.h"
#include "EManagerID.h"

ASaveDataManager::ASaveDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_SAVEDATA;
    this->State = ESaveDataManagerState::Idle;
}

void ASaveDataManager::OnGameStart() {
}

void ASaveDataManager::Init_Implementation() {
}

void ASaveDataManager::Fin_Implementation() {
}


