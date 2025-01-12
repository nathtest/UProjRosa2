#include "G01SeqSkipSettings.h"

FG01SeqSkipSettings::FG01SeqSkipSettings() {
    this->MSkipPressTime = 0.00f;
    this->MSkipReleaseTime = 0.00f;
    this->MIsDisableAllSkipWhenBranch = false;
    this->MIsIncludeLastFrame = false;
    this->MIsIncludeSubSequence = false;
    this->MIsIncludeSubtitle = false;
    this->MIsIncludeBranch = false;
    this->MIsIncludeMessageWindow = false;
}

