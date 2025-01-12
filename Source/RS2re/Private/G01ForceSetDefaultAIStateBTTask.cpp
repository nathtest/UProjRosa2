#include "G01ForceSetDefaultAIStateBTTask.h"

UG01ForceSetDefaultAIStateBTTask::UG01ForceSetDefaultAIStateBTTask() {
    this->NodeName = TEXT("Force Set Default AIState");
    this->DefaultAIState = EAIState::AI_IDLE;
}


