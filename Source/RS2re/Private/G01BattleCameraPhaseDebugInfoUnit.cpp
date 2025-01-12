#include "G01BattleCameraPhaseDebugInfoUnit.h"

FG01BattleCameraPhaseDebugInfoUnit::FG01BattleCameraPhaseDebugInfoUnit() {
    this->PhaseType = EG01BattleCameraPhaseType::Invalid;
    this->IsLoaded = false;
    this->IsExcluded = false;
    this->UseCount = 0;
}

