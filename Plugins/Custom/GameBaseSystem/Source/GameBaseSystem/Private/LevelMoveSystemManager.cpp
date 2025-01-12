#include "LevelMoveSystemManager.h"
#include "EManagerID.h"

ALevelMoveSystemManager::ALevelMoveSystemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_LEVELSYSTEM;
    this->MLevelTransitionTable = NULL;
}


