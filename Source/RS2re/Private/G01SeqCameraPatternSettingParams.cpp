#include "G01SeqCameraPatternSettingParams.h"

FG01SeqCameraPatternSettingParams::FG01SeqCameraPatternSettingParams() {
    this->MSpecialPatternProbability = 0.00f;
    this->MBeginCameraPatternIndex = 0;
    this->MIsOnlyUniqueCut = false;
    this->MIsUseRandomPattern = false;
    this->MIsForceSpecialPatternForRandom = false;
    this->MIsSpLotteryForRandom = false;
    this->MIsUseRandomIncrementValue = false;
    this->MPatternIndexIncrementValue = 0;
    this->MIsKeepPatternIndexWhenSpecialPattern = false;
}

