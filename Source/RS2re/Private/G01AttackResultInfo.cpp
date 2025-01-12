#include "G01AttackResultInfo.h"

FG01AttackResultInfo::FG01AttackResultInfo() {
    this->MUniqueId = 0;
    this->MDamage = 0;
    this->MLpDamage = 0;
    this->MLpBreak = 0;
    this->LpRecover = 0;
    this->MHpRecover = 0;
    this->BpRecover = 0;
    this->MAffinity = EG01AttackAffinityType::Normal;
    this->MIsHiddenDamage = false;
    this->MIsMiss = false;
    this->MIsCritical = false;
    this->MIsGuardBySheild = false;
    this->MIsHpDamage = false;
    this->MIsLpDamage = false;
    this->IsLpRecover = false;
    this->MIsLpBreak = false;
    this->MIsHpRecover = false;
    this->IsBpRecover = false;
    this->MIsFainted = false;
    this->MIsDead = false;
    this->MByLinkAction = false;
    this->IgnoreAilment = false;
    this->HitNo = 0;
    this->TargetHitNo = 0;
    this->TotalHitNo = 0;
    this->ReasonToIgnoreOfDamageType = EG01ReasonToIgnoreOfDamageEnum::NONE;
    this->isHasMapAspectBonus = false;
    this->isRequestHpDamageReaction = false;
}

