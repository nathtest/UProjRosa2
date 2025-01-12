#include "G01DebugMenuTabPage.h"
#include "Templates/SubclassOf.h"

UG01DebugMenuTabPage::UG01DebugMenuTabPage() {
    this->CreateActorTabPage = NULL;
    this->ActorSubTabPage = NULL;
}

UG01DebugVariableBase* UG01DebugMenuTabPage::CreateVariable(TSubclassOf<UG01DebugVariableBase> InClassType, FG01DebugSettingCSVKeyStruct InKey) {
    return NULL;
}




void UG01DebugMenuTabPage::AddMainMenuContent(FName FuncName, FName UserData, TArray<FString> nestList) {
}


