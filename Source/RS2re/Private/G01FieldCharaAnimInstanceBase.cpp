#include "G01FieldCharaAnimInstanceBase.h"

UG01FieldCharaAnimInstanceBase::UG01FieldCharaAnimInstanceBase() {
    this->IsAnimSetting = false;
    this->Speed = 0.00f;
    this->AnimWalkPlaySpeed = 0.00f;
    this->AnimRunPlaySpeed = 0.00f;
    this->AnimTurnPlaySpeed = 0.00f;
    this->IsMove = false;
    this->IsRun = false;
    this->IsDash = false;
    this->IsTurn = false;
    this->IsInAir = false;
}


