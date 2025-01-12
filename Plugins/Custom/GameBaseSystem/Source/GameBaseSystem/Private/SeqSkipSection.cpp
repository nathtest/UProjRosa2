#include "SeqSkipSection.h"

FSeqSkipSection::FSeqSkipSection() {
    this->Struct = NULL;
    this->Type = ESeqSkipSectionType::Normal;
    this->CheckPointUpdateMethod = EUpdatePositionMethod::Play;
}

