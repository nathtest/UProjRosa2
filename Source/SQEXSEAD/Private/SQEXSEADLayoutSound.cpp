#include "SQEXSEADLayoutSound.h"

ASQEXSEADLayoutSound::ASQEXSEADLayoutSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LayoutType = ESQEXSEADLayoutType::Point;
    this->LayoutSoundComponent = NULL;
}


