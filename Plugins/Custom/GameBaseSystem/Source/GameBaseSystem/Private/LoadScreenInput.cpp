#include "LoadScreenInput.h"
#include "EInputObjectPriorityGroup.h"

ALoadScreenInput::ALoadScreenInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MPriorityGroup = EInputObjectPriorityGroup::SYSTEM;
}


