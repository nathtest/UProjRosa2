#include "G01SeqNotifyBattleDamage.h"

FG01SeqNotifyBattleDamage::FG01SeqNotifyBattleDamage() {
    this->DamageType = EG01SeqBattleDamageType::Normal;
    this->MIsSingleTarget = false;
    this->MTargetIndex = 0;
}

