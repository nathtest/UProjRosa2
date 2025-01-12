#include "G01MapAspectActionUnit.h"

FG01MapAspectActionUnit::FG01MapAspectActionUnit() {
    this->Type = EG01MapAspectType::Invalid;
    this->ChangePercent = 0;
    this->IsOverride = false;
    this->BaseChangePercent = 0;
    this->BoostChangePercent = 0;
    this->TotalChangePercent = 0;
}

