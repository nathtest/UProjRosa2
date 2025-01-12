#include "G01DebugLevelTransitionSubWindow.h"

UG01DebugLevelTransitionSubWindow::UG01DebugLevelTransitionSubWindow() {
    this->texture_ = NULL;
    this->table_ = NULL;
}

void UG01DebugLevelTransitionSubWindow::UnLoadTexture() {
}

void UG01DebugLevelTransitionSubWindow::RenderTexture() {
}

void UG01DebugLevelTransitionSubWindow::ParseToLocation(const FString& InStr, FName& OutLevelID, FName& OutRoomID, FVector& OutLocation) {
}

void UG01DebugLevelTransitionSubWindow::LoadTexture(UTexture* InTexture) {
}

TArray<FG01DebugLevelTransitionData> UG01DebugLevelTransitionSubWindow::GetFilteredData(FText InFilter) {
    return TArray<FG01DebugLevelTransitionData>();
}

FText UG01DebugLevelTransitionSubWindow::CopyLocationToClipBoard(FName InLevelID, FName InRoomId, FVector InLocation) {
    return FText::GetEmpty();
}


