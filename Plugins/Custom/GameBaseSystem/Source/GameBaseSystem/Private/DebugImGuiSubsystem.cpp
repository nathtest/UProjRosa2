#include "DebugImGuiSubsystem.h"
#include "Templates/SubclassOf.h"

UDebugImGuiSubsystem::UDebugImGuiSubsystem() {
    this->DebugImGuiBP = NULL;
}

bool UDebugImGuiSubsystem::SetupTabPage() {
    return false;
}

void UDebugImGuiSubsystem::Setup(bool& OutIsSuccess) {
}

FName UDebugImGuiSubsystem::GetTabPageName(UClass* InClass) {
    return NAME_None;
}

UObject* UDebugImGuiSubsystem::GetTabPage(FG01DebugTabPageKeyStruct InTabPageKey) {
    return NULL;
}

TArray<UObject*> UDebugImGuiSubsystem::GetSubWindowList(FG01DebugSubWindowKeyStruct InSubWindowKey) {
    return TArray<UObject*>();
}

FName UDebugImGuiSubsystem::GetSubWindoweName(UClass* InClass) {
    return NAME_None;
}

TSubclassOf<UG01DebugMenuSubWindow> UDebugImGuiSubsystem::GetSubWindowClass(FG01DebugSubWindowKeyStruct InSubWindowKey) {
    return NULL;
}

UObject* UDebugImGuiSubsystem::GetSubWindow(FG01DebugSubWindowKeyStruct InSubWindowKey) {
    return NULL;
}

UG01DebugBPImGui* UDebugImGuiSubsystem::GetDebugBPImGui() {
    return NULL;
}


