#include "G01BattleLinkCommandStruct.h"

FG01BattleLinkCommandStruct::FG01BattleLinkCommandStruct() {
    this->CommandPlan = EG01BattleLinkCommandPlan::Power;
    this->MLinkCount = 0;
    this->LinkGaugeCost = 0;
    this->IsDebug = false;
}

