#include "SeqNotifySkipPointParams.h"

FSeqNotifySkipPointParams::FSeqNotifySkipPointParams() {
    this->bIncludeFullSkip = false;
    this->FullSkipType = ESeqSkipSectionType::Normal;
    this->bIncludeSectionSkip = false;
    this->SectionSkipType = ESeqSkipSectionType::Normal;
    this->FrameOffset = 0;
}

