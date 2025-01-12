#include "G01DebugArtsViewerGuiControlActor.h"

AG01DebugArtsViewerGuiControlActor::AG01DebugArtsViewerGuiControlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeinMenuClass = NULL;
    this->MainWindow = NULL;
}

UG01DebugArtsViewerMenu* AG01DebugArtsViewerGuiControlActor::GetMainMenu() const {
    return NULL;
}

UG01DebugArtsViewerMenu* AG01DebugArtsViewerGuiControlActor::CreateMenu(const FG01DebugArtsViewerWindowSettings& InSettings) {
    return NULL;
}


