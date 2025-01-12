#include "G01FieldEnemyAnimInstanceBase.h"

UG01FieldEnemyAnimInstanceBase::UG01FieldEnemyAnimInstanceBase() {
    this->EnemyUniqueAnimID = EG01EnemyUniqueAnimID::MF_NONE;
    this->PlayEnemyUniqueAnimID = EG01EnemyUniqueAnimID::MF_NONE;
}

void UG01FieldEnemyAnimInstanceBase::SetUpAnimationParam(AG01FieldEnemyBase* InEnemy, float InAnimWalkSpeed, float InAnimRunSpeed, float InRunningAnimeThreshold) {
}


