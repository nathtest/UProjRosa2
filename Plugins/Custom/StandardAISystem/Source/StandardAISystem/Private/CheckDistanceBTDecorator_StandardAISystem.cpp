#include "CheckDistanceBTDecorator_StandardAISystem.h"

UCheckDistanceBTDecorator_StandardAISystem::UCheckDistanceBTDecorator_StandardAISystem() {
    this->NodeName = TEXT("CheckDistance");
    this->MEditType = EEditCheckDistanceType::Edit;
    this->MDistance = 1000.00f;
    this->MComparisonOperatorType = EComparisonOperatorType_StandardAISystem::IsLessThanOrEqualTo;
}


