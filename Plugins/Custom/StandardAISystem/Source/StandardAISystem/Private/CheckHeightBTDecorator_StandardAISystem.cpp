#include "CheckHeightBTDecorator_StandardAISystem.h"

UCheckHeightBTDecorator_StandardAISystem::UCheckHeightBTDecorator_StandardAISystem() {
    this->NodeName = TEXT("Check Height");
    this->IsProjectNavigation = false;
    this->FilterClass = NULL;
    this->Height = 100.00f;
    this->ComparisonOperatorType = EComparisonOperatorType_StandardAISystem::IsLessThanOrEqualTo;
}


