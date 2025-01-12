#include "GamePlayDataManager.h"
#include "EManagerID.h"

AGamePlayDataManager::AGamePlayDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_GAMEPLAYDATA;
}


