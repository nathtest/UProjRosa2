#include "G01PlayerStart.h"

AG01PlayerStart::AG01PlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MIsOverridePlayerType = false;
    this->MPlayerTypeOverride = EG01PlayerType::HUMAN;
}


