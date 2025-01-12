#include "CustomLevelSequencePlayer.h"

UCustomLevelSequencePlayer::UCustomLevelSequencePlayer() {
    this->MaxDeltaSeconds = -1.00f;
    this->MOwnerSequenceController = NULL;
    this->MLastCameraObject = NULL;
    this->MActiveCamera = NULL;
    this->MNowSeconds = -1.00f;
    this->bForceJumpCut = false;
}

float UCustomLevelSequencePlayer::GetNowSeconds() const {
    return 0.0f;
}

FFrameNumber UCustomLevelSequencePlayer::GetNowFrame() const {
    return FFrameNumber{};
}

float UCustomLevelSequencePlayer::GetLastSeconds() const {
    return 0.0f;
}

int32 UCustomLevelSequencePlayer::GetLastFrame() const {
    return 0;
}

AActor* UCustomLevelSequencePlayer::GetActiveCameraActor() const {
    return NULL;
}


