#include "G01BattlePartyFormationPoint.h"

FG01BattlePartyFormationPoint::FG01BattlePartyFormationPoint() {
    this->TargetWeight = 0;
    this->BeforeDefense = false;
    this->AfterDefense = false;
    this->ShieldActivatePer = 0;
    this->GuarderActivatePer = 0;
    this->DisableBeforeShield = false;
    this->DisableAfterShield = false;
    this->StatusSpeedValue = 0;
    this->ActionSpeedValue = 0;
    this->IsFastTrick = false;
    this->IsDelayAction = false;
    this->DisableArtsActionSpeed = false;
    this->OverDriveGaugeAdd = 0;
}

