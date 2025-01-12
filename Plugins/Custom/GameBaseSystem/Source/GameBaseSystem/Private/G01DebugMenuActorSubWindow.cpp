#include "G01DebugMenuActorSubWindow.h"
#include "Templates/SubclassOf.h"

AG01DebugMenuActorSubWindow::AG01DebugMenuActorSubWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UG01DebugVariableBase* AG01DebugMenuActorSubWindow::CreateVariable(TSubclassOf<UG01DebugVariableBase> InClassType, FG01DebugSettingCSVKeyStruct InKey) {
    return NULL;
}





