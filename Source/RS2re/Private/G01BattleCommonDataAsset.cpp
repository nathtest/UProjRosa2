#include "G01BattleCommonDataAsset.h"

UG01BattleCommonDataAsset::UG01BattleCommonDataAsset() {
    this->BattleFieldTable = NULL;
    this->ViewSwitcherSettingTable = NULL;
    this->FormationSelectLoopToOtherLine = false;
    this->FormationSelectFrontLineDitherRate = 0.00f;
    this->AdvEnemySlowTurn = 0;
    this->AdvEnemySlowRate = 0.00f;
    this->AdvEnemyHpDamageValue = 0;
    this->AdvEnemyHpDamageRate = 0.00f;
    this->DisadEscapeTurn = 0;
    this->DisadFormationChangeTurn = 0;
    this->TutorialKnockOutDelaySeconds = 0.00f;
    this->ShieldEnableAtLearn = false;
    this->ShieldEnableAtLink = false;
    this->EnemyConfirmCountMax = 0;
    this->EnemyDefeatCountMax = 0;
    this->DecreaseBpRateByEscape_ = 0.10f;
}


