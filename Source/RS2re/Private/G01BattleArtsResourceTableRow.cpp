#include "G01BattleArtsResourceTableRow.h"

FG01BattleArtsResourceTableRow::FG01BattleArtsResourceTableRow() {
    this->MSource = EG01BattleCommandSource::Party;
    this->MUseTargetCondition = false;
    this->MTarget = EG01BattleCommandSource::Party;
    this->IsUseExistingController = false;
}

