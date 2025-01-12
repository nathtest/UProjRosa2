#include "G01FieldEnemyBase.h"
#include "G01AIControllerComponent.h"
#include "G01FieldEnemyUROComponent.h"

AG01FieldEnemyBase::AG01FieldEnemyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMaxMoveRadius = 0.00f;
    this->MSearchStartRadius = 0.00f;
    this->MSearchRadius = 0.00f;
    this->MSearchHight = -1.00f;
    this->MIsNotifiedByEnemyNotificationCollision = false;
    this->EnableDitherStartLength = -1.00f;
    this->EnableDitherEndLength = -1.00f;
    this->MIsPlayerHit = false;
    this->MPlayerHitTimer = 0.00f;
    this->MEnemyFieldSize = EG01EnemyFieldSize::M;
    this->MToleranceDistance = -1.00f;
    this->MEnemyDispFlag = true;
    this->MUROComponent = CreateDefaultSubobject<UG01FieldEnemyUROComponent>(TEXT("URO Component"));
    this->NavigationQueryFilter = NULL;
    this->MFieldAttackRange = -1.00f;
    this->MAIControllerComponent = CreateDefaultSubobject<UG01AIControllerComponent>(TEXT("RS2re AIController Component"));
    this->MInterlockGimmick = NULL;
}

void AG01FieldEnemyBase::SetEnemyUniqueAnimID(EG01EnemyUniqueAnimID InEnemyUniqueAnimID) {
}

void AG01FieldEnemyBase::OnHitPlayer(AActor* InActor) {
}

void AG01FieldEnemyBase::OnHitOtherEnemy(AActor* InOtherActor) {
}

bool AG01FieldEnemyBase::IsCanUsedUniqueAnim(EG01EnemyUniqueAnimID InEnemyUniqueAnimID) const {
    return false;
}

bool AG01FieldEnemyBase::GetSightDataFromID(float& OutSightRadhius, float& OutSightHight, float& OutLoseSightRadius, float& OutVisionAngleDegrees) {
    return false;
}

bool AG01FieldEnemyBase::GetHearingDataFromID(float& OutHearingRadius, float& OutHearingHight) {
    return false;
}

EG01EnemyFieldSize AG01FieldEnemyBase::GetFieldSize() const {
    return EG01EnemyFieldSize::S;
}

EG01EnemyUniqueAnimID AG01FieldEnemyBase::GetEnemyUniqueAnimID() const {
    return EG01EnemyUniqueAnimID::MF_NONE;
}

FG01CharaStatus AG01FieldEnemyBase::GetEnemyBaseStatus() const {
    return FG01CharaStatus{};
}

FName AG01FieldEnemyBase::GetCrowdID() {
    return NAME_None;
}


