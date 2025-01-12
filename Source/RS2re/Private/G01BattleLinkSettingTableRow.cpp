#include "G01BattleLinkSettingTableRow.h"

FG01BattleLinkSettingTableRow::FG01BattleLinkSettingTableRow() {
    this->MStartGaugeOnSurpriseAttack = 0;
    this->MStartGaugeOnBasicBattle = 0;
    this->MStartGaugeOnBackAttack = 0;
    this->AddGaugeOnSurpriseAttackHit = 0;
    this->MAddGaugeForIgnoreDamage = 0;
    this->MAddGaugeForResistDamage = 0;
    this->MAddGaugeForNormalDamage = 0;
    this->MAddGaugeForWeakDamage = 0;
    this->MAddGaugeForCriticalDamage = 0;
    this->InvolveBonusAddGaugePlus = NULL;
    this->InvolveBonusAddGaugeMultiply = NULL;
    this->ComboCountOpForIgnoreDamage = EG01BattleLinkComboCountOperate::Reset;
    this->ComboCountOpForResistDamage = EG01BattleLinkComboCountOperate::Reset;
    this->ComboCountOpForNormalDamage = EG01BattleLinkComboCountOperate::Reset;
    this->ComboCountOpForWeakDamage = EG01BattleLinkComboCountOperate::Reset;
    this->ComboCountOpForCriticalDamage = EG01BattleLinkComboCountOperate::Reset;
    this->ComboCountOpForArtsMiss = EG01BattleLinkComboCountOperate::Reset;
    this->ComboBonusAddGaugePlus = NULL;
    this->ComboBonusAddGaugeMultiply = NULL;
}

