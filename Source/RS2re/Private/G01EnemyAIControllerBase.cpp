#include "G01EnemyAIControllerBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionComponent -FallbackName=AIPerceptionComponent

AG01EnemyAIControllerBase::AG01EnemyAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
    this->SightHigh = 0.00f;
    this->HearingHight = 0.00f;
    this->LoseSightTime = 0.00f;
}

void AG01EnemyAIControllerBase::SetUpEnemyBB(float InSearchRadius, float InSearchHight, float InMinWaitTime, float InMaxWaitTime, float InSearchTime, float InIntimidateTime, float InFieldAttackRange) {
}

void AG01EnemyAIControllerBase::SetSightSense(float InSightRadius, float InLoseSightRadius, float InAngleDegrees) {
}

void AG01EnemyAIControllerBase::SetMoveSpeed(EAISpeed InMoveType) {
}

void AG01EnemyAIControllerBase::SetHearingSense(float InHearingRange) {
}

void AG01EnemyAIControllerBase::PerceptionUpdate(const TArray<AActor*> InActorList) {
}

void AG01EnemyAIControllerBase::GetHeadLocation(FVector& OutLocation, FRotator& OutRotation) const {
}


