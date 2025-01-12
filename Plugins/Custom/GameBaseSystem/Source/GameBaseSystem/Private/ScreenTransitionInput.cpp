#include "ScreenTransitionInput.h"
#include "EInputObjectPriorityGroup.h"

AScreenTransitionInput::AScreenTransitionInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MPriorityGroup = EInputObjectPriorityGroup::SYSTEM;
}


