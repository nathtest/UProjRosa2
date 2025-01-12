#include "G01PlayEnemyAnimMontageBTTask.h"

UG01PlayEnemyAnimMontageBTTask::UG01PlayEnemyAnimMontageBTTask() {
    this->NodeName = TEXT("Play Enemy AnimMontage");
    this->EnemyAnimMontageID = EG01EnemyAnimMontageID::AMTF_NONE;
    this->PlayIndex = 0;
    this->SectionName = TEXT("Default");
    this->CrossFadeTime = 0.20f;
    this->PlayOnce = false;
    this->ForcePlay = false;
    this->OwnerBehaviorTreeComponent = NULL;
}


