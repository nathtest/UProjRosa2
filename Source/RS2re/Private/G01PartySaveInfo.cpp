#include "G01PartySaveInfo.h"

FG01PartySaveInfo::FG01PartySaveInfo() {
    this->EmperorSuccessionType = EG01EmperorSuccessionType::Dead;
    this->TotalExp_ = 0;
    this->IsPushedMasterLevelInfo = false;
    this->IsUnlockEmperorSuccession = false;
    this->IsUnlockAbdication = false;
    this->IsLastEmperorSuccession = false;
    this->AbilityOpenLevel = 0;
    this->IsNewGamePlus = false;
}

