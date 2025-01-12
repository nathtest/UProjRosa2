#include "G01BattleVoiceTriggerTableRow.h"

FG01BattleVoiceTriggerTableRow::FG01BattleVoiceTriggerTableRow() {
    this->TriggerType = EG01BattleVoiceTriggerType::BattleStart;
    this->Category = EG01BattleVoiceCategory::Normal;
    this->Priority = 0;
    this->NeedsLipSync = false;
}

