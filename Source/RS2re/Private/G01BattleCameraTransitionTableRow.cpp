#include "G01BattleCameraTransitionTableRow.h"

FG01BattleCameraTransitionTableRow::FG01BattleCameraTransitionTableRow() {
    this->MBeforePhaseType = EG01BattleCameraPhaseType::Invalid;
    this->MAfterPhaseType = EG01BattleCameraPhaseType::Invalid;
    this->MTransitionType = EG01BattleCameraTransitionType::Switch;
    this->MTransitionDuration = 0.00f;
    this->MTransitionCurve = NULL;
}

