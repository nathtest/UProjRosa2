#include "G01DebugMenuSubWindow.h"
#include "Templates/SubclassOf.h"

UG01DebugMenuSubWindow::UG01DebugMenuSubWindow() {
    this->CreateActorSubWindow = NULL;
    this->ActorSubWindow = NULL;
}

UG01DebugVariableBase* UG01DebugMenuSubWindow::CreateVariable(TSubclassOf<UG01DebugVariableBase> InClassType, FG01DebugSettingCSVKeyStruct InKey) {
    return NULL;
}





