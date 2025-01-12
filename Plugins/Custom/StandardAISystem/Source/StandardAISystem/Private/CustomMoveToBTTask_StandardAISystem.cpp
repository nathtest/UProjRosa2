#include "CustomMoveToBTTask_StandardAISystem.h"

UCustomMoveToBTTask_StandardAISystem::UCustomMoveToBTTask_StandardAISystem() {
    this->NodeName = TEXT("Custom Move To");
    this->UpdateFrequency = 0.00f;
    this->FilterClass = NULL;
    this->IsMoveTarget = false;
}


