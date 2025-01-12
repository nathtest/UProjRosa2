#include "AIManagerAccessComponent.h"
#include "EManagerID.h"

UAIManagerAccessComponent::UAIManagerAccessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_AI_COMPO;
    this->MAIManager = NULL;
}

void UAIManagerAccessComponent::SetAIControllerToCharacter(FEditableLevelObjectID InNpcGenLevelObjectID) {
}

AAIControllerComponentManager* UAIManagerAccessComponent::GetAIManager() {
    return NULL;
}

void UAIManagerAccessComponent::EraseAIController(FEditableLevelObjectID InNpcGenLevelObjectID) {
}


