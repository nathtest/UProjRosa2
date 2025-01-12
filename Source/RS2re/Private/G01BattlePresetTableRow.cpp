#include "G01BattlePresetTableRow.h"

FG01BattlePresetTableRow::FG01BattlePresetTableRow() {
    this->EnemyLevel = 0;
    this->EnemyLevelOffset = 0;
    this->MIsMoveToFrontLine = false;
    this->MIsDuel = false;
    this->CanNotEscape = false;
    this->MUseAdvantageLevel = false;
    this->MAdvantageLevel = 0;
    this->ResultRecoverType = EG01BattleResultRecover::None;
    this->IsDisplayTurnCount = false;
}

