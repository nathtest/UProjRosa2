#include "CheckMoveDistance_StandardAISystem.h"

UCheckMoveDistance_StandardAISystem::UCheckMoveDistance_StandardAISystem() {
    this->NodeName = TEXT("Check MoveDistance");
    this->MoveDistance = 0.00f;
    this->Time = 0.00f;
    this->IsFly = false;
    this->ComparisonOperatorType = EComparisonOperatorType_StandardAISystem::IsLessThanOrEqualTo;
}


