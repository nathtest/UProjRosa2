#include "G01DebugMainGameManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01DebugMainGameManager::AG01DebugMainGameManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_DEBUG_MAIN;
}

void AG01DebugMainGameManager::WindowSetUp() {
}

void AG01DebugMainGameManager::AddMainMenuContent(FName InFuncName, TArray<FString> InNestList, FName InUserData) {
}


