#include "AIControllerComponentManager.h"
#include "EManagerID.h"

AAIControllerComponentManager::AAIControllerComponentManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_AI_COMPO;
}

AAIController* AAIControllerComponentManager::GetAIControllerToCharacter(const FEditableLevelObjectID& InNpcGenLevelObjectID) {
    return NULL;
}


