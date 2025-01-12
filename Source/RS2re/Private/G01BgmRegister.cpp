#include "G01BgmRegister.h"

FG01BgmRegister::FG01BgmRegister() {
    this->UniqueId = 0;
    this->MLoadedSoundRef = NULL;
    this->Layer = G01BgmLayer::FIELD;
    this->Priority = 0;
    this->IsPlaying = false;
    this->isStopping = false;
    this->isUnnecessary = false;
    this->isPause = false;
    this->isMain = false;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->isForceFade = false;
    this->Volume = 0.00f;
    this->IsReStart = false;
    this->IsUseResume = false;
    this->StartSeekTime = 0.00f;
    this->IsAliveSeadHandle = false;
    this->IsPlayingSeadHandle = false;
    this->IsAliveSeadSoundBank = false;
    this->IsOneShot = false;
    this->DurationTime = 0.00f;
    this->ElapsedTime = 0.00f;
    this->UnregisterBySystemType = EG01BgmUnregisterBySystemType::NONE;
}

