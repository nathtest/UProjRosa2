#include "GameSystemDataManager.h"
#include "EManagerID.h"

AGameSystemDataManager::AGameSystemDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_GAMESYSTEMDATA;
}


