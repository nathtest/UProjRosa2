#include "ImGuiHelper.h"

UImGuiHelper::UImGuiHelper() {
    this->DebugMenuWindow = NULL;
    this->DebugErrorWindow = NULL;
    this->CursorWidget = NULL;
    this->ImGuiInputBinder = NULL;
}

void UImGuiHelper::UpdateImGuiDPIScale() {
}

void UImGuiHelper::ToggleDebugMenuDraw() {
}

void UImGuiHelper::SetEnableImGuiInput(bool InEnable) {
}

void UImGuiHelper::SetDebugMenuDraw(bool InShow) {
}

void UImGuiHelper::SetDebugErrorAndShow(const FString& InMessage) {
}

void UImGuiHelper::SetAutoSwitchingEnableInputByToggleDraw(bool InFlag) {
}

bool UImGuiHelper::IsEnableImGuiInput() {
    return false;
}

bool UImGuiHelper::IsDebugMenuDraw() const {
    return false;
}

bool UImGuiHelper::IsCreatedDebugMenu() {
    return false;
}

bool UImGuiHelper::GetAutoSwitchingEnableInputByToggleDraw() {
    return false;
}

void UImGuiHelper::CreateDebugMenu(FDebugMenuOption InDebugMenuOption) {
}


