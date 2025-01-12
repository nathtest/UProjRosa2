#include "G01BgmTableRow.h"

FG01BgmTableRow::FG01BgmTableRow() {
    this->Layer = G01BgmLayer::FIELD;
    this->Priority = 0;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->IsReStart = false;
    this->IsUseResume = false;
    this->IsOneShot = false;
    this->UnregisterBySystemType = EG01BgmUnregisterBySystemType::NONE;
}

