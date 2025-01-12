#include "G01ChangeMoveSpeedBTTask.h"

UG01ChangeMoveSpeedBTTask::UG01ChangeMoveSpeedBTTask() {
    this->NodeName = TEXT("Change Move Speed");
    this->MoveSpeed = EAISpeed::AI_SPEED_WALK;
}


