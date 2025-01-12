#include "LevelObjectFindResult.h"

FLevelObjectFindResult::FLevelObjectFindResult() {
    this->ValidMask = ELevelObjectFindResultValidMask::None;
    this->Actor = NULL;
    this->Generator = NULL;
}

