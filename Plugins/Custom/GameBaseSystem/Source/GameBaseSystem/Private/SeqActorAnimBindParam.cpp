#include "SeqActorAnimBindParam.h"

FSeqActorAnimBindParam::FSeqActorAnimBindParam() {
    this->MIsCreateDefaultActor = false;
    this->MBlendTimeSeconds = 0.00f;
    this->BlendTimeWhenReturnToPlayback = 0.00f;
    this->IsInheritTransform = false;
    this->bAllowAttachWhenHasTargetActor = false;
    this->bIsDestroyPoolActor = false;
}

