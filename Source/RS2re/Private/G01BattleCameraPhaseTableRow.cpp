#include "G01BattleCameraPhaseTableRow.h"

FG01BattleCameraPhaseTableRow::FG01BattleCameraPhaseTableRow() {
    this->MPhaseType = EG01BattleCameraPhaseType::Invalid;
    this->MPlayCount = 0;
    this->MJudgePriority = 0;
    this->MCameraShakeScale = 0.00f;
    this->MEnableFocusSetting = false;
}

