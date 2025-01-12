#include "G01BattleEndNotifyData.h"

FG01BattleEndNotifyData::FG01BattleEndNotifyData() {
    this->MIsWin = false;
    this->MIsLose = false;
    this->MIsEscape = false;
    this->IsAbort = false;
    this->IsRetry = false;
    this->TurnNo = 0;
}

