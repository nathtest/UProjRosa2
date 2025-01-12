#include "G01ChangeAIStateBTTask.h"

UG01ChangeAIStateBTTask::UG01ChangeAIStateBTTask() {
    this->NodeName = TEXT("Change AIState");
    this->AIState = EAIState::AI_IDLE;
}


