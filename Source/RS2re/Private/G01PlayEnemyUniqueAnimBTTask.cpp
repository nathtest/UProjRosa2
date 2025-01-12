#include "G01PlayEnemyUniqueAnimBTTask.h"

UG01PlayEnemyUniqueAnimBTTask::UG01PlayEnemyUniqueAnimBTTask() {
    this->NodeName = TEXT("Play Enemy Unique Animation");
    this->MEnemyUniqueAnimID = EG01EnemyUniqueAnimID::MF_NONE;
    this->MCrossfadeTime = 0.20f;
    this->bPlayOnce = false;
    this->ForcePlay = false;
    this->MOwnerComp = NULL;
}


