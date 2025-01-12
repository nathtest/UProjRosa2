#include "AISplineMoveBTTask_StandardAISystem.h"

UAISplineMoveBTTask_StandardAISystem::UAISplineMoveBTTask_StandardAISystem() {
    this->NodeName = TEXT("AI Spline Move");
    this->MMoveType = ESplineMoveTypeEnum_StandardAISystem::Normal;
    this->MAddDistance = 100.00f;
}


