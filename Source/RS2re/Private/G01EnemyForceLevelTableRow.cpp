#include "G01EnemyForceLevelTableRow.h"

FG01EnemyForceLevelTableRow::FG01EnemyForceLevelTableRow() {
    this->PlayMode = EG01GamePlayModeType::CLASSIC;
    this->Difficulty = EG01GameDifficultyType::CASUAL;
    this->BaseLevel = 0;
    this->EventPointScale = 0;
    this->BattleCountScale = 0;
    this->BattleWinCountScale = 0;
}

