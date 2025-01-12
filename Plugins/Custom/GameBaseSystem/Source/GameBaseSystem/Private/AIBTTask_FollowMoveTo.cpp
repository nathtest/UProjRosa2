#include "AIBTTask_FollowMoveTo.h"

UAIBTTask_FollowMoveTo::UAIBTTask_FollowMoveTo() {
    this->NodeName = TEXT("FollowMoveTo");
    this->AcceptableRadius = 5.00f;
    this->FilterClass = NULL;
    this->ObservedBlackboardValueTolerance = 4.75f;
    this->bObserveBlackboardValue = false;
    this->bAllowStrafe = false;
    this->bAllowPartialPath = true;
    this->bTrackMovingGoal = true;
    this->bProjectGoalLocation = true;
    this->bReachTestIncludesAgentRadius = true;
    this->bReachTestIncludesGoalRadius = true;
    this->bStopOnOverlap = true;
    this->bStopOnOverlapNeedsUpdate = true;
    this->MIsAuteChangeSpeed = false;
    this->MMaxSpeed = 500.00f;
    this->MMinSpeed = 100.00f;
    this->MSpeedRate = 1.00f;
}


