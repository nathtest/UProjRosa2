#include "G01FrameCaptureComponent.h"

UG01FrameCaptureComponent::UG01FrameCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCaptureEveryFrame = false;
    this->CaptureCount = 0;
    this->TextureTarget = NULL;
}

void UG01FrameCaptureComponent::UnRegistCallback() {
}

void UG01FrameCaptureComponent::StopCaptureEveryFrame() {
}

void UG01FrameCaptureComponent::StartCaptureEveryFrame() {
}

void UG01FrameCaptureComponent::RegistCallback() {
}

void UG01FrameCaptureComponent::CaptureScene() {
}


