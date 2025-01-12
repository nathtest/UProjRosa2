#include "GameBaseSystemGameSetting.h"

UGameBaseSystemGameSetting::UGameBaseSystemGameSetting() {
    this->GameBootSubsystemHelperClass = NULL;
    this->LoadScreenSubsystemHelperClass = NULL;
    this->IsEnableKeyboardInput = true;
    this->IsEnableMouseInput = true;
    this->RegionType = ERegionType::JP;
    this->MIsTrial = false;
}


