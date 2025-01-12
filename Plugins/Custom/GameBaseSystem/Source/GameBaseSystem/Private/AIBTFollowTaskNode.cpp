#include "AIBTFollowTaskNode.h"

UAIBTFollowTaskNode::UAIBTFollowTaskNode() {
    this->MAcceptableRadius = 0.50f;
    this->MIsAllowStrafe = false;
    this->MReachTestIncludesAgentRadius = true;
    this->MReachTestIncludesGoalRadius = true;
    this->MIsStopOnOverlap = false;
    this->MIsRun = false;
}

/*void UAIBTFollowTaskNode::FollowTaskConcept(TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}*/


