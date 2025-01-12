#include "GazeBTService.h"

UGazeBTService::UGazeBTService() {
    this->NodeName = TEXT("Gaze");
    this->LookType = EVALookType::Body;
    this->IsEnableGazeCheck = false;
    this->IsEnableDistanceCheck = false;
    this->DistanceCheckDistance = 1000.00f;
    this->DistanceCheckComparisonOperatorType = EComparisonOperatorType::IsLessThanOrEqualTo;
    this->IsEnableAngleCheck = false;
    this->AngleCheckAngle = 45.00f;
}


