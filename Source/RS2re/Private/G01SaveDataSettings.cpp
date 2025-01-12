#include "G01SaveDataSettings.h"

UG01SaveDataSettings::UG01SaveDataSettings() {
    this->AutoSaveDelaySeconds = 0.50f;
    this->ScreenTransitionType = EScreenTransitionType::STANDARD_BLACK;
    this->ScreenTransitionTime = 1.00f;
}


