#include "G01BattleDirectorStruct.h"

FG01BattleDirectorStruct::FG01BattleDirectorStruct() {
    this->MIsSurpriseAttack = false;
    this->MIsBackAttack = false;
    this->MCurrentTurn = 0;
    this->MLinkGauge = 0;
    this->MPartyCount = 0;
    this->MAlivePartyCount = 0;
    this->MFaintPartyCount = 0;
    this->MDeadPartyCount = 0;
}

