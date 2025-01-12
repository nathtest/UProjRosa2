#include "DebugShortcutManager.h"
#include "EManagerID.h"

ADebugShortcutManager::ADebugShortcutManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_DEBUGSHORTCUT;
}


