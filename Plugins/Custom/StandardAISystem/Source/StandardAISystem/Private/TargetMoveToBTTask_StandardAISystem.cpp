#include "TargetMoveToBTTask_StandardAISystem.h"

UTargetMoveToBTTask_StandardAISystem::UTargetMoveToBTTask_StandardAISystem() {
    this->NodeName = TEXT("Target Move To");
    this->OffsetType = EMoveToOffsetType_StandardAISystem::Local;
    this->ToleranceDistance = 50.00f;
}


