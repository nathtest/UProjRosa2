#include "G01FrameGrabberActor.h"

AG01FrameGrabberActor::AG01FrameGrabberActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialInstanceDynamic = NULL;
    this->WidgetMaterialInstanceDynamic = NULL;
    this->CaptureFrameTexture = NULL;
}

void AG01FrameGrabberActor::StopFrameGrab() {
}

bool AG01FrameGrabberActor::StartFrameGrab() {
    return false;
}

void AG01FrameGrabberActor::SetWidgetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI) {
}

void AG01FrameGrabberActor::SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI) {
}

UTexture2D* AG01FrameGrabberActor::GetCaptureFrameTexture() {
    return NULL;
}


