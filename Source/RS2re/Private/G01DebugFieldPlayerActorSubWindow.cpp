#include "G01DebugFieldPlayerActorSubWindow.h"

AG01DebugFieldPlayerActorSubWindow::AG01DebugFieldPlayerActorSubWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


FName AG01DebugFieldPlayerActorSubWindow::GetRandomLevel(UDataTable* InTable) {
    return NAME_None;
}

bool AG01DebugFieldPlayerActorSubWindow::GetLevelMoveAble() const {
    return false;
}

bool AG01DebugFieldPlayerActorSubWindow::GetEnableLevel(const FName& InLevelName) const {
    return false;
}


