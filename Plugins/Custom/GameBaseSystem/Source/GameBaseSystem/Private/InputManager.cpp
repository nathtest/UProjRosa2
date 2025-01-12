#include "InputManager.h"
#include "EManagerID.h"

AInputManager::AInputManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_INPUT;
    this->InputGlobalState = EInputGlobalState::NoPressed;
}


