#include "G01BtCommandUiArtsData.h"

FG01BtCommandUiArtsData::FG01BtCommandUiArtsData() {
    this->IsResetData = false;
    this->IsCanUse = false;
    this->tabIndex = 0;
    this->Type = EBattleCommandActionType::NONE;
    this->SourceActor = NULL;
    this->TargetActor = NULL;
}

