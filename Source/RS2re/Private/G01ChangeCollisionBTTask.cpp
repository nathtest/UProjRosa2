#include "G01ChangeCollisionBTTask.h"

UG01ChangeCollisionBTTask::UG01ChangeCollisionBTTask() {
    this->NodeName = TEXT("Change Collision");
    this->CollisionChannel = ECC_GameTraceChannel3;
    this->EnableCollision = true;
    this->ChangeType = EChangeCollisionType::Tag;
    this->ComponentTag = TEXT("Default");
}


