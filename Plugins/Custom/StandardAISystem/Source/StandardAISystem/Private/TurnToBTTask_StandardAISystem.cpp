#include "TurnToBTTask_StandardAISystem.h"

UTurnToBTTask_StandardAISystem::UTurnToBTTask_StandardAISystem() {
    this->NodeName = TEXT("Turn To");
    this->UpdateFrequency = 0.00f;
    this->AngleThreshold = 10.00f;
    this->AngleTolerance = 5.00f;
}


