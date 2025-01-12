#include "StreamingController.h"

AStreamingController::AStreamingController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MCommonRootPath = TEXT("Level /Game/SandBox/ManagerSystem/");
    this->MSubLevelName = TEXT("TestSubLevel_1");
}

void AStreamingController::Show() {
}

void AStreamingController::FinishUnLoadSubLevel() {
}

void AStreamingController::FinishLoadSubLevel() {
}

void AStreamingController::AddStreamingLevelInfo(FName InLevelFilePath) {
}


