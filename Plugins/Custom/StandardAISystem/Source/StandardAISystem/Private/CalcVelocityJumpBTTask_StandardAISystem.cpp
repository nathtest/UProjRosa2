#include "CalcVelocityJumpBTTask_StandardAISystem.h"

UCalcVelocityJumpBTTask_StandardAISystem::UCalcVelocityJumpBTTask_StandardAISystem() {
    this->NodeName = TEXT("Calc Velocity Jump");
    this->Arc = 0.50f;
    this->LaunchMult = 1.00f;
    this->IsJumpLimit = true;
}


