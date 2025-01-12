#include "G01BattleCameraJudgeBase.h"

UG01BattleCameraJudgeBase::UG01BattleCameraJudgeBase() {
}

EG01BattleCameraPhaseType UG01BattleCameraJudgeBase::GetPhaseType() const {
    return EG01BattleCameraPhaseType::Invalid;
}

FName UG01BattleCameraJudgeBase::GetParameter() const {
    return NAME_None;
}

AActor* UG01BattleCameraJudgeBase::GetOriginActor() const {
    return NULL;
}



