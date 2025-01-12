#include "StreamingControllerManager.h"
#include "EManagerID.h"

AStreamingControllerManager::AStreamingControllerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_STREAMING;
    this->MLevelLoadDataTable = NULL;
}

void AStreamingControllerManager::StopStreaming(FName InLevelName) {
}

void AStreamingControllerManager::StopAllStreaming() {
}

void AStreamingControllerManager::StartStreaming(FName InLevelName) {
}

void AStreamingControllerManager::StartAllStreaming() {
}


