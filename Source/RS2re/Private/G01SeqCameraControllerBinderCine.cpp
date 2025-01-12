#include "G01SeqCameraControllerBinderCine.h"

AG01SeqCameraControllerBinderCine::AG01SeqCameraControllerBinderCine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsUseCameraCharaOffset = false;
    this->MIsEnableTargetOffset = false;
    this->MOffsetTargetType = EG01SeqCameraOffsetTargetType::OriginActor;
    this->MOffsetTargetSlotIndex = -1;
}


