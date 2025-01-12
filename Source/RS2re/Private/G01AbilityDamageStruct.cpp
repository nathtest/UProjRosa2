#include "G01AbilityDamageStruct.h"

FG01AbilityDamageStruct::FG01AbilityDamageStruct() {
    this->HpDamage = 0;
    this->LpDamage = 0;
    this->LpBreak = 0;
    this->HpRecover = 0;
    this->BpRecover = 0;
    this->Affinity = EG01AttackAffinityType::Normal;
    this->IsMiss = false;
    this->IsCritical = false;
    this->IsGuardByShield = false;
    this->IsHpDamage = false;
    this->IsLpDamage = false;
    this->IsLpBreak = false;
    this->IsHpRecover = false;
    this->IsBpRecover = false;
    this->IsFainted = false;
    this->IsDead = false;
    this->ByLinkAction = false;
    this->IgnoreAilment = false;
    this->HitNo = 0;
    this->ReasonToIgnoreOfDamage = EG01ReasonToIgnoreOfDamageEnum::NONE;
}

