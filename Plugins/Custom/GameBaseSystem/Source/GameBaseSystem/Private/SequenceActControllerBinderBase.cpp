#include "SequenceActControllerBinderBase.h"

ASequenceActControllerBinderBase::ASequenceActControllerBinderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MBindActionController = NULL;
}

FSeqBinderTransformOverrideParam ASequenceActControllerBinderBase::GetTransformOverrideParam() const {
    return FSeqBinderTransformOverrideParam{};
}

ASequenceActionControllerBase* ASequenceActControllerBinderBase::GetActionController() const {
    return NULL;
}


