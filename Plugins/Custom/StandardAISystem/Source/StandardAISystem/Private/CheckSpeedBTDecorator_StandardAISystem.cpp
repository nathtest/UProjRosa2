#include "CheckSpeedBTDecorator_StandardAISystem.h"

UCheckSpeedBTDecorator_StandardAISystem::UCheckSpeedBTDecorator_StandardAISystem() {
    this->NodeName = TEXT("CheckSpeed");
    this->MSpeed = 0.00f;
    this->MComparisonOperatorType = EComparisonOperatorType_StandardAISystem::IsLessThanOrEqualTo;
}


