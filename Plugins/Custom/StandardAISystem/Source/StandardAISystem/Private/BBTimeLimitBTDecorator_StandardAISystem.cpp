#include "BBTimeLimitBTDecorator_StandardAISystem.h"

UBBTimeLimitBTDecorator_StandardAISystem::UBBTimeLimitBTDecorator_StandardAISystem() {
    this->NodeName = TEXT("BBTimeLimit");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
}


