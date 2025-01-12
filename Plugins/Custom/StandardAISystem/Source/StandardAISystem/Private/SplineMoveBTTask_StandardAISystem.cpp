#include "SplineMoveBTTask_StandardAISystem.h"

USplineMoveBTTask_StandardAISystem::USplineMoveBTTask_StandardAISystem() {
    this->NodeName = TEXT("Spline Move");
    this->MTargetChangeDistance = 100.00f;
    this->MRotationterp = 10.00f;
    this->MMoveType = ESplineMoveTypeEnum_StandardAISystem::Normal;
    this->MIgnoreHeight = true;
}


