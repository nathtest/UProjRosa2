#include "G01SEADSoundManagerBase.h"

AG01SEADSoundManagerBase::AG01SEADSoundManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AG01SEADSoundManagerBase::LoadCompleteCallback() {
}

FG01SoundCategory AG01SEADSoundManagerBase::GetCategory() const {
    return FG01SoundCategory{};
}


