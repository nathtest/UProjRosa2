#include "SequencerBinkMediaTrackInstance.h"

USequencerBinkMediaTrackInstance::USequencerBinkMediaTrackInstance() {
    this->MediaPlayer = NULL;
    this->MediaTexture = NULL;
    this->ResourceTable = NULL;
    this->Current = NULL;
    this->Next = NULL;
    this->PlayingIndex = -1;
    this->SyncSlackMS = 0.00f;
}

void USequencerBinkMediaTrackInstance::OnGamePause(const FOnGamePauseParams& InParams) {
}

bool USequencerBinkMediaTrackInstance::IsAvailable() const {
    return false;
}


