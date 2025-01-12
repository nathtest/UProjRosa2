#include "SeqActorVisibleSettings.h"

FSeqActorVisibleSettings::FSeqActorVisibleSettings() {
    this->VisibleNpc = ESeqActorVisibleType::Keep;
    this->VisibleFieldEnemy = ESeqActorVisibleType::Keep;
    this->VisibleGimmick = ESeqActorVisibleType::Keep;
    this->VisiblePlayer = ESeqActorVisibleType::Keep;
    this->VisibleBattleEnemy = ESeqActorVisibleType::Keep;
}

