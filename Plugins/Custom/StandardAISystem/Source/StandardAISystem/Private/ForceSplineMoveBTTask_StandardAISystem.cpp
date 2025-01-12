#include "ForceSplineMoveBTTask_StandardAISystem.h"

UForceSplineMoveBTTask_StandardAISystem::UForceSplineMoveBTTask_StandardAISystem() {
    this->NodeName = TEXT("Force Spline Move");
    this->MTimeEdit = true;
    this->MTargetTime = 1.00f;
    this->MSpeed = 100.00f;
    //this->MEasingType = EEasingFunc::Linear;
    this->MIsRotatePitch = true;
}


