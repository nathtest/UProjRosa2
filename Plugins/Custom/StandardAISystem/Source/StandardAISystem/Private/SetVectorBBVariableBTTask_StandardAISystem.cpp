#include "SetVectorBBVariableBTTask_StandardAISystem.h"

USetVectorBBVariableBTTask_StandardAISystem::USetVectorBBVariableBTTask_StandardAISystem() {
    this->NodeName = TEXT("Set BB Variable(Vector)");
    this->EditType = EEditVectorType::Actor;
    this->OffsetType = EMoveToOffsetType_StandardAISystem::Local;
}


