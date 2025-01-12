#include "G01BattleArtsLinkSetting.h"

FG01BattleArtsLinkSetting::FG01BattleArtsLinkSetting() {
    this->LinkStartFrame = 0;
    this->LinkEndFrame = 0;
    this->DisableLinkInterp = false;
    this->LinkCameraRange = EG01BattleLinkCameraRange::NearSingle;
}

